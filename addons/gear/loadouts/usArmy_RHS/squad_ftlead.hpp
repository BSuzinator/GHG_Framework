/*======================================
	Loadout for Squad Fireteam Leads (usArmy)
======================================*/
class squad_ftlead : squad_lead
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
		class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
	};
    
    class Vest : Vest
    {
		ACRE_PRC152 = 0;
    };

};