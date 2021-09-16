/*======================================
	Loadout for FAC (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 1,
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_1p29",
    ["rhs_30Rnd_545x39_7N10_AK",30],
    ["rhs_GRD40_Red",1],
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
    []
  ],
  [
    _vests select 2,
    [
      ["rhs_30Rnd_545x39_7N10_AK",8,30],
      ["rhs_GRD40_Green",1,1],
      ["rhs_VG40OP_green",1,1],
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
      ["rhs_VG40OP_red",1,1],
      ["rhs_VG40OP_green",1,1],
      ["rhs_GRD40_red",2,1],
      ["rhs_GRD40_green",2,1],
      ["rhs_GRD40_White",1,1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Laserdesignator","","","",["Laserbatteries",1],[],""],
  _linkItems
]