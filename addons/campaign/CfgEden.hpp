class ctrlMenu; // First we need to load the base class of the menu
class ctrlMenuStrip;
class Display3DEN
{
	
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items {
				class GHG_ToolsFolder
				{
					items[] += {"GHG_Base_Spawn"};
				};
				class GHG_Base_Spawn
				{
					text = "Spawn Saved Base";
					picture = "";
					action = "[] call ghg_campaign_fnc_edenSpawnEntitiesMenu;";
					opensNewWindow = 1;
				};
				
			};
		};
	};
};