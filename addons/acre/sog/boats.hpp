// Intercom system for SOG Patrol Boats
class Boat_Armed_01_base_F;
// Base class for a large PT boats
class vn_boat_armed_base : Boat_Armed_01_base_F {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"commander"};
            
            limitedPositions[] = {{"cargo", "all"}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 : Intercom_1 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"cargo", "all"}};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
    class UserActions {
        SOG_JUKEBOX
    };
};

// PAVN PT Boat
class vn_boat_03_base : vn_boat_armed_base {
    class AcreIntercoms : AcreIntercoms {};
    class UserActions : UserActions {};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander"};
            intercom[] = {"intercom_1"};
        };
    };
};
// MACV PT Boat
class vn_boat_05_base : vn_boat_armed_base {
    class AcreIntercoms : AcreIntercoms {};
    class UserActions : UserActions {};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander"};
            intercom[] = {"intercom_1"};
        };
    };
};

// MACV PBR Boats
// Turret 2 is Commander firing from vehicle
// Turret 3 is Commander using the searchlight
class vn_boat_12_base : vn_boat_armed_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"commander", {"ffv", {2}, {3}}};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
    class UserActions : UserActions {};
};
class vn_boat_12_turret_base : vn_boat_12_base {};
class vn_boat_13_turret_base : vn_boat_12_base {};

#define SOG_PBR_ACRE(CLASS_NUMBER, SUB_NUMBER) class vn_b_boat_##CLASS_NUMBER##_##SUB_NUMBER : vn_boat_##CLASS_NUMBER##_turret_base { \
    class AcreRacks { \
        class Rack_1 { \
            allowedPositions[] = {"driver", "commander", {"ffv", {2}, {3}}}; \
            intercom[] = {"intercom_1"}; \
        }; \
    }; \
    class AcreIntercoms : AcreIntercoms {}; \
};

SOG_PBR_ACRE(12, 01)
SOG_PBR_ACRE(12, 02)
SOG_PBR_ACRE(12, 03)
SOG_PBR_ACRE(12, 04)

SOG_PBR_ACRE(13, 01)
SOG_PBR_ACRE(13, 02)
SOG_PBR_ACRE(13, 03)
SOG_PBR_ACRE(13, 04)

// MACV STAB Boats
class vn_boat_09_base : vn_boat_armed_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"driver"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC64";
            defaultComponents[] = {};
            disabledPositions[] = {};
            displayName = "Dashboard";
            intercom[] = {"intercom_1"};
            isRadioRemovable = 0;
            mountedRadio = "ACRE_PRC77";
            shortName = "Dash";
        };
    };
    class UserActions : UserActions {};
};

#define SOG_STAB_ACRE(CLASS_NUMBER) class vn_boat_##CLASS_NUMBER##_turret_base : vn_boat_09_base {}; \
class vn_b_boat_##CLASS_NUMBER##_01 : vn_boat_##CLASS_NUMBER##_turret_base { \
    class AcreRacks : AcreRacks {}; \
    class AcreIntercoms : AcreIntercoms {}; \
};

SOG_STAB_ACRE(09)
SOG_STAB_ACRE(10)
SOG_STAB_ACRE(11)