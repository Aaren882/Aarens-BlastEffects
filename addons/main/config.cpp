class CfgPatches
{
	class Tracer_C_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion=2;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Jets",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Weapons_F_Mark",
			"A3_Data_F_ParticleEffects",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Structures_F_Mil_Helipads",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_Armor_F_Beta_APC_Tracked_02",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Beta_APC_Wheeled_02"
		};
	};
};

class Extended_PreInit_EventHandlers 
{
	class ASBE_EH
	{
		init = "call compile preprocessFileLineNumbers 'z\ASBE\addons\main\XEH_preInit.sqf'";
	};
};
class DefaultEventHandlers;
class Extended_PostInit_EventHandlers 
{
	class ASBE_EH
	{
		init = "call compile preprocessFileLineNumbers 'z\ASBE\addons\main\XEH_postInit.sqf'";
	};
};

#include "CfgAmmo.hpp"
//#include "CfgMagazines.hpp"
#include "CfgEffects.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"

class CfgCloudlets
{
	class Default;
	
	//Flares
	class WPTrails;
	class ASBE_WPTrails: WPTrails
	{
		lifeTime = 6;
		interval=0.01;
		size[] = {0,0.5};
		moveVelocity[] = {1,1,1};
		MoveVelocityVar[] = {3,0,3};
		blockAIVisibility = 1;
		position[] = {0,-2,0};
		particleEffects = "ASBE_WPTrailEffect";
		bounceOnSurface=0.12;
		bounceOnSurfaceVar= 0.06;
	};
	class WPTrailEffect;
	class ASBE_WPTrailEffect: WPTrailEffect
	{
		lifeTime = 6;
		color[] = 
		{
			{1,1,1,0},
			{1,1,1,1},
			{1,1,1,0.8},
			{1,1,1,0.7},
			{1,1,1,0.35},
			{1,1,1,0}
		};
		moveVelocity[] = {0,1,0};
		MoveVelocityVar[] = {0.5,1,0.5};
		rubbing=6;
	};
	class WPCloud;
	class ASBE_WPCloud: WPCloud
	{
		lifeTime = 20;
		size[] = {0.5,8,12,20};
		positionVar[] = {4,0,4};
		moveVelocity[] = {0,-0.5,0};
		blockAIVisibility = 1;
	};
	
	class ABSE_Cmeasures1: Default
	{
		interval=0.01;
		particleShape="\A3\Data_F\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		particleType="Billboard";
		animationName="";
		animationSpeed[] = {500};
		timerPeriod=0;
		lifeTime=5;
		position[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		rotationVelocity=0;
		weight=1.25;
		volume=1;
		rubbing=3;
		size[] = {1.5,2,2.2,2.5,3};
		color[]=
		{
			{0.7,0.8,1,0.8},
			{0.7,0.8,1,0.05},
			{0.7,0.8,1,0.01},
			{0.7,0.8,1,0}
		};
		lifeTimeVar=3;
		positionVar[] = {0.1,0.1,0.1};
		positionVarConst[] = {0.1,0,0.1};
		MoveVelocityVar[] = {0.2,0,0.2};
		sizeVar=0.2;
		MoveVelocityVarConst[] = {0,0,0};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		angleVar=1;
	};
	
