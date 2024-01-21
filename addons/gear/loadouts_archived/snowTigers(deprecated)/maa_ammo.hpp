/*======================================
	Loadout for MAA Ammo Bearer (Snow Tigers)
======================================*/
class maa_ammo : mat_ammo
{
	class Uniform : Uniform
	{

	};
	class Backpack : Backpack
    {
        // List of items
		rhs_m136_mag = 0; //AT
		CUP_OG7_M = 0; //HE
		CUP_TBG7V_M = 0; //Thermo
		Titan_AT = 2;
    };

};