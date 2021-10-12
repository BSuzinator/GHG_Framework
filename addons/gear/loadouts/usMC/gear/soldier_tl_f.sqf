/*======================================
	Loadout for Team Leads (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle_M203",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
    ["rhs_mag_M441_HE",1],
    ""
  ],
  [],
  [],
  [
	_uniform,
	[]
  ],
  [
    "rhsusf_spc_squadleader",
    [
      ["rhs_mag_30Rnd_556x45_M855_Stanag",8,30],
      ["rhs_mag_M441_HE",2,1],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    "rhsusf_falconii_coy",
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
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]