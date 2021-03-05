/*======================================
	Loadout for Vehicle Crew (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 0,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      ["ACE_microDAGR",1],
	  ["ACE_CableTie",2]
    ]
  ],
  [
   _vests select 4,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",2,30]
    ]
  ],
  [],
  _headgear select 2,
  _goggles select 0,
  ["rhsusf_bino_m24_ARD","","","",[],[],""],
  _linkItems
]