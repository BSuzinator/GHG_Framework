/*======================================
	Loadout for Autorifleman (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    "rhs_weap_m249_pip",
    "",
    "rhsusf_acc_anpeq15_bk",
    "optic_Aco",
    ["rhsusf_200Rnd_556x45_soft_pouch",200],
    [],
    "rhsusf_acc_saw_bipod"
  ],
  [],
  [],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 4,
    [
      ["rhsusf_200Rnd_556x45_soft_pouch",2,200],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhsusf_200Rnd_556x45_soft_pouch",4,200]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]