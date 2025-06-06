/*ArmA 2 smokscreen, by Maddmatt
Uses code from VBS2 Smoke launcher by Philipp Pilhofer (raedor) & Andrew Barron
Edited by Aaren
*/
private ["_config","_v","_shells","_num","_vel","_useTDir","_angle","_dir","_deltaDir","_arc","_initDist","_posV","_Vdir","_vH","_vV","_smokeg"];
_v=_this select 0;
_shells=[];


//Read values from config

_config = configOf _v;
_num=getNumber (_config >> "smokeLauncherGrenadeCount");
_vel=getNumber (_config >> "smokeLauncherVelocity");
_useTDir=getNumber (_config >> "smokeLauncherOnTurret");
_angle=getNumber (_config >> "smokeLauncherAngle");

if (_num>0) then
{
	_dir = direction _v;
	if ((_useTDir==1) && (count weapons _v > 0)) then
	{
		_dir = _v weaponDirection ((weapons _v) select 0);
		_dir = (((_dir select 0) atan2 (_dir select 1))+360)%360;
	};

	_deltaDir = _angle/_num;			//degrees between grenades.
	_arc = _deltaDir*(_num-1);		//total arc to cover, in degrees

	//distance from vehicle center where grenades are created; base it on vertical height
	_initDist = (((boundingBox _v) select 1) select 2)-(((boundingBox _v) select 0) select 2);

	//sleep 0.25;
	_posV = visiblePositionASL _v;
	_Vdir = 30;	                     //angle of elevation. Temporary: launch all grenades at same angle
	//derive velocity
	_vH = _vel * cos _Vdir;          //horizontal component of velocity
	_vV = _vel * sin _Vdir;          //vertical component


	for "_i" from 0 to (_num - 1) do
	{
		//find starting parameters
		_Hdir = ((_i*_deltaDir)+_dir) - _arc/2; //relative direction around vehicle


		_Gvel = [_vH *sin(_Hdir), _vH*cos (_Hdir), _vV]; //initial grenade velocity

		//find starting position for grenades
		_pH = _initDist * cos _Vdir;     //initial distance horizontally away from vehicle center to create grenade
		_pV = _initDist * sin _Vdir;     //vertical distance

		//create / launch the grenade
		_smokeg = "SmokeShellVehicle" createVehicleLocal [0,0,0];
		_smokeg setPosASL [(_pH * sin _Hdir) + (_posV select 0), (_pH * cos _Hdir)+ (_posV select 1), _pV+ (_posV select 2)];
		_smokeg setVectorUp (_Gvel call BIS_fnc_unitVector);
		_smokeg setVelocity _Gvel;
		_shells set [count _shells, _smokeg];
	};

	//z: only one spawned thread for grenades, should improve scripting performance when there are lots of smoke grenades launched simultanously.
	_shells spawn {
		scriptName "fn_effectFiredSmokeLauncher_shellLoop";
		private ["_sources","_source2","_source3"];
		sleep 0.7;
		_sources = [];
		{
			_source2 = "#particlesource" createVehicleLocal getPos _x;
			_source2 setParticleClass "ASBE_WPTrails";
			_sources set [count _sources,_source2];

			_source3 = "#particlesource" createVehicleLocal getPos _x;
			_source3 setParticleClass "ASBE_WPCloud";
			_sources set [count _sources,_source3];
		} forEach _this;

		sleep 0.08;
		{deleteVehicle _x} forEach _sources;
	};
};
