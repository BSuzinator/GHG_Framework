/*======================================
	Loadout for Autorifleman (russian)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_pkm",
    "",
    "rhs_acc_perst1ik",
    "rhs_acc_okp7_dovetail",
    ["rhs_100Rnd_762x54mmR",200],
    [],
    "rhsusf_acc_saw_bipod"
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
      ["rhs_100Rnd_762x54mmR",2,200],
      ["rhs_mag_rgo",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhs_100Rnd_762x54mmR",4,200]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]