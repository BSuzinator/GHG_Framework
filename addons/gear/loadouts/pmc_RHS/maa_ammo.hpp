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
		rhs_m136_mag = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		rhs_fim92_mag = 2;
    };
	facewear = "UK3CB_G_Balaclava_Neck_Shemag";
	headgear = "rhs_6m2";
};