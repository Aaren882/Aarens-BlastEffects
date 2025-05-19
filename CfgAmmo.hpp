class CfgAmmo
{
	class BulletBase;
	class SubmunitionBullet;
	
	//Aircraft
	class CMflareAmmo;
	class CMflare_Chaff_Ammo: CMflareAmmo
	{
		effectsSmoke = "ASBE_CounterMeasureChaff";
		airFriction = -0.008;
	};
	//Tank CM
	class SmokeLauncherAmmo: BulletBase
	{
		simulation = "shotCM";
		muzzleEffect = "ASBE_fnc_effectFiredSmokeLauncher";
		explosionEffects = "EmptyEffect";
		weaponLockSystem = "1 + 2 + 4 + 16";
	};
	
	//30mm APFSDS
	class B_30mm_AP;
	class B_30mm_APFSDS: B_30mm_AP
	{
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "APCImpactHay";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
	};
	
	//40mm APFSDS
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "APCImpactHay";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
	};
	
	//120mm
	class ShellBase;
	class Sh_120mm_HE: ShellBase
	{
		ExplosionEffects = "HEShellExplosion";
	};
	//120mm MP
	class Sh_120mm_HEAT_MP: ShellBase
	{
		explosionEffects = "MPShellExplosion";
	};
	//125mm HEAT
	class Sh_125mm_HE;
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
		explosionEffects = "MPShellExplosion";
	};
};