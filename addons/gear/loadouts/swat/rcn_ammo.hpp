/*======================================
	Loadout for Recon Ammo Bearer (swat)
	
	By Fawks
======================================*/
class rcn_ammo : squad_rifleman
{
    
	class Uniform : Uniform
    {
        classname = "UK3CB_CW_US_B_LATE_U_SF_CombatUniform_01_BLK";
    };
	
	class Vest : Vest
    {
		UK3CB_AUG_30Rnd_556x45_Magazine = 4;
		rhsusf_mag_17Rnd_9x19_JHP = 3;
		ACE_MapTools = 1;
		ACE_Kestrel4500 = 1;
		ACE_RangeCard = 1;
		ACE_SpottingScope = 1;
		ACE_Tripod = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_blk";
        rhsusf_5Rnd_762x51_m118_special_Mag = 10;
    };
	
	class Binoculars : Binoculars // Yes, the binoculars are technically a weapon
    {
        classname = "ACE_Yardage450";
    };
	
	headgear = "rhsusf_opscore_bk_pelt";
    facewear = "G_Balaclava_TI_G_blk_F";
	
};
