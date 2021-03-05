/*======================================
	Loadout for FAC (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 3,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ACOG_RMR",
    [_magazines select 0,30],
    ["rhs_mag_m713_Red",1],""],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 2,
    [
      [_magazines select 0,8,30],
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
      ["rhs_mag_m714_White",1,1
      ]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Laserdesignator","","","",["Laserbatteries",1],[],""],
  _linkItems
]