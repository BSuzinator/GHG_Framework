class ctrlMenu; // First we need to load the base class of the menu
class Display3DEN
{
	class ContextMenu: ctrlMenu
	{
		class Items
		{
			items[] += { "GHG_exportClassname" };
			class GHG_exportClassname
			{
				text = "Copy Classname"; // Name of the entry, ideally localised
				value = 0; // In order for an entry to show up in the context menu as a level one item, it must have a value defined
				action = "call ghg_3den_fnc_exportClassname"; // The code which is executed when the entry was selected
				conditionShow = "hoverObject"; // The Condition, see below
			};
		};
	};
};