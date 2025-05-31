params ["", "", "", "", "_ammo", "", "_projectile", ""];

private _result = (call ASBE_fnc_Tracer_Detection) params ["_spawn","_setup"];
private _cfgAmmo = configFile >> "CfgAmmo" >> _ammo;

if (
  (tracer_illuminate_list == "-") ||
  !_spawn
) exitWith {};

//Create Light Source
[{
    params ["_projectile","_Cfg","_setup"];

    private _light = ("Tracer" + _setup + tracer_illuminate_list) createVehicleLocal [0,0,0];
    _light attachTo [_projectile, [0,0,0]];

    //-Delete the Light
    [{
      params ["_projectile","","_end"];
      !(alive _projectile) || (time > _end)
     }, {

        // -Delete Light
        deleteVehicle (_this # 1);

      }, [_projectile,_light, time + getNumber (_Cfg >> "tracerEndTime")]
    ] call CBA_fnc_waitUntilAndExecute;

  }, [_projectile, _cfgAmmo,_setup], 
  [0 ,getNumber (_cfgAmmo >> "tracerStartTime")] select tracer_illuminate_sim
] call CBA_fnc_waitAndExecute;
