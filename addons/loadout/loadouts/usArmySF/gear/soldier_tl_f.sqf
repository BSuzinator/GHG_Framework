/*======================================
	Loadout for Team Leads (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    _weapons select 1,
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_su230_mrds",
    ["rhs_mag_30Rnd_556x45_Mk318_Stanag",30],
    ["rhs_mag_M441_HE",1],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 2,
    [
      ["rhs_mag_30Rnd_556x45_Mk318_Stanag",8,30],
      ["rhs_mag_M441_HE",2,1],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["rhs_mag_M441_HE",10,1],
      ["rhs_mag_M585_white",5,1],
      ["rhs_mag_m661_green",2,1],
      ["rhs_mag_m662_red",2,1],
      ["rhs_mag_m713_Red",2,1],
      ["rhs_mag_m715_Green",2,1],
      ["rhs_mag_m714_White",4,1]
    ]
  ],
  _headgear select 0,
  _goggles select 1,
  ["Binocular","","","",[],[],""],
  _linkItems
]