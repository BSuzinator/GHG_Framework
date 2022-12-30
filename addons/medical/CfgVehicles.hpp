class CfgVehicles {
	class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class GHG_medical_giveFullTreatment {
						displayName = "Give Full Treatment";
						condition = QUOTE(_this call FUNC(canGiveFullTreatment));
						statement = QUOTE(_this call FUNC(fullTreatment));
						exceptions[] = {"isNotSwimming"};
				};
            };
        };
	};
	
	class Camping_base_F;
	class Land_MedicalTent_01_base_F : Camping_base_F {
		class Attributes : Attributes {
			class Door_Hide;
			class SolarPanel1_Hide;
			class SolarPanel2_Hide;
		};
	};
	class GHG_Medical_Tent : Land_MedicalTent_01_base_F {
		author = "GHG Team";
		displayName = "Medical Tent [Sand]";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Medical";
		scope = 0;
		scopeCurator = 0;
		
		class ACE_Actions {
			class ACE_MainActions;
		};
		
		class Attributes : Attributes {
			class Door_Hide : Door_Hide {
				defaultValue = 1;
			};
			class SolarPanel1_Hide : SolarPanel1_Hide {
				defaultValue = 1;
			};
			class SolarPanel2_Hide : SolarPanel2_Hide{
				defaultValue = 1;
			};
		};
		
	};
	
	class GHG_Medical_Tent_Sand : GHG_Medical_Tent {
		displayName = "Medical Tent [Sand]";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_closed_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"};
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		scope = 2;
		scopeCurator = 2;
	};
	class GHG_Medical_Tent_Olive : GHG_Medical_Tent {
		displayName = "Medical Tent [Olive]";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_closed_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"};
		model = "\A3\Structures_F_Orange\Humanitarian\Camps\MedicalTent_01_F.p3d";
		scope = 2;
		scopeCurator = 2;
	};
	
};