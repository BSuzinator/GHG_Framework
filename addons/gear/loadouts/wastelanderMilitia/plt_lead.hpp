/*======================================
	Loadout for Sherriff (Wastelanders)
======================================*/
class plt_lead : squad_rifleman
{
    class Weapon_1 : Weapon_1 // Shotgun
    {
        classname = "rhs_weap_M590_8RD";
		ammo = "CUP_8Rnd_12Gauge_Pellets_No00_Buck";
    };

    class Weapon_2 : Weapon_2 // Pistol
    {
        classname = "CUP_hgun_TaurusTracker455";
		ammo = "CUP_6Rnd_45ACP_M";
    };
    class Uniform : Uniform
	{
		classname = "CUP_U_C_Policeman_01";
	};
    class Vest : Vest
    {
		classname = "CUP_V_C_Police_Holster";
		CUP_6Rnd_45ACP_M = 6;
		ACE_Flashlight_Maglite_ML300L = 1;
		CUP_8Rnd_12Gauge_Pellets_No00_Buck = 5;
		ACRE_BF888S = 1;
    };
	
	class Backpack : Backpack
	{
		classname = "";
	};
	
	class Binoculars : Binoculars
    {
        classname = "";
    };
	
    headgear = "H_Cap_usblack";
	facewear = "CUP_Beard_Black";
};