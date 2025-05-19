//-List
[
	"tracer_illuminate_list", "LIST",
	["Enable Tracer Ilumination"],
 	"Aaren's Blast Effect",
 	[["-","_10","_50",""], ["Disabled","10%","50%","100%"], 3]
] call CBA_fnc_addSetting;

[
	"tracer_SUB_sim", "CHECKBOX",
	["Iluminate 9mm or .45", "SUB-Machine guns and Pistols (Base on Vanilla calibers)."],
 	"Aaren's Blast Effect",
 	false,
	0,
	{
		localNamespace setVariable ["ASBE_cache", createHashMap];
	}
] call CBA_fnc_addSetting;

[
	"tracer_illuminate_sim", "CHECKBOX",
	["Muzzle as Fator", "Simulation for Tracers ignition after flew out the muzzle"],
 	"Aaren's Blast Effect",
 	true
] call CBA_fnc_addSetting;