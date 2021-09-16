/*======================================
	Loadout for MMG Gunner (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_m240b_elcan",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_ELCAN",
    [
      "rhsusf_100Rnd_762x51",
      100
    ],
    [],
    ""
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 4,
    [
      ["rhsusf_100Rnd_762x51",3,100],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhsusf_100Rnd_762x51",3,100]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]