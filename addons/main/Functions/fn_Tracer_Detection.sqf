params ["_unit", "_weapon", "_muzzle", "", "_ammo", "_magazine", "", ""];
private ["_cache","_key","_count","_magCfg","_tracersEvery","_lastRoundsTracer","_weaponCfg","_mult"];

_cache = localNamespace getVariable "ASBE_cache";
_key = [_magazine,_weapon] joinString "-";

if !(_key in _cache) then {
  private ["_Cfg","_model","_index","_color","_caliber","_ShowInIR","_intensity","_tracersEvery","_lastRoundsTracer","_mult"];

  // -Light for Ammo
  _Cfg = configFile >> "CfgAmmo" >> _ammo;
  _model = getText(_Cfg >> "model");

  // Exit if none model
    if (_model == "") exitWith {false};

  _index = _model find "\tracer_";

  //- Blastcore Tracers A3 - FoxFort Edit
    if (_index < 0) then {
      _index = _model find "BCTracers_Edited";
    };
  
  _color = toLowerANSI ([
    _model select [_index + 1],
    ""
  ] select (_index < 0));

  _color = switch (true) do {
    case ("red" in _color || "orange" in _color): {"R"};
    case ("green" in _color): {"G"};
    case ("white" in _color): {"W"};
    case ("yellow" in _color): {"Y"};
    default {""};
  };

  // Exit if none model
    if (_color == "") exitWith {false};

  _caliber = getNumber (_Cfg >> "caliber");

  //- 9mm = 1.2 || .45 = 1.4
  if (
    (_caliber == 1.2 || _caliber == 1.4) &&
    !tracer_SUB_sim
  ) exitWith {false};

  _intensity = ["","T"] select (1 > linearConversion [0,1.6,_caliber,0,1,true]);

  _ShowInIR = if (0 < getNumber(_Cfg >> "nvgonly")) then {
    _intensity = "";
    "_IR"
  } else {
    ""
  };

  // -Magazine
  _Cfg = configFile >> "CfgMagazines" >> _magazine;
  _tracersEvery = [3, getNumber (_Cfg >> "tracersEvery")] select (isNumber (_Cfg >> "tracersEvery"));

  // -Reloading Tracer
  _lastRoundsTracer = getNumber (_Cfg >> "lastRoundsTracer");

  // -Weapon Mode (Multiplier)
  _Cfg = configFile >> "CfgWeapons" >> _weapon;
  _mult = [0, getNumber (_Cfg >> "Multiplier")] select (isNumber (_Cfg >> "Multiplier"));
  
  //- Apply to cache
  _cache set [_key, [_tracersEvery,_lastRoundsTracer,_mult, _intensity + _color + _ShowInIR]];
  localNamespace setVariable ["ASBE_cache", _cache];
};

//- Output 
(_cache get _key) params [
  "_tracersEvery",
  "_lastRoundsTracer",
  "_mult",
  "_setup"
];

_count = (_unit ammo _muzzle) + _mult;

// -Result
if ((_tracersEvery > 0) || (_lastRoundsTracer > 0)) then {
  private ["_mod","_condition"];
  
  _mod = if (_tracersEvery > 0) then {_count mod _tracersEvery} else {-1};
  _condition = if (_mod != -1) then {_mod == (_lastRoundsTracer mod _tracersEvery)} else {false};

  [(_condition) || (_tracersEvery == 1) || (_count <= _lastRoundsTracer),_setup]
} else {
  false
};
