//vanilla
class 5Rnd_127x108_Mag: CA_Magazine
{
	tracersEvery = 1;
};
class 30Rnd_65x39_caseless_mag: CA_Magazine
{
	tracersEvery = 1;
};
class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
{
	lastRoundsTracer = 0;
};
class 30Rnd_556x45_Stanag: CA_Magazine
{
	lastRoundsTracer = 0;
};
class 100Rnd_65x39_caseless_mag: CA_Magazine
{
	tracersEvery = 1;
};
class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
{
	tracersEvery = 1;
};
class 200Rnd_65x39_Belt: VehicleMagazine
{
	tracersEvery = 1;
};
class 150Rnd_762x51_Box;
class 150Rnd_762x54_Box: 150Rnd_762x51_Box
{
	tracersEvery = 1;
};

class 500Rnd_127x99_mag: VehicleMagazine
{
	tracersEvery = 1;
};
class 200Rnd_127x99_mag: 500Rnd_127x99_mag
{
	tracersEvery = 1;
};
class 450Rnd_127x108_Ball: VehicleMagazine
{
	tracersEvery = 1;
};
class 300Rnd_25mm_shells: VehicleMagazine
{
	tracersEvery = 1;
};
class 30Rnd_120mm_HE_shells;
class 20Rnd_120mm_HEAT_MP;
class 20Rnd_125mm_APFSDS;

class 200Rnd_762x51_Belt: VehicleMagazine
{
	tracersEvery = 1;
};
class 680Rnd_35mm_AA_shells: VehicleMagazine
{
	tracersEvery = 1;
};

//APEX
class 30Rnd_580x42_Mag_F: CA_Magazine
{
	tracersEvery = 1;
};
class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
{
	tracersEvery = 1;
};
class 30Rnd_762x39_Mag_F: CA_Magazine
{
	tracersEvery = 1;
};
class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F
{
	tracersEvery = 1;
};
class 30Rnd_545x39_Mag_F: CA_Magazine
{
	lastRoundsTracer = 0;
};
class 200Rnd_556x45_Box_F: CA_Magazine
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag
{
	tracersEvery = 1;
};
class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
{
	ammo = "B_556x45_Ball";
	lastRoundsTracer = 0;
};

class 30Rnd_556x45_Stanag_Sand;
class 30Rnd_556x45_Stanag_Sand_green: 30Rnd_556x45_Stanag_Sand
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_Sand_red: 30Rnd_556x45_Stanag_Sand
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Green: 30Rnd_556x45_Stanag_Sand_Tracer_Red
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow: 30Rnd_556x45_Stanag_Sand_Tracer_Red
{
	tracersEvery = 1;
};
class 30Rnd_556x45_Stanag_Tracer_Red;
class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag_Tracer_Red
{
	tracersEvery = 1;
};

class 150Rnd_556x45_Drum_Sand_Mag_F;
class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
{
	ammo= "B_556x45_Ball_Tracer_Red";
};
class 150Rnd_556x45_Drum_Green_Mag_F;
class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
{
	ammo= "B_556x45_Ball_Tracer_Red";
};
class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
{
	ammo= "B_556x45_Ball_Tracer_Red";
};
class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
{
	ammo = "B_65x39_Case";
	tracersEvery = 1;
};
class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt
{
	tracersEvery = 1;
};
//Marksman
class 130Rnd_338_Mag: CA_Magazine
{
	tracersEvery = 1;
};
class 150Rnd_93x64_Mag: CA_Magazine
{
	tracersEvery = 1;
};
class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
{
	tracersEvery = 1;
};
//Tanks
class 60Rnd_20mm_HE_shells: VehicleMagazine
{
	tracersEvery = 1;
};
class 60Rnd_20mm_AP_shells: VehicleMagazine
{
	tracersEvery = 1;
};