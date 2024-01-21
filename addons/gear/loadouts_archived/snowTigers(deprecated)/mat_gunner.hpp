/*======================================
	Loadout for MAT Gunner (Snow Tigers)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg7";
        ammo = "rhs_rpg7_PG7VL_mag";
		class Scopes { rhs_weap_optic_smaw = "rhs_acc_pgo7v3"; };
    };
	
	class Uniform : Uniform
	{
		classname = "UK3CB_LNM_B_U_Shirt_Pants_14";
	};
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "IP_B_Carryall_SnowTiger";
        // List of items
        rhs_rpg7_PG7VL_mag = 2; //AT
		rhs_rpg7_OG7V_mag = 2; //HE
		rhs_rpg7_TBG7V_mag = 1; //Thermo
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};