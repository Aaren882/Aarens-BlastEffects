class CfgPatches
{
	class Tracer_ASBE
	{
		units[]={};
		weapons[]={};
		requiredVersion=2;
		requiredAddons[]=
		{
			////////////////////////////////////////////////////////////////////////////////////////////////
			//ACE
			#if __has_include("\z\ace\addons\smallarms\config.bin")
				#include "ACE\Patches.hpp"
			#endif
			////////////////////////////////////////////////////////////////////////////////////////////////
			//RHS AFRF
			#if __has_include("\rhsafrf\addons\rhs_c_weapons\config.bin")
				#include "RHS\AFRF_Patches.hpp"
			#endif
			
			//RHS USF
			#if __has_include("\rhsusf\addons\rhsusf_c_weapons\config.bin")
				#include "RHS\USF_Patches.hpp"
			#endif
			
			//NIarms
			#if __has_include("\hlc_core\config.bin")
				#include "NIarms\Patches.hpp"
			#endif
			
			//SPS
			#if __has_include("\x\SPS\Weapons\sps_kac_lamg\config.bin")
				#include "SPS\Patches.hpp"
			#endif
			
			//SOG
			#if __has_include("\vn\vn_weapons\config.bin")
				#include "SOG\Patches.hpp"
			#endif
			
			//GM
			#if __has_include("\gm\gm_weapons\gm_cannons\gm_145mm_kpvt\data\sounds\gm_145mm_kpvt_tail_houses_01.wss")
				#include "GM\Patches.hpp"
			#endif
			
			//-Spearhead
			#if __has_include("\WW2\SPE_Core_c\Data_c\config.bin")
				#include "Spearhead\Patches.hpp"
			#endif
			
			//Tier One
			#if __has_include("\Tier1_Weapons_cfg\config.bin")
				#include "TierOne\Patches.hpp"
			#endif
			
			//KA
			#if __has_include("\KA_M4A1\config.bin")
				#include "KA\Patches.hpp"
			#endif
			
			//Swiss
			#if __has_include("\dg_armory\config.cpp")
				#include "Swiss\Patches.hpp"
			#endif
			
			//RH_Full
			#if __has_include("\RH_M4_cfg\config.cpp")
				#include "RH_Full\Patches.hpp"
			#endif
			
			////////////////////////////////////////////////////////////////////////////////////////////////
			"A3_Weapons_F",
			"A3_Weapons_F_Jets",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Tank",
			"A3_Weapons_F_Mark"
		};
	};
};

#define SetTracerColor(CLASS,PARENT,COLOR) \
	class CLASS: PARENT \
	{ \
		Tracer_Color = COLOR; \
	}
class CfgAmmo
{
	class BulletBase;
	class SubmunitionBase;
	class B_65x39_Caseless;
	class B_762x51_Ball;
	class B_762x51_Tracer_Yellow;
	class B_9x21_Ball;
	class Sh_120mm_HE;
	class Sh_120mm_APFSDS;
	class B_556x45_Ball: BulletBase
	{
		//hit = 45;
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	//ACE
	#if __has_include("\z\ace\addons\smallarms\config.cpp")
		#include "ACE\CfgAmmo.hpp"
	#endif
	
	//RHS AFRF
	#if __has_include("\rhsafrf\addons\rhs_c_weapons\config.bin")
		#include "RHS\AFRF_Ammo.hpp"
	#endif
	
	//RHS USF
	#if __has_include("\rhsusf\addons\rhsusf_c_weapons\config.bin")
		#include "RHS\USF_Ammo.hpp"
	#endif
	
	//NIarms
	#if __has_include("\hlc_core\config.bin")
		#include "NIarms\CfgAmmo.hpp"
	#endif
	
	//SPS
	#if __has_include("\x\SPS\Weapons\sps_kac_lamg\config.bin")
		#include "SPS\CfgAmmo.hpp"
	#endif
	
	//Swiss
	#if __has_include("\dg_armory\config.cpp")
		#include "Swiss\CfgAmmo.hpp"
	#endif
	
	//RH_Full
	#if __has_include("\RH_M4_cfg\config.cpp")
		#include "RH_Full\CfgAmmo.hpp"
	#endif
	
	//GM
	#if __has_include ("\gm\gm_weapons\gm_cannons\gm_145mm_kpvt\data\sounds\gm_145mm_kpvt_tail_houses_01.wss")
		#include "GM\CfgAmmo.hpp"
	#endif
	
	//SOG
	#if __has_include("\vn\vn_weapons\config.bin")
		#include "SOG\CfgAmmo.hpp"
	#endif
	
	//Spearhead
	#if __has_include("\WW2\SPE_Core_c\Data_c\config.bin")
		#include "Spearhead\CfgAmmo.hpp"
	#endif
};