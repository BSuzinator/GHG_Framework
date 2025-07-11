class CfgVehicles
{
	//Fix/Boost Defuse Radius
	class Items_base_F;
	class ACE_DefuseObject : Items_base_F {
		class ACE_Actions : ACE_Actions {
			class ACE_Defuse : ACE_Defuse {
				distance = 2;
			};
		};
	};
	class ACE_DefuseObject_Large: ACE_DefuseObject {
        class ACE_Actions: ACE_Actions {
            class ACE_Defuse: ACE_Defuse {
                distance = 3;
            };
        };
    };
	
};