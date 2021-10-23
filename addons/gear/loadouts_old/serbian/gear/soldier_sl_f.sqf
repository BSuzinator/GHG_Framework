/*======================================
	Loadout for Squad Leads (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36kv_ag36",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    ["rhs_mag_M441_HE",1],
    ""
  ],
  [],
  [],
  [
    _uniform,
    [
      ["ACRE_PRC152", 1]
    ]
  ],
  [
    _vests select 1,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_M441_HE",2,1],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 0,
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
  _headgear select 12,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]