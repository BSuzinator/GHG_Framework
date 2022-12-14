#include "\a3\ui_f\hpp\definecommongrids.inc"
#include "\a3\ui_f\hpp\definecommoncolors.inc"
#include "\a3\ui_f\hpp\defineresincl.inc"

class RscTitles
{
	class RscInfoText
	{
		idd = 3100;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		onLoad = "uinamespace setVariable ['BIS_InfoText',_this select 0]";
		onUnLoad = "uinamespace setVariable ['BIS_InfoText', nil]";
		class Controls
		{
			class InfoText
			{
				idc = 3101;
				style = "0x01 + 0x10 + 0x200 + 0x100";
				font = "RobotoCondensedBold";
				x = "(profileNamespace getVariable [""IGUI_GRID_MISSION_X"", (safezoneX + safezoneW - 21 * (GUI_GRID_WAbs / 40))])";
				y = "(profileNamespace getVariable [""IGUI_GRID_MISSION_Y"", (safezoneY + safezoneH - 10.5 * (GUI_GRID_HAbs / 25))])";
				w = "20 * (GUI_GRID_WAbs / 40)";
				h = "5 * ((GUI_GRID_WAbs / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				text = "";
				lineSpacing = 1;
				sizeEx = 0.045;
				fixedWidth = 1;
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				shadow = 1;
				colorShadow[] = {0,0,0,0.5};
				tooltipColorText[] = {1,1,1,1};
				tooltipColorBox[] = {1,1,1,1};
				tooltipColorShade[] = {0,0,0,0.65};
			};
		};
	};
};