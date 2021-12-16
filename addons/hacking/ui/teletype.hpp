#include "script_component.hpp"

class RscTeletype
{
    idd = TELETYPE_IDD;
    
    movingEnable = 0;
    enableSimulation = 1;

    controlsBackground[] = {};
    controls[] = {};
    class objects
    {
        class TeletypeModel
        {
            idc = 5;
            
            type = 82; // CT_OBJECT_CONTAINER
            
            model = "x\ghg\addons\hacking\models\teletype\teletype";
            
            scale = 1;
            
            direction[] = {0, 0, 1};
            up[] = {0, 1, 0};

            x = 0.5;
			y = 0.5;
			z = 0.2;
            
            xBack = 0.5;
			yBack = 0.5;
			zBack = 0.5;

            inBack = 1;
            enableZoom = 1;
            zoomDuration = 0.5;
            
            class Areas
            {
                class Paper1
                {
                    selection = "paper1";
                    
                    class Controls
                    {
                        class RscText
                        {
                            idc = 3;
                            deletable = 0;
                            fade = 0;
                            access = 0;
                            type = 0; // CT_STATIC
                            colorBackground[] = {0,0,0,0};
                            colorText[] = {0,0,0,1};
                            text = "";
                            fixedWidth = 0;
                            x = 0.045;
                            y = 0;
                            w = 0.92;
                            h = 1;
                            style = 16 + 512; // ST_MULTI + ST_NO_RECT
                            shadow = 0;
                            colorShadow[] = {0,0,0,0};
                            font = "EtelkaMonospacePro";
                            SizeEx = 0.03;
                            linespacing = 1;
                            tooltipColorText[] = {1,1,1,0};
                            tooltipColorBox[] = {1,1,1,0};
                            tooltipColorShade[] = {0,0,0,0};
                        };
                    };
                };

                class Paper2
                {
                    selection = "paper2";
                    
                    class Controls
                    {
                        class RscText
                        {
                            idc = 4;
                            deletable = 0;
                            fade = 0;
                            access = 0;
                            type = 0; // CT_STATIC
                            colorBackground[] = {0,0,0,0};
                            colorText[] = {0,0,0,1};
                            text = "";
                            fixedWidth = 0;
                            x = 0.045;
                            y = 0.05;
                            w = 0.92;
                            h = 1.5;
                            style = 16 + 512; // ST_MULTI + ST_NO_RECT
                            shadow = 0;
                            colorShadow[] = {0,0,0,0};
                            font = "EtelkaMonospacePro";
                            SizeEx = 0.03;
                            linespacing = 1;
                            tooltipColorText[] = {1,1,1,0};
                            tooltipColorBox[] = {1,1,1,0};
                            tooltipColorShade[] = {0,0,0,0};
                        };
                    };
                };
                
                class Panel1
                {
                    selection = "panel1";
                    
                    class Controls
                    {
                        class Switch_Power
                        {
                            idc = 6;
                            
                            access = 0;
                            type = 41; // CT_XBUTTON
                            style = 0;
                            default = 0;
                            enable = 1;
                            show = 1;
                            fade = 0;
                            blinkingPeriod = 0;
                            x = 0.1;
                            y = 0.15;
                            w = 0.15;
                            h = 0.2;
                            colorBackground[] = {1,0,0,0.5};
                            colorActiveBackground[] = {0,0,0,0};
                            colorActiveBackground2[] = {0,0,0,0};
                            colorDisabled[] = {0,0,0,0};
                            text = "";
                            size = GUI_GRID_H;
                            font = "RobotoCondensed";
                            shadow = 0;
                            color[] = {{0,0,0,0};
                            colorActive[] = {0,0,0,0};
                            colorActive2[] = {0,0,0,0};
                            tooltip = "Power Switch";
                            tooltipColorShade[] = {0,0,0,1};
                            tooltipColorText[] = {1,1,1,1};
                            tooltipColorBox[] = {1,1,1,1};
                            period = 1;
                            soundClick[] = {};
                            soundEnter[] = {};
                            soundPush[] = {};
                            soundEscape[] = {};
                            onCanDestroy = "";
                            onDestroy = "";
                            onMouseEnter = "";
                            onMouseExit = "";
                            onSetFocus = "";
                            onKillFocus = "";
                            onKeyDown = "";
                            onKeyUp = "";
                            onMouseButtonDown = "";
                            onMouseButtonUp = "";
                            onMouseButtonClick = "";
                            onMouseButtonDblClick = "";
                            onMouseZChanged = "";
                            onMouseMoving = "";
                            onMouseHolding = "";
                            onButtonClick = "";
                            onButtonDown = "";
                            onButtonUp = "";
                        };
                        
                        class Switch_Transfer : Switch_Power
                        {
                            idc = 7;
                            
                            x = 0.75;
                            
                            tooltip = "Transfer Switch";
                        };
                        
                        class Switch_Abort : Switch_Power
                        {
                            idc = 8;
                            
                            x = 0.05;
                            y = 0.8;
                            w = 0.25;
                            h = 0.6;
                            
                            tooltip = "Abort Switch";
                        };
                        
                        class Button_Parity : Switch_Transfer
                        {
                            idc = 9;
                            
                            y = 0.72;
                            
                            tooltip = "Parity Reset";
                        };
                    };
                };
                
                class Panel2
                {
                    selection = "panel1";
                    
                    class Controls
                    {
                        
                    };
                };
            };
        };
    };
};