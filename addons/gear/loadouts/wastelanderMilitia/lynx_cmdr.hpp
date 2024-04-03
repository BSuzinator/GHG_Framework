/*======================================
	Loadout for Shopkeeper (Wastelanders)
======================================*/
class lynx_cmdr : squad_rifleman
{
	 class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_sten";
		muzzle = "vn_s_sten";
        ammo = "vn_sten_mag";
        
    };
	class Vest : Vest
    {
        classname = "rhs_chicom_khk";
		vn_sten_mag = 5;

    };
	class Uniform : Uniform
    {
        classname = "CUP_I_B_PMC_Unit_42";
    };
	headgear = "lxWS_H_ssh40_un";
};