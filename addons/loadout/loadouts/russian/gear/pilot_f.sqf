/*======================================
	Loadout for Jet Pilots (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [],
  [],
  [
    "rhs_weap_makarov_pm",
    "",
    "",
    "",
    ["rhs_mag_9x18_8_57N181S",15],
    [],
    ""
  ],
  [
    _uniform select 1,
    []
  ],
  [
    "rhs_vest_commander",
    [
      ["ACE_IR_Strobe_Item",1],
      ["ACE_microDAGR",1],
      ["rhs_mag_9x18_8_57N181S",3,15],
      ["rhs_mag_rdg2_Red",1,1],
      ["rhs_mag_rdg2_Green",1,1],
      ["ACE_Chemlight_HiGreen",1,1],
      ["ACE_Chemlight_HiRed",1,1]
    ]
  ],
  [],
  "RHS_jetpilot_usaf",
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]