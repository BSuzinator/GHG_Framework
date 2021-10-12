/*======================================
	Loadout for Recon Spotter (usArmy)
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
    _vests select 3,
    [
      ["ACE_EntrenchingTool",1],
      ["ACE_MapTools",1],
      ["ACE_Kestrel4500",1],
      ["ACE_RangeCard",1],
      ["ACE_SpottingScope",1],
      ["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 2,
    [
      ["rhsusf_5Rnd_300winmag_xm2010",16,5]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]