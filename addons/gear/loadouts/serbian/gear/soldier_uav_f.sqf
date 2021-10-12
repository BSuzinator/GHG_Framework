/*======================================
	Loadout for FAC (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36kv_ag36",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_ACOG_RMR",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    ["rhs_mag_m713_Red",1],
    ""
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["rhs_mag_m715_Green",1,1],
      ["rhs_mag_m661_green",1,1],
      ["rhs_mag_m18_red",1,1],
      ["rhs_mag_m18_green",1,1],
      ["rhs_mag_m18_yellow",1,1],
      ["rhs_mag_m18_purple",1,1],
      ["Chemlight_green",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["ACRE_PRC117F",1],
      ["rhs_mag_m662_red",1,1],
      ["rhs_mag_m661_green",1,1],
      ["rhs_mag_m713_Red",2,1],
      ["rhs_mag_m715_Green",2,1],
      ["rhs_mag_m714_White",1,1]
    ]
  ],
  _headgear select 5,
  "rhsusf_oakley_goggles_clr",
  ["Laserdesignator","","","",["Laserbatteries",1],[],""],
  _linkItems
]