/*======================================
	Loadout for Recon Sniper (usArmy)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggle"];

[
  [
    _weapons select 2,
    "rhsusf_acc_M2010S",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_LEUPOLDMK4_2",
    ["rhsusf_5Rnd_300winmag_xm2010",5],
    [],
    "rhsusf_acc_harris_bipod"
  ],
  [],
  [
    "rhsusf_weap_m9",
    "",
    "",
    "",
    ["rhsusf_mag_15Rnd_9x19_FMJ",15],
    [],
    ""
  ],
  [
    _uniform,
    []
  ],
  [
    _vests select 3,
    [
      ["rhsusf_5Rnd_300winmag_xm2010",4,5],
      ["rhsusf_mag_15Rnd_9x19_FMJ",2,15],
      ["rhs_mag_an_m8hc",1,1]
    ]
  ],
  [],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]