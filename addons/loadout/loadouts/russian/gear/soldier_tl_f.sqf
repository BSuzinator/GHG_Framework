/*======================================
	Loadout for Team Leads (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 1,
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_1p29",
    ["rhs_30Rnd_545x39_7N10_AK",30],
    ["rhs_VOG25",1],
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
    []
  ],
  [
    _vests select 0,
    [
      ["rhs_30Rnd_545x39_7N10_AK",8,30],
      ["rhs_VOG25",2,1],
      ["rhs_mag_rgo",1,1]
    ]
  ],
  [
    _backpacks select 1,
    [
      ["rhs_VOG25",10,1],
      ["rhs_VG40OP_white",5,1],
      ["rhs_VG40OP_green",2,1],
      ["rhs_VG40OP_red",2,1],
      ["rhs_GRD40_red",2,1],
      ["rhs_GRD40_green",2,1],
      ["rhs_GRD40_White",4,1]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["Binocular","","","",[],[],""],
  _linkItems
]