class CfgAmmo {
	
	//Stop AA guns from targeting Infantry
	class B_35mm_AA;
	class B_35mm_AA : B_35mm_AA {
		aiAmmoUsageFlags = "128 + 256";
	};
	
	class RHS_ammo_23mm_AA;
	class RHS_ammo_23mm_AA : RHS_ammo_23mm_AA {
		aiAmmoUsageFlags = "128 + 256";
	};
	
	class vn_127x99;
	class vn_127x99 : vn_127x99 {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_20x110;
	class vn_20x110 : vn_20x110 {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class lxws_b_23x152_he;
	class lxws_b_23x152_he : lxws_b_23x152_he {
		aiAmmoUsageFlags = "128 + 256";
	};
	
};