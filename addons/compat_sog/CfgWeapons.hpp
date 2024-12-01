class CfgWeapons {
	
	class Rifle_Base_F;
	class vn_itemcore;
	class vn_b_item_map : vn_itemcore {
		simulation = "ItemMap";
	};
	
	// Add flashlights to all SOG primary weapons
    class vn_rifle : Rifle_Base_F {
        class FlashLight {
            ambient[] = {9,7.5,6};
            color[] = {180,150,120};
            coneFadeCoef = 55;
            dayLight = 1;
            direction = "konec hlavne";
            flareMaxDistance = "100.0f";
            flareSize = 1.4;
            innerAngle = 20;
            intensity = 50;
            outerAngle = 120;
            position = "usti hlavne";
            scale[] = {0};
            size = 1;
            useFlare = 1;
            
            class Attenuation {
                constant = 0;
                hardLimitEnd = 30;
                hardLimitStart = 20;
                linear = 0;
                quadratic = 1;
                start = 0.5;
            };
        };
    };
    
    class vn_rifle762;
    class vn_m14 : vn_rifle762 {
        modes[] = {
            "Single",
//            "FullAuto",
            "AICQB",
            "AIClose",
            "AIMedium",
            "AIFar",
            "AIOpticmode1",
            "AIOpticmode2"
        };
    };
	//Add mags to L1A1
	class vn_l1a1_01 : vn_rifle762 {
		magazineWell[] = {"CBA_762x51_FAL"};
	};
};