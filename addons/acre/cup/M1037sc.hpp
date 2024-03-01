class CUP_nHMMWV_Base;
class CUP_nM1037sc_Base : CUP_nHMMWV_Base {
	acre_hasInfantryPhone = 1;
	acre_infantryPhoneDisableRinging = 0;
	acre_infantryPhoneIntercom[] = {"all"};
	acre_infantryPhoneControlActions[] = {"intercom_1"};
    class AcreRacks : AcreRacks {
		class Rack_0 {RADIO_HUMVEE_RACK};
		class Rack_1 {
			displayName = "Command";
			shortName = "CMD";
			componentName = "ACRE_VRC111";
			allowedPositions[] = {{"cargo",1},"external"};
			disabledPositions[] = {"driver","turnedout"};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {};
		};
		class Rack_2 {
			displayName = "Asset Control";
			shortName = "FAC";
			componentName = "ACRE_VRC111";
			allowedPositions[] = {{"cargo",1},"external"};
			disabledPositions[] = {"driver","turnedout"};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {};
		};
		class Rack_3 {
			displayName = "Auxillery 1";
			shortName = "AUX 1";
			componentName = "ACRE_VRC111";
			allowedPositions[] = {{"cargo",1},"external"};
			disabledPositions[] = {"driver","turnedout"};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {};
		};
		class Rack_4 {
			displayName = "Auxillery 2";
			shortName = "AUX 2";
			componentName = "ACRE_VRC111";
			allowedPositions[] = {{"cargo",1},"external"};
			disabledPositions[] = {"driver","turnedout"};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {};
		};
	};
	class AcreIntercoms {
		class Intercom_1 {
			displayName="Intercom";
			shortname="Int";
			allowedPositions[]={"inside"};
			disabledPositions[]={};
			limitedPositions[]={};
			numLimitedPositions[]={};
			masterPositions[]={{"cargo",1}};
			connectedByDefault=1;			
		};
	};
};