/*======================================
	Loadout for Autorifleman (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_m249_pip_ris",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_EOTECH",
    ["rhsusf_200Rnd_556x45_box",200],
    [],
    "rhsusf_acc_saw_bipod"
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
      ["rhsusf_200Rnd_556x45_box",2,200],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhsusf_200Rnd_556x45_box",4,200]
    ]
  ],
  _headgear select 8,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]