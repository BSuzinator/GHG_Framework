/*======================================
	Loadout for MMG Gunner (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_pkp",
    "",
    "rhs_acc_perst1ik",
    "rhsusf_acc_ELCAN",
    ["rhs_100Rnd_762x54mmR",100],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform select 0,
    []
  ],
  [
    _vests select 4,
    [
      ["rhs_100Rnd_762x54mmR",3,100],
      ["rhs_mag_rgo",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhs_100Rnd_762x54mmR",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]