class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ghg_attributes {
                displayName = "GHG Options";
                collapsed = 0;
                class Attributes {
					class ghg_delaySimulation {
						//--- Mandatory properties
						displayName = "Delay Simulation"; // Name assigned to UI control class Title
						tooltip = "Delay object damage and simulation for 30 seconds!"; // Tooltip assigned to UI control class Title
						property = "ghg_delaySimulation_id"; // Unique config property name saved in SQM
						control = "Checkbox";	// Reference: https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes:_Controls

						// Expression called when applying the attribute in Eden and at the scenario start
						// The expression is called twice - first for data validation, and second for actual saving
						// Entity is passed as _this, value is passed as _value
						// %s is replaced by attribute config name. It can be used only once in the expression
						// In MP scenario, the expression is called only on server.
						expression = "[_this,_value] spawn ghg_3den_fnc_delaySimulation;";

						// Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
						// Entity (unit, group, marker, comment etc.) is passed as _this
						// Returned value is the default value
						// Used when no value is returned, or when it is of other type than NUMBER, STRING or ARRAY
						// Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
						defaultValue = "false";

						//--- Optional properties
						unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
						validate = "none"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
						condition = "objectSimulated"; // Condition for attribute to appear (see the table below)
						typeName = "BOOL"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
					};
				};
            };
        };
    };
};
class CfgEditorCategories
{
	class GHG_Cat_Main
	{
		displayName = "Ghost Hawk Gaming";
	};
};
class CfgEditorSubcategories
{
	class GHG_SubCat_Other
	{
		displayName = "Other";
	};
	class GHG_SubCat_ServicePoints
	{
		displayName = "Service Points";
	};
	class GHG_SubCat_Medical
	{
		displayName = "Medical";
	};
	class GHG_SubCat_Flags
	{
		displayName = "Flags";
	};
	class GHG_SubCat_Factory
	{
		displayName = "Factory";
	};
};