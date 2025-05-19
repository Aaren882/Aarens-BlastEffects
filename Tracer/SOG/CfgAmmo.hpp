//Tracers
class vn_BulletBase: BulletBase
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
class vn_riflebullet_base: vn_BulletBase
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerScale = 1;
	tracerStartTime = 0.05;
	tracerEndTime = 1;
	Tracer_Color = "TracerTR";
};
class vn_20x110: BulletBase
{
	tracerScale = 1;
	tracerStartTime = 0.05;
	tracerEndTime = 1;
	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

//762
SetTracerColor(vn_762x39,vn_riflebullet_base,"TracerTG");

class vn_762x51;
SetTracerColor(vn_762x51_m134,vn_762x51,"TracerR");
SetTracerColor(vn_762x54,vn_riflebullet_base,"TracerTG");

class vn_77x56;
SetTracerColor(vn_77x58,vn_77x56,"TracerTY");

SetTracerColor(vn_792x33,vn_riflebullet_base,"TracerTY");
SetTracerColor(vn_792x57,vn_792x33,"TracerTY");

//Cannons
SetTracerColor(vn_sh_76mm_hvapdst,Sh_120mm_APFSDS,"TracerR");
SetTracerColor(vn_sh_76mm_he,Sh_120mm_HE,"TracerR");

class vn_pistolbullet_base;
SetTracerColor(vn_762x25,vn_pistolbullet_base,"TracerTG");
SetTracerColor(vn_1143x23,vn_pistolbullet_base,"TracerTR");
SetTracerColor(vn_765x17_t64,vn_pistolbullet_base,"TracerTR");
SetTracerColor(vn_765x17,vn_pistolbullet_base,"TracerTR");
