/*======================================
	Loadout for Squad Grenedier (usArmy CUP)
======================================*/
class squad_grenadier : squad_lead
{
	class Weapon_1 : Weapon_1 // Rifle
    {
		class Scopes : Scopes
        {
            red_dot = "CUP_optic_CompM4";
            holo = "CUP_optic_HoloBlack";
			alt_holo = "";
            red_dot_magnified = "CUP_optic_AIMM_COMPM4_BLK";
            holo_magnified = "CUP_optic_G33_HWS_BLK";
            holo_alt_camo[] = { "CUP_optic_Eotech553_Black" };
        };
    };
	class Vest : Vest
    {
        ACE_MapTools = 0;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 0;
    };
	class Backpack : Backpack
    {
        CUP_1Rnd_HE_M203 = 30;
		CUP_1Rnd_StarCluster_White_M203 = 0;
        CUP_FlareGreen_M203 = 0;
        CUP_FlareRed_M203 = 0;
        CUP_1Rnd_SmokeRed_M203 = 0;
        CUP_1Rnd_SmokeGreen_M203 = 0;
        CUP_1Rnd_Smoke_M203 = 0;
    };
	class Binoculars : Binoculars
	{
		classname = "";
	};
};