class CfgMarkers {
	class Flag;
	class GHG_Mkr : Flag {
		color[] = {0.26,0.26,0.26,1};
		icon = "ghg\main\ui\logo.paa";
		name = "GHG_Mkr";
		shadow = 1;
		size = 32;
	};
	class GHG_Mkr_Flag : GHG_Mkr {
		scope = 2;
		markerClass = "Flags";
		name = "Ghost Hawk Gaming";
		texture = "ghg\main\ui\logo.paa";
	};
};