	//Fire FX
	/*class ObjectDestructionFire1Smallx: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{1,1,1,0}};
		
		damageType = "Empty";
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0.1;
		constantDistance = 0;
	};
	class ObjectDestructionFire2Smallx: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{1,1,1,0}};
		
		damageType = "Empty";
		coreIntensity = 0;
		coreDistance = 0;
		damageTime = 0.1;
		constantDistance = 0;
	};
	
	class ObjectDestructionSmokeSmallx: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{0.05,"0.05.",0.05,0}};
	};
	class ObjectDestructionSmoke2x: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{0.05,"0.05.",0.05,0}};
	};
	class FireSparks: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{0.05,"0.05.",0.05,0}};
	};
	class ObjectDestructionSmoke1_2Smallx: Default
	{
		interval = 0;
		lifeTime = 0;
		lifeTimeVar = 0;
		size[] = {0};
		color[] = {{0.05,"0.05.",0.05,0}};
	};*/
	//Impact
	class ImpactSparks0: Default
	{
		size[] = {0.01};
		sizeCoef=0.05;
		color[]=
		{
			{1,1,0.5,-0.8}
		};
		emissiveColor[]=
		{
			{60000,60000,5000,0.079999998}
		};
	};
	class ImpactSparks1: Default
	{
		moveVelocity[]=
		{
			"(surfNormalX / 1) * 1",
			"(surfNormalY / 1) * 1",
			"(surfNormalZ / 1) * 1"
		};
		size[] = {0.05};
		color[]=
		{
			{1,1,0.8,-1},
			{1,1,0.60000002,0}
		};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class ImpactSparks2: Default
	{
		size[] = {0.01};
		sizeCoef=0.1;
		color[]=
		{
			{1,1,1,-0.8}
		};
		emissiveColor[]=
		{
			{60000,60000,5000,0.079999998}
		};
	};
	class ExpSparks1;
	/*class Sparks_med: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Flare\Flare";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.5;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 1;
		weight = 0.15;
		volume = 0.1;
		rubbing = 0.18;
		size[] = {0.2};
		color[] = {{1,1,0.8,-1},{1,1,0.7,0}};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {100,100,100};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,8000,0.5}};
	};
	class 30mm_Blast_Glow: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.03;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 50;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {10};
		color[] = {{1,1,0.4,-0.0005},{1,1,0.4,0}};
		animationSpeed[] = {0};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};*/
	class ExpSparks1_FX: Default
	{
		particleShape = "\A3\data_f\ParticleEffects\Universal\Smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		particleType = "Billboard";
		
		bounceOnSurface=0.01;
		bounceOnSurfaceVar= 0.3;
		animationSpeed[] = {-2};
		size[] = {0.05};
		sizeVar=0.5;
		interval = 0.01;
		rubbing=0.15;
		moveVelocity[] = {0,0,0};
		MoveVelocityVar[] = {15,10,15};
		
		positionVar[] = {5,5,5};
		
		angleVar = 360;
		
		color[]=
		{
			{0.8,0.6,0.16,-1},
			{0.8,0.6,0.16,0}
		};
		
		colorVar[] = {0.05,0.05,0.05,0};
		
		rotationVelocity = 1;
		lifeTime=6;
		lifeTimeVar=2;
		//size[] = {0.05,0.035,0};
		
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		
		weight=2.5;
		volume=0.5;
		
		emissiveColor[]=
		{
			{10000,6000,1600,0.5}
		};
	};
	class ExpSparks2_FX: ExpSparks1_FX
	{
		interval = 0.002;
		
		size[] = {0.15};
		
		lifeTime = 0.2;
		lifeTimeVar = 1;
		
		moveVelocity[] = {0,10,0};
		MoveVelocityVar[] = {75,100,75};
		
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		
		/*interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		particleType = "Billboard";
		angleVar = 360;
		animationName = "";
		timerPeriod = 0.1;
		lifeTime = 0.5;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 1;
		weight = 0.15;
		volume = 0.1;
		rubbing = 0.18;
		size[] = {0.2};
		color[] = {{1,1,0.8,-1},{1,1,0.7,0}};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {100,100,100};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,8000,0.5}};*/
	};
	class Blast_HE: ExpSparks1_FX
	{
		interval=0.013;
		
		moveVelocity[] = {0,10,0};
		MoveVelocityVar[] = {4,1,4};
		positionVar[] = {1,2,1};
		
		weight=40;
		volume=1;
	};
	class Blast_Glow: Default
	{
		particleShape = "\A3\data_f\ParticleEffects\Universal\Smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		particleType = "Billboard";
		
		bounceOnSurface=0.6;
		bounceOnSurfaceVar=0.3;
		moveVelocity[] = {0,10,0};
		MoveVelocityVar[] = {10,2,10};
		interval=0.6;
		circleRadius=0;
		circleVelocity[] = {0,0,0};
		angleVar=360;
		animationName="";
		lifeTime=3;
		rotationVelocity=0;
		
