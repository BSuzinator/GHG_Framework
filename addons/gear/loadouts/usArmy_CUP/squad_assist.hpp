/*======================================
	Loadout for Squad Assistant (usArmy CUP)
======================================*/
class squad_assist : squad_rifleman
{
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_OCP", "CUP_B_US_Assault_UCP", "CUP_B_US_Assault_UCP" };
        // List of items
		CUP_30Rnd_556x45_Stanag = 12;
		CUP_20Rnd_762x51_DMR = 6;
		CUP_1Rnd_HE_M203 = 20;
    };

};