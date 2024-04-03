/*======================================
	Loadout for Hunter (Wastelanders)
======================================*/
class ravn_pilot : squad_rifleman
{
    
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_LeeEnfield";
        scope = "CUP_optic_no23mk2";
        ammo = "CUP_10x_303_M";
		bipod = "";
    };
	class Uniform : Uniform
    {
        classname = "U_BG_Guerilla3_1";
		CUP_10x_303_M = 7;
    };
	
	headgear = "CUP_H_C_MAGA_01";
    facewear = "";
};