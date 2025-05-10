class CfgWeapons
{   
    
	class Rifle_Base_F;
	class arifle_MX_Base_F : Rifle_Base_F {
		magazineWell[] = {"MX_65x39","CBA_65x39_MX"};
	};
	class arifle_MX_SW_F : arifle_MX_Base_F {
		magazineWell[] = {"MX_65x39","MX_65x39_Large","CBA_65x39_MX","CBA_65x39_MX_XL"};
	};
	
	
};