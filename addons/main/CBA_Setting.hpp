//-List
[
	"tracer_illuminate_list", "LIST",
	["Enable Tracer Ilumination"],
 	"Aaren's Blast Effect",
 	[["-","_10","_20","_30","_40","_50",""], ["Disabled","10%","20%","30%","40%","50%","100%"], 6]
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