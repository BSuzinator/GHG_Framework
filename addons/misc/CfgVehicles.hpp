class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class GHG_OWO {
                displayName = "OwO";
                selection = "rightuplegroll";
                distance = 2.0;
                condition = QUOTE(_this call FUNC(canOWO));
                statement = QUOTE(_this call FUNC(doOWO));
                exceptions[] = {"isNotSwimming"};
            };
        };
    };
};