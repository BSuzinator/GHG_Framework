class CfgAmmo {
	
	//Stop AA guns from targeting Infantry
	class BulletBase;
	class B_35mm_AA : BulletBase {
		aiAmmoUsageFlags = "128 + 256";
	};
	
};