/*======================================
	Loadout for Shopkeeper (Wastelanders)
======================================*/
class lynx_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_ppsh41";
        laser = "";
        ammo = "vn_ppsh41_71_mag";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "CUP_U_C_Tracksuit_04";
    };
	class Vest : Vest
    {
        classname = "V_TacVest_oli";
		vn_ppsh41_35_mag = 3;

    };
	headgear = "";
    facewear = "";
};