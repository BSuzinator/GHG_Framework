/*======================================
	Loadout for Town Doctor (Wastelanders)
======================================*/
class plt_doctor : squad_rifleman
{
	class Weapon_2 : Weapon_2 // Rifle
    {
        classname = "CUP_hgun_Browning_HP";
        laser = "";
        ammo = "ACE_16Rnd_9x19_mag";
		bipod = "";
    };
	class Uniform : Uniform
	{
		classname = "U_C_IDAP_Man_Jeans_F";
		ACE_16Rnd_9x19_mag = 6;
		ACRE_BF888S = 1;
	};
	
	class Backpack : Backpack
    {
		classname = "rhs_medic_bag";
		#include "..\doctor_bag.hpp"
    };
	facewear = "kat_Armband_Doctor_Goggles";
	headgear = "PO_H_Fieldcap_NK";
};