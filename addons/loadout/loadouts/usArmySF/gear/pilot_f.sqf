/*======================================
	Loadout for Jet Pilots (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [],
  [],
  [
    "rhsusf_weap_glock17g4",
    "rhsusf_acc_omega9k",
    "acc_flashlight_pistol",
    "",
    ["rhsusf_mag_17Rnd_9x19_FMJ",17],
    [],
    ""
  ],
  [
    "U_B_PilotCoveralls",
    [
		["ACE_CableTie",2]
	]
  ],
  [
    "V_Rangemaster_belt",
    [
      ["ACE_IR_Strobe_Item",1],
      ["ACE_microDAGR",1],
      ["rhsusf_mag_17Rnd_9x19_FMJ",3,15],
      ["SmokeShellRed",1,1],
      ["SmokeShellGreen",1,1],
      ["ACE_Chemlight_HiGreen",1,1],
      ["ACE_Chemlight_HiRed",1,1]
    ]
  ],
  [],
  "RHS_jetpilot_usaf",
  _goggles select 1,
  [],
  _linkItems
]