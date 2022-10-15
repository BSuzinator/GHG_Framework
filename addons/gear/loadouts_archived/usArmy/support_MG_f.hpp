/*======================================
	Loadout for MMG Gunner (usArmy)
======================================*/
class support_MG_f : soldier_f
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240b_elcan";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Vest : Vest
    {
        classname[] = { "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ocp_SAW", "rhsusf_iotv_ucp_SAW", "rhsusf_iotv_ucp_SAW" };
        // List of items
		rhs_mag_30Rnd_556x45_M855A1_Stanag = 0;
		rhsusf_100Rnd_762x51 = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ocp", "rhsusf_assault_eagleaiii_ucp", "rhsusf_assault_eagleaiii_ucp" };
        // List of items
        rhsusf_100Rnd_762x51 = 3;
    };
};