		rubbing=3;
		size[] = {0.08,0.1,0.02,0};
		color[]=
		{
			{1,1,0.4,-1},
			{1,1,0.4,0}
		};
		animationSpeed[] = {0.25};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		
		positionVar[] = {5,3,5};
		
		rotationVelocityVar=0;
		sizeVar=0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		
		weight=0.15;
		volume=0.1;
		
		emissiveColor[]=
		{
			{10000,10000,10000,1}
		};
	};
	class CloudMedDark: Default
	{
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 4","0.0125 * intensity + 6","0.015 * intensity + 8"};
	};
	//Blast Refract Effects
	class ExplodeRefract_Large: Default
	{
		angleVar=1;
		animationName="";
		animationSpeed[] = {1};
		beforeDestroyScript="";
		circleRadius=0;
		circleVelocity[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[]=
		{
			{1,1,1,0.08},
			{0.5,0.5,0.5,0.1},
			{0.3,0.3,0.3,0.02},
			{0.2,0.2,0.2,0}
		};
		interval= 30;
		lifeTime=0.4;
		lifeTimeVar=0;
		MoveVelocityVar[] = {0.2,0.5,0.2};
		moveVelocity[] = {0,0,0};
		onTimerScript="";
		particleFSFrameCount=1;
		particleFSIndex=0;
		particleFSLoop=0;
		particleFSNtieth=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Smoke";
		particleType="Billboard";
		positionVar[] = {0.4,0.1,0.4};
		randomDirectionIntensity=0.2;
		randomDirectionIntensityVar=0;
		randomDirectionPeriod=0.2;
		randomDirectionPeriodVar=0;
		rotationVelocity=0;
		rotationVelocityVar=90;
		rubbing=0.1;
		sizeVar=0.5;
		Size[] = {1,8,20,35,50,70,100};
		timerPeriod=1;
		volume=7.9000001;
		weight=10;
	};
	class ExplodeRefract_Med: ExplodeRefract_Large
	{
		Size[] = {1,8,20,35,50,70};
		color[]=
		{
			{1,1,1,0.04},
			{0.5,0.5,0.5,0.08},
			{0.3,0.3,0.3,0.02},
			{0.2,0.2,0.2,0}
		};
	};
	class ExplodeRefract_Small: ExplodeRefract_Large
	{
		Size[] = {1,8,20,35};
		color[]=
		{
			{1,1,1,0.04},
			{0.5,0.5,0.5,0.08},
			{0.3,0.3,0.3,0.02},
			{0.2,0.2,0.2,0}
		};
	};
	class ExplodeRefract_VeryBig: ExplodeRefract_Large
	{
		Size[] = {1,8,20,35,50,70,100,120};
		color[]=
		{
			{1,1,1,0.04},
			{0.5,0.5,0.5,0.1},
			{0.3,0.3,0.3,0.04},
			{0.2,0.2,0.2,0}
		};
	};
};
class CfgLights
{
	//Vehicle
	class Tracer_R
	{
		diffuse[]= {1,0.1,0.1};
		color[] = {1,0.1,0.1};
		ambient[] = {1,0.1,0.1};
		brightness = 2;
		position[] = {0,0,0};
		drawLight = 1;
		dayLight = 1;
		intensity=0;
		class Attenuation
		{
			start = 1;
			constant = 1;
			linear = 1;
			quadratic = 1;
			hardLimitStart = 100 * 0.7;
			hardLimitEnd = 100;
		};
	};
	class Tracer_G: Tracer_R
	{
		diffuse[]= {0.5,1,0.08};
		color[] = {0.5,1,0.08};
		ambient[] = {0.5,1,0.08};
	};
	class Tracer_Y: Tracer_R
	{
		diffuse[]= {1,0.6,0};
		color[] = {1,0.6,0};
		ambient[] = {1,0.6,0};
	};
	class Tracer_W: Tracer_R
	{
		diffuse[]= {0.8,0.8,0.8};
		color[] = {0.8,0.8,0.8};
		ambient[] = {0.8,0.8,0.8};
	};
	//Trooper
	class TracerT_R: Tracer_R
	{
		brightness = 0.1;
		intensity=0;
	};
	class TracerT_G: TracerT_R
	{
		diffuse[] = {0.5,1,0.08};
		color[] = {0.5,1,0.08};
		ambient[] = {0.5,1,0.08};
	};
	class TracerT_Y: TracerT_R
	{
		diffuse[] = {1,0.6,0};
		color[] = {1,0.6,0};
		ambient[] = {1,0.6,0};
	};
	class TracerT_W: TracerT_R
	{
		diffuse[] = {0.8,0.8,0.8};
		color[] = {0.8,0.8,0.8};
		ambient[] = {0.8,0.8,0.8};
	};
	//IR
	class Tracer_R_IR
	{
		diffuse[] = {1,0.1,0.1};
		color[] = {1,0.1,0.1};
		ambient[] = {1,0.1,0.1};
		brightness=1;
		size=1;
		position[] = {0,0,0};
		drawLight = 0;
		dayLight = 0;
		intensity=0;
		irLight=1;
	};
	class Tracer_G_IR: Tracer_R_IR
	{
		diffuse[] = {0.2,1,0};
		color[] = {0.2,1,0};
		ambient[] = {0.2,1,0};
	};
	class Tracer_Y_IR: Tracer_R_IR
	{
		diffuse[] = {1,0.6,0};
		color[] = {1,0.6,0};
		ambient[] = {1,0.6,0};
	};
	class Tracer_W_IR :Tracer_R_IR
	{
		diffuse[] = {0.8,0.8,0.8};
		color[] = {0.8,0.8,0.8};
		ambient[] = {0.8,0.8,0.8};
	};
	
