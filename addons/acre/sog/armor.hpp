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