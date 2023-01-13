/*======================================
	Loadout for MAA Ammo Bearer (swat)
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
		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		rhs_fim92_mag = 2;
    };
	facewear = "UK3CB_G_Balaclava_Neck_Shemag";
	headgear = "rhs_6m2";
};