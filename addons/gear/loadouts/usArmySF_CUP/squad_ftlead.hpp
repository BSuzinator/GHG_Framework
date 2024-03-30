/*======================================
	Loadout for Squad Fireteam Leads (usArmy CUP)
======================================*/
class squad_ftlead : squad_lead
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
		ACRE_PRC152 = 0;
    };

};