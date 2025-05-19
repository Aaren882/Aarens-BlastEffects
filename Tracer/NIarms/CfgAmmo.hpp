class HLC_300Blackout_Ball: B_556x45_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerendtime = 1;
};
//762x39
class HLC_762x39_Ball: HLC_300Blackout_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	tracerEndTime = 2;
	nvgonly = 1;
	Tracer_Color = "TracerR_IR";
};
class HLC_762x39_AP: HLC_300Blackout_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	tracerEndTime = 2;
	nvgonly = 1;
	Tracer_Color = "TracerR_IR";
};
class HLC_762x39_SUB: HLC_300Blackout_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	tracerEndTime = 2;
	nvgonly = 1;
	Tracer_Color = "TracerR_IR";
};
class HLC_762x39_Tracer: HLC_762x39_Ball
{
	nvgonly = 0;
	tracerEndTime = 2;
	Tracer_Color = "TracerR";
};
//762x51
class HLC_762x51_ball: B_762x51_Ball
{
	tracerEndTime = 2.15957;
};
class HLC_762x51_Barrier: HLC_762x51_ball
{
};
class HLC_762x51_MK316_20in: HLC_762x51_ball
{
};
class HLC_762x51_BTSub: HLC_762x51_ball
{
};
class HLC_762x51_tracer: HLC_762x51_ball
{
	tracerendtime = 2;
};
//556x45
class HLC_556NATO_EPR: B_556x45_Ball
{
};
class HLC_556NATO_EPR_Tracer: HLC_556NATO_EPR
{
	tracerEndTime = 2;
};
class HLC_556NATO_SOST: B_556x45_Ball
{
};
class HLC_556NATO_SPR: B_556x45_Ball
{
};
class HLC_B_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
{
	Tracer_Color = "TracerR_IR";
};
class HLC_B_762x51_Tracer_Dim: B_762x51_Tracer_Yellow
{
	Tracer_Color = "TracerY_IR";
};
//68x43
class HLC_68x43_FMJ: B_556x45_Ball
{
};
class hlc_68x43_OTM: HLC_68x43_FMJ
{
};
class hlc_68x43_Sub: HLC_68x43_FMJ
{
};
class hlc_68x43_IRDIM: HLC_68x43_FMJ
{
	Tracer_Color = "TracerR_IR";
};
//9x19
class HLC_9x19_Ball: B_556x45_Ball
{
};
class HLC_9x19_JHP: HLC_9x19_Ball
{
};
class HLC_9x19_M882_SMG: B_556x45_Ball
{
};
class HLC_9x19_JHP_SMG: HLC_9x19_Ball
{
};
class HLC_9x19_Subsonic: HLC_9x19_Ball
{
};
//GP11
class HLC_GP11_FMJ: B_762x51_Ball
{
};
class HLC_GP11_APBT: B_762x51_Ball
{
};
class HLC_GP11_tracer: HLC_GP11_FMJ
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerEndTime = 5;
};
//303
class HLC_303Brit_B: B_556x45_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	nvgonly = 1;
	tracerendtime = 1;
	Tracer_Color = "TracerR_IR";
};
class HLC_303Brit_T: HLC_303Brit_B
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	tracerendtime = 2;
	Tracer_Color = "TracerW_IR";
};
class HLC_303Brit_AP: HLC_303Brit_B
{
};
//MG42
class HLC_792x57_Ball: HLC_303Brit_B
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	nvgonly = 1;
	tracerendtime = 1;
	Tracer_Color = "TracerR_IR";
};
class HLC_792x57_Tracer: HLC_792x57_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	tracerendtime = 1;
	Tracer_Color = "TracerY_IR";
};
class HLC_792x57_AP: HLC_792x57_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	nvgonly = 1;
	tracerendtime = 1;
	Tracer_Color = "TracerR_IR";
};