	//Impact
	class ExploLightFast
	{
		diffuse[] = {0.05,0.05,0.05};
		color[] = {1,1,1};
		ambient[] = {1,1,1};
		Brightness=1;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=10;
		flareMaxDistance=4000;
		useFlare=1;
		/*class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};*/
		position[] = {0,0,0};
	};
	class ExploLightFast_02
	{
		diffuse[] = {0.05,0.05,0.05};
		color[] = {0.60000002,0.5,0.3};
		ambient[] = {0.059999999,0.05,0.029999999,0};
		Brightness=3;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=5;
		flareMaxDistance=4000;
		useFlare=1;
		position[] = {0,0,0};
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
	};
	class SparksLight;
	class Spark_Explolight: SparksLight
	{
		size=1;
		brightness = 0.1;
		position[] = {0,0,0};
		drawLight = 1;
		dayLight = 1;
		intensity=100;
	};
	class Spark_Bulletlight: SparksLight
	{
		size=1;
		brightness = 0.1;
		position[] = {0,0,0};
		drawLight = 1;
		dayLight = 1;
		intensity=10;
	};
	//Effects
	class TankLight_CM
	{
		color[] = {1,0.4,0.12};
		ambient[] = {1,0.4,0.12};
		diffuse[] = {1,0.4,0.12};
		brightness = 0.75;
		intensity=500;
		position[] = {0,0,0};
		useFlare=1;
		drawLight = 1;
		dayLight = 1;
		flareSize=2;
		flareMaxDistance=100;
		/*class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=1;
			hardLimitEnd=50;
		};*/
	};
	class ASBE_CmeasuresLight
	{
		color[] = {1,0.58,0.16};
		ambient[] = {1,0.58,0.16};
		diffuse[] = {1,0.58,0.16};
		brightness = 1;
		intensity=15000;
		position[] = {0,0,0};
		useFlare=1;
		drawLight = 1;
		dayLight = 1;
		flareSize=4;
		flareMaxDistance=4000;
	};
	class CruiseMissileLight
	{
		flareSize = 30;
		flareMaxDistance = 2600;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0.1;
			hardLimitStart = 100;
			hardLimitEnd = 1000;
		};
	};
};