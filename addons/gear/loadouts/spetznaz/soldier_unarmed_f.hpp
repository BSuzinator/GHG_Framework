/*======================================
	Loadout for EWS Teletype (spetznaz)
======================================*/
class soldier_unarmed_f : soldier_lite_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	class Backpack : Backpack
    {
        classname[] = { "B_AssaultPack_cbr", "B_AssaultPack_tna_F", "UK3CB_AAF_B_B_ASS_DIGI_BLK", "B_AssaultPack_blk" };
    };
};