class CfgAmmo {
	
	//Stop AA guns from targeting Infantry
	class BulletBase;
	class B_35mm_AA : BulletBase {
		aiAmmoUsageFlags = "128 + 256";
	};
	
	class RHS_ammo_23mm_AA : B_35mm_AA {
		aiAmmoUsageFlags = "128 + 256";
	};
	
	class vn_riflebullet_base;
	class vn_127x99 : vn_riflebullet_base {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class vn_20x110 : BulletBase {
		aiAmmoUsageFlags = "128 + 256 + 512";
	};
	
	class lxws_b_23x152_he : BulletBase {
		aiAmmoUsageFlags = "128 + 256";
	};
	
};