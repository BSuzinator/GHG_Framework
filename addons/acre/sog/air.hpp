// Intercom system for SOG Cobra
class vn_helicopter_base;
class vn_air_ah1g_01_base : vn_helicopter_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "gunner"};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"driver", "gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
};
// Intercom system for SOG Little Bird
class vn_air_oh6a_base : vn_helicopter_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "gunner"};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"driver", "gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
};

// Intercom system for SOG Huey
// Copilot is either "gunner" or {"turret", {0}} on some helis
// Crew Chief is either "gunner" or {"turret", {1}} on some helis
class vn_air_uh1_01_base : vn_helicopter_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "gunner", {"turret", {0}}};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"driver", "gunner", {"turret", {0}}};
            
            limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"gunner", {"turret", {1}}};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
};
// Fix jukebox for Huey
class vn_air_uh1c_doorguns_base;
class vn_air_uh1c_01_base : vn_air_uh1c_doorguns_base {
    class UserActions {
        SOG_JUKEBOX
    };
};
class vn_air_uh1c_07_base : vn_air_uh1c_doorguns_base {
    class UserActions {
        SOG_JUKEBOX
    };
};
// Intercom system for SOG Seahorse
class vn_air_ch34_01_base : vn_helicopter_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", {"turret", {0}}};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"driver", {"turret", {0}}};
            
            limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
};
// Intercom system for PAVN Helicopter
class vn_air_mi2_base : vn_helicopter_base {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", {"turret", {0}}};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"driver", {"turret", {0}}};
            
            limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
};

// Intercom for SOG F4 Phantom
class Plane_Base_F;
class vn_air_f4_base : Plane_Base_F {
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "gunner"};
            intercom[] = {"intercom_1"};
        };
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"driver", "gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 1;
        };
    };
    class UserActions {
        SOG_JUKEBOX
    };
};

// Intercom for SOG Chinook
class vn_air_ch47_base : vn_helicopter_base {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            
            allowedPositions[] = {"crew"};
            masterPositions[] = {"driver", {"turret", {0}}};
            
            limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
            numLimitedPositions = 1;
            
            connectedByDefault = 1;
        };
        class Intercom_2 {
            displayName = "Pax Intercom";
            shortName = "Pax";
            
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            masterPositions[] = {"gunner"};
            
            limitedPositions[] = {};
            numLimitedPositions = 0;
            
            connectedByDefault = 0;
        };
    };
};

#define SOG_CH47(CLASS_ID) class vn_air_ch47_##CLASS_ID##_base; \
class vn_b_air_ch47_##CLASS_ID##_01 : vn_air_ch47_##CLASS_ID##_base { \
    class AcreRacks { \
        class Rack_1 { \
            allowedPositions[] = {"driver", {"turret", {0}}}; \
            intercom[] = {"intercom_1"}; \
        }; \
    }; \
}; \
class vn_b_air_ch47_##CLASS_ID##_02 : vn_air_ch47_##CLASS_ID##_base { \
    class AcreRacks { \
        class Rack_1 { \
            allowedPositions[] = {"driver", {"turret", {0}}}; \
            intercom[] = {"intercom_1"}; \
        }; \
    }; \
};

SOG_CH47(01)
SOG_CH47(02)
SOG_CH47(03)
SOG_CH47(04)

#define SOG_ACH47(CLASS_ID) class vn_air_ach47_##CLASS_ID##_base; \
class vn_b_air_ach47_##CLASS_ID##_01 : vn_air_ach47_##CLASS_ID##_base { \
    class AcreRacks { \
        class Rack_1 { \
            allowedPositions[] = {"driver", {"turret", {0}}}; \
            intercom[] = {"intercom_1"}; \
        }; \
    }; \
};

SOG_ACH47(01)
SOG_ACH47(02)
SOG_ACH47(03)
SOG_ACH47(04)
SOG_ACH47(05)