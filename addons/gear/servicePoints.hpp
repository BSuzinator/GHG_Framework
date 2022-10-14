class HeliH;
class ghg_servicePoint : HeliH
{
    scope = 0;
    scopeCurator = 0;
    author = "GHG Team";
    displayName = "Service Point Base";
    model="\A3\Weapons_F\empty.p3d";
    icon="iconObject_circle";
    editorCategory="GHG_Cat_Main";
    editorSubcategory="GHG_SubCat_ServicePoints";
    vehicleClass="Signs";
    destrType="DestructNo";
    accuracy=0.2;
    animated=0;
    cost=0;
    ace_repair_canRepair = 1;
    ace_rearm_defaultSupply = 10000;
};

class ghg_servicePoint_air : ghg_servicePoint
{
    scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Air Service Point (Circle)";
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_HelipadCircle_F.jpg";
    _generalMacro="Land_HelipadCircle_F";
    model="\A3\Structures_F\Mil\Helipads\HelipadCircle_F.p3d";
    accuracy=1000;
    mapSize=1;

};

class ghg_servicePoint_air_invis : ghg_servicePoint 
{
    scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Air Service Point (Empty)";
    mapSize=1;
    _generalMacro="Land_HelipadEmpty_F";
    model="\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
    icon="iconObject_1x1";
    accuracy=1000;

};

class ghg_servicePoint_air_psp : ghg_servicePoint 
{
    scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Air Service Point (PSP)";
    mapSize=1;
    _generalMacro="Land_HelipadEmpty_F";
    model = "\vn\structures_f_vietnam_02\usarmy\fort\vn_b_helipad_01.p3d";
	editorPreview = "\vn\editorpreviews_f_vietnam\structures\preview_Land_vn_b_helipad_01.jpg";
    icon="iconObject_1x1";
    accuracy=1000;
    vehicleClass = "Structures";
    simulation = "house";

};

class ghg_servicePoint_land : ghg_servicePoint 
{
    scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Land Service Point";
    mapSize=1;
    _generalMacro="Land_HelipadEmpty_F";
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_JumpTarget_F.jpg";
    model="\A3\Structures_F\Mil\Helipads\JumpTarget_F.p3d";
    icon="iconObject_1x1";
    accuracy=1000;

};
class ghg_servicePoint_land_invis : ghg_servicePoint 
{
    scope = 2;
    scopeCurator = 2;
    author = "GHG Team";
    displayName = "Land Service Point (Empty)";
    mapSize=1;
    _generalMacro="Land_HelipadEmpty_F";
    model="\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
    icon="iconObject_1x1";
    accuracy=1000;

};