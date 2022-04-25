/*======================================
	Loadout for Recon Spotter (usMC)
======================================*/
params ["_linkItems", "_uniform", "_headgear", "_goggle"];

[
  [
    "rhs_weap_m16a4_carryhandle",
    "",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_compm4",
    ["rhs_mag_30Rnd_556x45_M855_Stanag",30],
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
    "rhsusf_spc_rifleman",
    [
      ["ACE_EntrenchingTool",1],
      ["ACE_MapTools",1],
      ["ACE_Kestrel4500",1],
      ["ACE_RangeCard",1],
      ["ACE_SpottingScope",1],
      ["rhs_mag_30Rnd_556x45_M855_Stanag",6,30],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    "rhsusf_assault_eagleaiii_coy",
    [
      ["rhsusf_5Rnd_300winmag_xm2010",16,5]
    ]
  ],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]