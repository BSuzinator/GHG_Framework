class CfgVehicles
{
    class Bag_Base;
    class GHG_RuggedNova_blk: Bag_Base
    {
        author = "QuantX";
        scope = 2;
        displayName = "Rolm 1602 Computer (Black)";
        mass = 265;
        maximumLoad = 0;

        model = "\x\ghg\addons\hacking\models\ruggednova";
        picture = "\x\ghg\addons\hacking\models\ruggednova_icon.paa";

        hiddenSelectionsTextures[] = {"a3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"};
    };
    
    class GHG_RuggedNova_khk: GHG_RuggedNova_blk
    {
        displayName = "Rolm 1602 Computer (Khaki)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
    };
    
    class GHG_RuggedNova_cbr: GHG_RuggedNova_blk
    {
        displayName = "Rolm 1602 Computer (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
    };
};