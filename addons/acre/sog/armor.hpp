// Intercom for SOG Bulldog Tank
class vn_armor_m41_base;
class vn_b_armor_m41_01_01_base : vn_armor_m41_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"commander"};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"ffv", "all"}};
            masterPositions[] = {"commander"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
    class UserActions {
        SOG_JUKEBOX
    };
};

class vn_b_armor_m41_01_02_base : vn_armor_m41_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"commander"};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"ffv", "all"}};
            masterPositions[] = {"commander"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
    class UserActions {
        SOG_JUKEBOX
    };
};

// Fix radios and intercoms on M113A1 APCs
class APC_Tracked_01_base_F;
class vn_armor_m113_base : APC_Tracked_01_base_F {
    class UserActions;
};
// This class is used by the M2 Transport variant
class vn_armor_m113_01_base : vn_armor_m113_base {
    acre_infantryPhoneIntercom[] = {"intercom_1"};
    acre_infantryPhoneControlActions[] = {"intercom_1"};
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"commander", {"turret", {0}, {1}}};
            
            limitedPositions[] = {{"cargo", "all"}, {"ffv", {2}, {3}}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 : Intercom_1 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"ffv", {2}, {3}}, {"cargo", "all"}};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
    class UserActions : UserActions {
        SOG_JUKEBOX
    };
};
// This class is used by all ACAV variants
class vn_armor_m113_acav_m2_base : vn_armor_m113_01_base {
    class AcreIntercoms : AcreIntercoms {
        class Intercom_1 : Intercom_1 {
            limitedPositions[] = {{"cargo", "all"}};
        };
        class Intercom_2 : Intercom_2 {
            allowedPositions[] = {"crew", {"cargo", "all"}};
        };
    };
};
class vn_armor_m113_acav_mk18_base : vn_armor_m113_acav_m2_base {};
class vn_armor_m113_acav_m40_base : vn_armor_m113_acav_m2_base {};
class vn_armor_m113_acav_m60_base : vn_armor_m113_acav_m2_base {};
class vn_armor_m113_acav_m134_base : vn_armor_m113_acav_m2_base {};
class vn_armor_m113_acav_m1919_base : vn_armor_m113_acav_m2_base {};

#define SOG_M113_ACRE(CLASS_NAME, PARENT_NAME, COMMANDER_TURNED_IN_TURRET) class vn_b_armor_m113_##CLASS_NAME : vn_armor_m113_##PARENT_NAME##_base { \
    class AcreRacks { \
        class Rack_1 { \
            allowedPositions[] = {"driver", {"turret", {COMMANDER_TURNED_IN_TURRET}}}; \
            intercom[] = {"intercom_1"}; \
        }; \
    }; \
    class AcreIntercoms : AcreIntercoms {}; \
};

#define SOG_M113_US_ROK_ACRE(CLASS_NAME, PARENT_NAME) SOG_M113_ACRE(CLASS_NAME, PARENT_NAME, 0) \
SOG_M113_ACRE(CLASS_NAME##_rok_army, PARENT_NAME, 0)

// NOTE, SUPER IMPORTANT:
// On the M2 Transport variant:
// Turret 0 is the commander when turned out (commander VEH == VEH turretUnit [1])
// Turret 1 is the commander when turned in
// On the ACAV Variant, this is flipped:
// Turret 0 is the commander when turned in
// Turret 1 is the commander when turned out (commander VEH == VEH turretUnit [1])

SOG_M113_ACRE(01, 01, 1)
SOG_M113_ACRE(01_aus_army, 01, 1)
SOG_M113_ACRE(01_rok_army, 01, 1)
SOG_M113_US_ROK_ACRE(acav_01, acav_m2)
SOG_M113_US_ROK_ACRE(acav_02, acav_m1919)
SOG_M113_US_ROK_ACRE(acav_03, acav_m60)
SOG_M113_US_ROK_ACRE(acav_04, acav_m134)
SOG_M113_US_ROK_ACRE(acav_05, acav_mk18)
SOG_M113_US_ROK_ACRE(acav_06, acav_m40)