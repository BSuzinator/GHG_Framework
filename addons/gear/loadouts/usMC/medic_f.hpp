/*======================================
	Loadout for Medics (usMC)
======================================*/
class medic_f : soldier_f
{
    class Weapon_1 : Weapon_1 { class Scopes: Scopes {}; }; // Rifle
    
    class Weapon_2 : Weapon_2 { class Scopes: Scopes {}; }; // Pistol
    
    class Weapon_3 : Weapon_3 { class Scopes: Scopes {}; }; // Launcher
    
    class Uniform : Uniform {};
    
    class Vest : Vest
    {
        name = "rhsusf_spc_corpsman";
        // Inherited item overrides
        SmokeShell = 0;
        rhs_mag_m67 = 0;
        // List of items
        rhs_mag_m18_red = 1;
    };
    
    class Backpack : Backpack
    {
        name = "rhsusf_assault_eagleaiii_coy_medic";
        // List of items
        ACE_elasticBandage = 32;
		ACE_packingBandage = 32;
		ACE_tourniquet = 8;
		ACE_bloodIV_250 = 8;
		ACE_bloodIV_500 = 4;
		ACE_bloodIV = 4;
		ACE_surgicalKit = 1;
		ACE_personalAidKit = 2;
		ACE_splint = 10;
		ACE_morphine = 12;
		ACE_epinephrine = 12;
		ACE_EarPlugs = 1;
    };

    class Binoculars : Binoculars { class Scopes: Scopes {}; };
};