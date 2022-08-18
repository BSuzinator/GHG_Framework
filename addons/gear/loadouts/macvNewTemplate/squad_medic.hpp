/*======================================
	Loadout for Squad Medics (macv)
======================================*/
class squad_medic : squad_rifleman
{
    

    class Vest : Vest
    {
        classname = "vn_b_vest_usarmy_07";
        // Inherited item overrides
        vn_m18_white_mag = 0;
        vn_m61_grenade_mag = 1;
        // List of items
        vn_m18_red_mag = 2;
    };
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_lw_07";
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
    
    headgear[] = { "vn_b_helmet_m1_07_01", "vn_b_helmet_m1_07_02" };
};