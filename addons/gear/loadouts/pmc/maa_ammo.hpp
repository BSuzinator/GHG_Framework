/*======================================
	Loadout for MAA Ammo Bearer (pmc)
======================================*/
class maa_ammo : mat_ammo
{
	class Uniform : Uniform
	{
		classname = "U_I_C_Soldier_Para_3_F";
	};
	class Backpack : Backpack
    {
        // List of items
		CUP_M136_M = 0; //AT

		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		CUP_Stinger_M = 2;

		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		CUP_Stinger_M = 2;

    };
	facewear = "CUP_FR_NeckScarf3";
	headgear = "CUP_H_RUS_GSSh01_Headphones_green";
};