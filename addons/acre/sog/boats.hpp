// Intercom system for SOG Patrol Boats
class Boat_Armed_01_base_F;
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
// MACV STAB
class vn_boat_09_base : vn_boat_armed_base {
    class AcreIntercoms : AcreIntercoms {};
    class UserActions : UserActions {};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander"};
            intercom[] = {"intercom_1"};
        };
    };
};
// MACV PBR
class vn_boat_12_base : vn_boat_armed_base {
    class AcreIntercoms : AcreIntercoms {};
    class UserActions : UserActions {};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander"};
            intercom[] = {"intercom_1"};
        };
    };
};