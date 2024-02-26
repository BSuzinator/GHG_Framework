/*======================================
	Loadout for MAA Gunner (Snow Tigers)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "IP_launch_O_Titan_short_snw_F";
        ammo = "Titan_AT";
		class Scopes { rhs_acc_pgo7v3 = ""; };
    };
	
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