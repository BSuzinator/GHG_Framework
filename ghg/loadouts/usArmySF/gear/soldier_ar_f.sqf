/*======================================
	Loadout for Autorifleman (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

[
  [
    "rhs_weap_m249_pip",
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhsusf_200Rnd_556x45_soft_pouch",200],
    [],
    "rhsusf_acc_saw_bipod"
  ],
  [],
  [],
  [
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 0,
    [
      ["rhsusf_200Rnd_556x45_soft_pouch",2,200],
      ["rhs_mag_m67",1,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhsusf_200Rnd_556x45_soft_pouch",4,200]
    ]
  ],
  _headgear select 1,
  _goggles select 1,,
  [],
  _linkItems
]