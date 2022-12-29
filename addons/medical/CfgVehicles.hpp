class CfgVehicles {
	class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class ACE_Medical_Radial {
					class GHG_medical_giveFullTreatment {
						displayName = "Give Full Treatment";
						//selection = "rightuplegroll";
						//distance = 2.0;
						//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
						condition = QUOTE(_this call FUNC(canGiveFullTreatment));
						statement = QUOTE(_this call FUNC(fullTreatment));
						exceptions[] = {"isNotSwimming"};
					};
				};
            };
        };
	};
	class House;
	class House_F : House {
		class ACE_Actions {
			class ACE_MainActions;
		};
	};
};

