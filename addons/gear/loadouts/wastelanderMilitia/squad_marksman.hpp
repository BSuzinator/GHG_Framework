/*======================================
	Loadout for Gate Guard (Wastelanders)
======================================*/
class squad_marksman : squad_rifleman
{
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_M4A1";
        laser = "";
        ammo = "rhs_mag_30Rnd_556x45_M855_Stanag";
		bipod = "";
    };
    
	class Uniform : Uniform
	{
		classname = "U_I_G_Story_Protagonist_F";
		ACRE_BF888S = 1;
	};
	
    class Vest : Vest
    {
		classname = "CUP_V_CZ_NPP2006_ok_des";
		rhs_mag_30Rnd_556x45_M855_Stanag = 8;
    };
    
	facewear = "rhs_googles_black";
	headgear = "CUP_H_Booniehat_Rhodesian";
};