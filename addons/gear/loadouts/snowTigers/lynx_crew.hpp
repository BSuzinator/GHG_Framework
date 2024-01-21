/*======================================
	Loadout for Crew (Snow Tigers)
======================================*/
class lynx_crew : squad_rifleman
{
	class Weapon_1 : Weapon_1 // Rifle
    {

    };
	class Uniform : Uniform
    {
        classname = "IP_U_O_OfficerUniform_SnowHex";
    };
	class Vest : Vest
    {
        30Rnd_65x39_caseless_green = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };

};