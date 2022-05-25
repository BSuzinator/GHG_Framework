class ACE_Medical_Injuries
{
    class damageTypes
    {
        class anesthetic
        {
            thresholds[] = {{0.1, 1}, {0.1, 0}};
            selectionSpecific = 1;
            class woundHandlers {
                ADDON = QFUNC(anestheticWoundHandler);
            };
        };
    };
};