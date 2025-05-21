class CfgVehicles
{
	/*class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};
	class MBT_02_base_F: Tank_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		smokeLauncherAngle=190;
	};
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		smokeLauncherGrenadeCount=14;
		smokeLauncherAngle=210;
	};*/
	//Lights
	class Reflector_Cone_01_base_F;
	class Reflector_Cone_01_long_base_F: Reflector_Cone_01_base_F
	{
		class Reflectors
		{
			class Light_1;
		};
	};
	class TracerR: Reflector_Cone_01_long_base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "Tracer(Red)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {1,0.1,0.1};
				color[] = {1,0.1,0.1};
				ambient[] = {1,0.1,0.1};
				brightness = 2;
				dayLight = 1;
				intensity=3000;
				innerAngle = 360;
				outerAngle = 360;
				coneFadeCoef = 6;
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
		};
	};
	class TracerG: TracerR
	{
		displayName = "Tracer(Green)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.5,1,0.08};
				color[] = {0.5,1,0.08};
				ambient[] = {0.5,1,0.08};
			};
		};
	};
	class TracerY: TracerR
	{
		displayName = "Tracer(Yellow)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {1,0.6,0};
				color[] = {1,0.6,0};
				ambient[] = {1,0.6,0};
			};
		};
	};
	class TracerW: TracerR
	{
		displayName = "Tracer(White)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.8,0.8,0.8};
				color[] = {0.8,0.8,0.8};
				ambient[] = {0.8,0.8,0.8};
			};
		};
	};
	//-Trooper
	class TracerTR: TracerR
	{
		displayName = "TracerT(Red)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				brightness = 0.1;
				intensity=800;
			};
		};
	};
	class TracerTG: TracerTR
	{
		displayName = "TracerT(Green)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.5,1,0.08};
				color[] = {0.5,1,0.08};
				ambient[] = {0.5,1,0.08};
			};
		};
	};
	class TracerTY: TracerTR
	{
		displayName = "TracerT(Yellow)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {1,0.6,0};
				color[] = {1,0.6,0};
				ambient[] = {1,0.6,0};
			};
		};
	};
	class TracerTW: TracerTR
	{
		displayName = "TracerT(White)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.8,0.8,0.8};
				color[] = {0.8,0.8,0.8};
				ambient[] = {0.8,0.8,0.8};
			};
		};
	};
	//-IR
	class TracerR_IR: TracerTR
	{
		displayName = "TracerIR(Red)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[] = {1,0.1,0.1};
				color[] = {1,0.1,0.1};
				ambient[] = {1,0.1,0.1};
				brightness=1;
				size=1;
				drawLight = 0;
				dayLight = 0;
				intensity=800;
				irLight=1;
			};
		};
	};
	class TracerG_IR: TracerR_IR
	{
		displayName = "TracerIR(Green)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.5,1,0.08};
				color[] = {0.5,1,0.08};
				ambient[] = {0.5,1,0.08};
			};
		};
	};
	class TracerY_IR: TracerR_IR
	{
		displayName = "TracerIR(Yellow)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {1,0.6,0};
				color[] = {1,0.6,0};
				ambient[] = {1,0.6,0};
			};
		};
	};
	class TracerW_IR: TracerR_IR
	{
		displayName = "TracerIR(White)";
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				diffuse[]= {0.8,0.8,0.8};
				color[] = {0.8,0.8,0.8};
				ambient[] = {0.8,0.8,0.8};
			};
		};
	};
	
	//-50%
	class TracerR_50: TracerR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1500;
			};
		};
	};
	class TracerG_50: TracerG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1500;
			};
		};
	};
	class TracerY_50: TracerY
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1500;
			};
		};
	};
	class TracerW_50: TracerW
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1500;
			};
		};
	};
	//-Trooper
	class TracerTR_50: TracerTR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerTG_50: TracerTG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerTY_50: TracerTY
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerTW_50: TracerTW
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	//-IR
	class TracerR_IR_50: TracerR_IR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerG_IR_50: TracerG_IR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerY_IR_50: TracerY_IR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	class TracerW_IR_50: TracerW_IR
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=400;
			};
		};
	};
	

	//-40%
	class TracerR_40: TracerR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1200;
			};
		};
	};
	class TracerG_40: TracerG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1200;
			};
		};
	};
	class TracerY_40: TracerY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1200;
			};
		};
	};
	class TracerW_40: TracerW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=1200;
			};
		};
	};
	//-Trooper
	class TracerTR_40: TracerTR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerTG_40: TracerTG_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerTY_40: TracerTY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerTW_40: TracerTW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	//-IR
	class TracerR_IR_40: TracerR_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerG_IR_40: TracerG_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerY_IR_40: TracerY_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};
	class TracerW_IR_40: TracerW_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=320;
			};
		};
	};

	//-30%
	class TracerR_30: TracerR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=900;
			};
		};
	};
	class TracerG_30: TracerG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=900;
			};
		};
	};
	class TracerY_30: TracerY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=900;
			};
		};
	};
	class TracerW_30: TracerW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=900;
			};
		};
	};
	//-Trooper
	class TracerTR_30: TracerTR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerTG_30: TracerTG_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerTY_30: TracerTY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerTW_30: TracerTW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	//-IR
	class TracerR_IR_30: TracerR_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerG_IR_30: TracerG_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerY_IR_30: TracerY_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};
	class TracerW_IR_30: TracerW_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=240;
			};
		};
	};

	//-20%
	class TracerR_20: TracerR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=600;
			};
		};
	};
	class TracerG_20: TracerG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=600;
			};
		};
	};
	class TracerY_20: TracerY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=600;
			};
		};
	};
	class TracerW_20: TracerW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=600;
			};
		};
	};
	//-Trooper
	class TracerTR_20: TracerTR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerTG_20: TracerTG_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerTY_20: TracerTY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerTW_20: TracerTW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	//-IR
	class TracerR_IR_20: TracerR_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerG_IR_20: TracerG_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerY_IR_20: TracerY_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};
	class TracerW_IR_20: TracerW_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=160;
			};
		};
	};

	//-10%
	class TracerR_10: TracerR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=300;
			};
		};
	};
	class TracerG_10: TracerG
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=300;
			};
		};
	};
	class TracerY_10: TracerY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=300;
			};
		};
	};
	class TracerW_10: TracerW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=300;
			};
		};
	};
	//-Trooper
	class TracerTR_10: TracerTR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerTG_10: TracerTG_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerTY_10: TracerTY_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerTW_10: TracerTW_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	//-IR
	class TracerR_IR_10: TracerR_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerG_IR_10: TracerG_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerY_IR_10: TracerY_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	class TracerW_IR_10: TracerW_IR_50
	{
		class Reflectors: Reflectors
		{
			class Light_1: Light_1
			{
				intensity=80;
			};
		};
	};
	
	//FIR
	#if __has_include("\FIR_AirWeaponSystem_US_cfg\config.bin")
		class AllVehicles;
		class Air: AllVehicles
		{
			class Eventhandlers: DefaultEventHandlers {};
		};
		
		class Plane: Air {};
		class Plane_Base_F: Plane {};
		class Plane_CAS_01_base_F: Plane_Base_F{};
		class Plane_Fighter_03_base_F: Plane_Base_F {};
		
		class FIR_A10A_Base : Plane_CAS_01_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_A10C_Base : Plane_CAS_01_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_A10U_Base : Plane_CAS_01_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F14D_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F16_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F35B_Armaverse_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_AV8B_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_AV8B_NA_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_AV8B_GR7_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15A_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15B_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15E_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15E_Demo_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15B_Civ_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15D_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F15SE_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_FA18_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F22_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
		class FIR_F23A_Base : Plane_Fighter_03_base_F
		{
			class EventHandlers: EventHandlers{};
		};
	#endif
};