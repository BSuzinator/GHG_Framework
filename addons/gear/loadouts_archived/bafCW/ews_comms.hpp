/*======================================
	Loadout for EWS Teletype (bafCW)
======================================*/
class ews_comms : squad_rifleman
{
    class Weapon_2 : Weapon_2 // Pistol
    {
        classname = "hgun_esd_01_F";
        muzzle = "muzzle_antenna_03_f";
        //ammo = "ESD_01_DummyMagazine_1"; // Ammo count is supposed to be 4331 (433.1MHz)
    };
	class Backpack : Backpack
    {
        classname[] = { "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_DDPM_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A", "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A" };
    };
};