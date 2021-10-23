/*======================================
	Loadout for Squad Leads (usMC)
======================================*/
class soldier_sl_f : soldier_tl_f
{
    class Weapon_1 : Weapon_1 { class Scopes : Scopes {}; }; // Rifle
    
    class Weapon_2 : Weapon_2 { class Scopes : Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes : Scopes {}; }; // Launcher

    class Uniform : Uniform {};
    
    class Vest : Vest
    {
        name = "rhsusf_spc_squadleader";
        // List of items
        ACRE_PRC152 = 1;
    };
    
    class Backpack : Backpack {};

    class Binoculars : Binoculars { class Scopes : Scopes {}; };
};