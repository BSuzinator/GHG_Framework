/*======================================
	Loadout for Hunter (Wastelanders)
======================================*/
class ravn_crew : squad_rifleman
{
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_vz54";
        scope = "vn_o_3x_vz54";
        ammo = "vn_m38_t_mag";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "LOP_U_CHR_Woodlander_02";
		vn_m38_t_mag = 10;
    };
	headgear = "CUP_H_Ger_Cap_Grn1";
    facewear = "";
};