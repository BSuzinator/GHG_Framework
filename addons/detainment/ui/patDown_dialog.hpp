#include "CustomControlClasses.h"
#include "script_component.hpp"

class GHG_Dialog_PatDownResults
	{
		idd = 6666;
		
		class ControlsBackground
		{
			class BackgroundColor
			{
				type = 0;
				idc = -1;
				x = 0;
				y = 0;
				w = 1;
				h = 1;
				style = 0+80;
				text = "";
				colorBackground[] = {0.0079,0.0079,0.0079,0.7858};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class Title
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.29375;
				y = safeZoneY + safeZoneH * 0.22444445;
				w = safeZoneW * 0.23;
				h = safeZoneH * 0.05;
				style = 0;
				text = "Pat Down Results:";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "TahomaB";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 3);
				
			};
			class PrimaryWeapon
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.29375;
				y = safeZoneY + safeZoneH * 0.28;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.04;
				style = 0;
				text = "Primary Weapon:";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class Launcher
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.43;
				y = safeZoneY + safeZoneH * 0.28;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.04;
				style = 0;
				text = "Launcher:";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class SecondaryWeapon
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.56875;
				y = safeZoneY + safeZoneH * 0.28;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.04;
				style = 0;
				text = "Secondary Weapon:";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			
		};
		class Controls
		{
			class PlayerName
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.524;
				y = safeZoneY + safeZoneH * 0.227;
				w = safeZoneW * 0.103125;
				h = safeZoneH * 0.045;
				style = 0;
				text = "Name: BSuzinator";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class Uniform
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.29375;
				y = safeZoneY + safeZoneH * 0.37111112;
				w = safeZoneW * 0.132;
				h = safeZoneH * 0.03;
				style = 0;
				text = "Uniform";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class UniformList
			{
				type = 5;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.29375;
				y = safeZoneY + safeZoneH * 0.40333334;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.36555556;
				style = 16;
				colorBackground[] = {0,0,0,0.9};
				colorDisabled[] = {0.2,0.2,0.2,1};
				colorSelect[] = {1,1,1,1};
				colorText[] = {0.6,0.6,0.6,1};
				font = "PuristaMedium";
				maxHistoryDelay = 0;
				rowHeight = 0;
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
				class ListScrollBar
				{
					color[] = {1,1,1,1};
					thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
					arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
					arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
					border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
					
				};
				
			};
			class Vest
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.43;
				y = safeZoneY + safeZoneH * 0.37111112;
				w = safeZoneW * 0.13125;
				h = safeZoneH * 0.03;
				style = 0;
				text = "Vest";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class VestList
			{
				type = 5;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.43;
				y = safeZoneY + safeZoneH * 0.40333334;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.36555556;
				style = 16;
				colorBackground[] = {0,0,0,0.9};
				colorDisabled[] = {0.2,0.2,0.2,1};
				colorSelect[] = {1,1,1,1};
				colorText[] = {0.6,0.6,0.6,1};
				font = "PuristaMedium";
				maxHistoryDelay = 0;
				rowHeight = 0;
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
				class ListScrollBar
				{
					color[] = {1,1,1,1};
					thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
					arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
					arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
					border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
					
				};
				
			};
			class Backpack
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.56875;
				y = safeZoneY + safeZoneH * 0.37111112;
				w = safeZoneW * 0.13125;
				h = safeZoneH * 0.03;
				style = 0;
				text = "Backpack";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class BackpackList
			{
				type = 5;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.56875;
				y = safeZoneY + safeZoneH * 0.40333334;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.36555556;
				style = 16;
				colorBackground[] = {0,0,0,0.9};
				colorDisabled[] = {0.2,0.2,0.2,1};
				colorSelect[] = {1,1,1,1};
				colorText[] = {0.6,0.6,0.6,1};
				font = "PuristaMedium";
				maxHistoryDelay = 0;
				rowHeight = 0;
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
				class ListScrollBar
				{
					color[] = {1,1,1,1};
					thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
					arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
					arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
					border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
					
				};
				
			};
			class Player_PrimaryWeapon
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.29375;
				y = safeZoneY + safeZoneH * 0.32222223;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.03;
				style = 0;
				text = "Mk14 EBR";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class Player_Launcher
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.43;
				y = safeZoneY + safeZoneH * 0.32222223;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.03;
				style = 0;
				text = "M136 (HEAT)";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			class Player_SecondaryWeapon
			{
				type = 0;
				idc = -1;
				x = safeZoneX + safeZoneW * 0.56875;
				y = safeZoneY + safeZoneH * 0.32222223;
				w = safeZoneW * 0.131875;
				h = safeZoneH * 0.03;
				style = 0;
				text = "XM320";
				colorBackground[] = {0,0,0,0.9};
				colorText[] = {1,1,1,1};
				font = "PuristaMedium";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
				
			};
			
		};
		
	};