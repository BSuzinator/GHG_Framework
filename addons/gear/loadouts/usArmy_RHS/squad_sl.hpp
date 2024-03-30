/*======================================
	Loadout for Squad Fireteam Leads (usArmy)
======================================*/
class squad_sl : squad_ftl
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
		class Scopes : Scopes
        {
            acog = "rhsusf_acc_ACOG_RMR";
        };
	};
    
    class Vest : Vest
    {
		ACRE_PRC152 = 1;
    };

};