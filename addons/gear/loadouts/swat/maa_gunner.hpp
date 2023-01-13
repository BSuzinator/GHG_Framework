/*======================================
	Loadout for MAA Gunner (swat)
======================================*/
class maa_gunner : mat_gunner
{

	class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_fim92";
        ammo = "rhs_fim92_mag";
		class Scopes { rhs_acc_pgo7v3 = ""; };
    };
	
	class Uniform : Uniform
	{
		classname = "U_I_C_Soldier_Para_4_F";
	};
	
    class Backpack : Backpack
    {
		classname = "B_Kitbag_desert_lxWS";
        // List of items
		rhs_m136_mag = 0; //AT
		rhs_rpg7_OG7V_mag = 0; //HE
		rhs_rpg7_TBG7V_mag = 0; //Thermo
		rhs_fim92_mag = 2;
    };
	facewear = "G_Aviator";
	headgear = "rhs_altyn_novisor";
};