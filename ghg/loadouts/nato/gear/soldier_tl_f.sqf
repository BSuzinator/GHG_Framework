/*======================================
	Loadout for Team Leads (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 3,
    "",
    "rhsusf_acc_anpeq15_bk",
    "optic_Aco",
    [_magazines select 0,30],
    ["rhs_mag_M441_HE",1],
    ""
  ],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 0,
    [
      [_magazines select 0,8,30],
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
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]