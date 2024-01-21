/*======================================
	Loadout for Doctor (Swat)
======================================*/
class plt_doctor : squad_medic
{
	class Uniform : Uniform
    {
		classname = "Police_uniform_Officer2";
    };
	
	class Backpack : Backpack
    {
		#include "..\doctor_bag.hpp"
    };
};