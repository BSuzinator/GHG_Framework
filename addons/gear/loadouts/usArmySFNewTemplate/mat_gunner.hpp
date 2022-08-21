/*======================================
	Loadout for MAT Gunner (usArmySF)
======================================*/
class mat_gunner : squad_rifleman
{
    
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_smaw_green";
        ammo = "rhs_mag_smaw_HEAA";
        grenade = "rhs_mag_smaw_SR";
		class Scopes { rhs_weap_optic_smaw = "rhs_weap_optic_smaw"; };
    };
	
	class Vest : Vest
    {
        ACE_EntrenchingTool = 0;
    };
	
    class Backpack : Backpack
    {
        classname[] = { "B_Carryall_oli", "B_Carryall_oli", "B_Carryall_cbr" };
        // List of items
        rhs_mag_smaw_HEAA = 2;
        rhs_mag_smaw_SR = 4;
    };
};