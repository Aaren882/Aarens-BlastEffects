//Cluster
class ClusterEffectFly
{
	class Light1
	{
		simulation="light";
		type="FiredLightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=0.1;
		lifeTime=4;
	};
};

//RHS
class RHS_120mm_Sabot_Eject
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_R";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
};
class AmmoClassic;
/*//Tracer
class TracerR_1s: AmmoClassic
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_R";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerTR_1s: TracerR_1s
{
	class Tracer: Tracer
	{
		type = "TracerT_R";
	};
};
class TracerTR_2s: TracerTR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerTR_4s: TracerTR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerTR_5s: TracerTR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerR_2s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerR_3s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerR_4s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerR_5s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerR_10s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 10;
	};
};
class TracerR_15s: TracerR_1s
{
	class Tracer: Tracer
	{
		lifeTime = 15;
	};
};
class TracerG_1s
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_G";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerTG_1s: TracerG_1s
{
	class Tracer: Tracer
	{
		type = "TracerT_G";
	};
};
class TracerTG_2s: TracerTG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerTG_4s: TracerTG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerTG_3s: TracerTG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerTG_5s: TracerTG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerG_2s: TracerG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerG_3s: TracerG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerG_5s: TracerG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerG_10s: TracerG_1s
{
	class Tracer: Tracer
	{
		lifeTime = 10;
	};
};
class TracerY_1s
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_Y";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerTY_1s: TracerY_1s
{
	class Tracer: Tracer
	{
		type = "TracerT_Y";
	};
};
class TracerTY_2s: TracerY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerTY_4s: TracerTY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerTY_5s: TracerTY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerY_2s: TracerY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerY_3s: TracerY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerY_5s: TracerY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerY_6s: TracerY_1s
{
	class Tracer: Tracer
	{
		lifeTime = 6;
	};
};

class TracerW_1s
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_W";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerTW_1s: TracerW_1s
{
	class Tracer: Tracer
	{
		type = "TracerT_W";
	};
};
class TracerTW_2s: TracerTW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerTW_3s: TracerTW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerTW_4s: TracerTW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerTW_5s: TracerTW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerW_2s: TracerW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerW_3s: TracerW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 3;
	};
};
class TracerW_4s: TracerW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 4;
	};
};
class TracerW_5s: TracerW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerW_30s: TracerW_1s
{
	class Tracer: Tracer
	{
		lifeTime = 30;
	};
};
//IR
//Red
class TracerR_1s_IR
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_R_IR";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerR_2s_IR: TracerR_1s_IR
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerR_5s_IR: TracerR_1s_IR
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerG_1s_IR
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_G_IR";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerY_1s_IR
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_Y_IR";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerY_2s_IR: TracerY_1s_IR
{
	class Tracer: Tracer
	{
		lifeTime = 2;
	};
};
class TracerY_5s_IR: TracerY_1s_IR
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};
class TracerW_1s_IR
{
	class Tracer
	{
		simulation = "light";
		type = "Tracer_W_IR";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class TracerW_2s_IR: TracerW_1s_IR
{
	class Tracer: Tracer
	{
		lifeTime = 5;
	};
};*/

class ASBE_WPTrailEffect
{
	class ASBE_WPTrailEffect
	{
		simulation = "particles";
		type = "ASBE_WPTrailEffect";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Light1
	{
		simulation = "light";
		type = "TankLight_CM";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
};
//Chaff
class ASBE_CounterMeasureChaff
{
	class CM1
	{
		simulation = "particles";
		type = "ABSE_Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 5;
	};
	class light
	{
		simulation = "light";
		type = "ASBE_CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 5;
	};
};

#pragma hemtt flag pe23_ignore_has_include
#if __has_include("\MG8\ASBETracer\config.bin")
#else
	//Blast Effects
	//Shells
	class ExploAmmoExplosion
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class ImpactHay;
	class APCImpactHay: ImpactHay
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class Blast_HE
		{
			simulation="particles";
			type="Blast_HE";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=0.2;
		};
	};
	class MPShellExplosion: ExploAmmoExplosion{};
	//AP
	class ImpactMetalSabotSmall
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class ImpactConcreteSabot
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class ImpactConcreteSabotSmall
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class ImpactEffectsGroundSabot
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	//Blastcore
	class BCImpactDirt_120mm
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class BCImpactConcrete_120mm
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	//Murr
	class BCImpactDirt_30mm
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	class BCImpactConcrete_30mm
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
	};
	//HE
	class HEShellExplosion: ExploAmmoExplosion
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=0.01;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class ArtyShellExplosion
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=0.01;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Med";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class MortarExplosion
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=0.01;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class ATMissileExplosion
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=1;
			intensity=1;
			lifeTime=0.1;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Med";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
		/*class SmallSmoke1
		{
			simulation = "particles";
			type = "CloudMedDark";
			position[] = {0,0,0};
			intensity = 1;
			interval = 1;
			lifeTime = 0.5;
		};*/
	};
	//Blastcore
	class 30mmExplode
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class Blast_HE
		{
			simulation="particles";
			type="Blast_HE";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=0.2;
		};
	};
	class 155mm_Explode
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=0.01;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class BombExplosion
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	//Blastcore
	class 80mm_Explode
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.2;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.2;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class M136_Explode
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class Hellfire_Explode
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Med";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class MK82_Explode
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	//Vn
	class vn_fx_exp_r_70_he_01
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_wp_rocket_exp_m156_wp
	{
		/*class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};*/
	};
	class vn_fx_exp_m_agm_heat
	{
		class LightExp
		{
			simulation="light";
			type="ExploLightFast";
			position[] = {0,1.5,0};
			intensity=1;
			interval=0.1;
			lifeTime=0.4;
		};
		class ExpSparks1_FX
		{
			simulation="particles";
			type="ExpSparks1_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExpSparks2_FX
		{
			simulation="particles";
			type="ExpSparks2_FX";
			position[]={0,2,0};
			interval=0.1;
			intensity=1;
			lifeTime=0.4;
		};
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_s_60_he_01
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_r_70_wp_01: vn_fx_exp_s_60_he_01
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=0;
		};
	};
	class vn_fx_exp_s_60_wp_01: vn_fx_exp_s_60_he_01
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=0;
		};
	};
	class vn_fx_exp_m_arm_he
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_500_fb
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_s_105_heat_01
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_500_he
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_500_cb
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_750_he
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_1000_he
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_2000_he
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_500_dc
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_b_15000_dc
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class vn_fx_exp_r_130_heat_01
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_Large";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	//WarPFX
	class fxp_80mm_Explode
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_VeryBig";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
	class fxp_MK82exp1Link
	{
		class ExplodeRefract
		{
			simulation="particles";
			type="ExplodeRefract_VeryBig";
			position[]={0,0,0};
			intensity=1;
			interval= 1;
			lifeTime=1;
		};
	};
#endif