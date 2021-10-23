/*======================================
	Loadout for HeliCrew (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 0,
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],
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
    _vests select 6,
    [
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],
      ["rhs_mag_an_m8hc",1,1],
      ["rhs_mag_m18_red",1,1]
    ]
  ],
  [],
  "rhsusf_hgu56p_visor_mask_black",
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]