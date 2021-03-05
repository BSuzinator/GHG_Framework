/*======================================
	Loadout for Recon Sniper (usArmySF)
======================================*/
params ["_linkItems", "_weapons", "_uniform", "_vests", "_headgear", "_backpacks", "_goggles"];

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
    "rhsusf_weap_glock17g4",
    "rhsusf_acc_omega9k",
    "acc_flashlight_pistol",
    "",
    ["rhsusf_mag_17Rnd_9x19_FMJ",17],
    [],
    ""
  ],
  [
    _uniform,
    [
		["ACE_CableTie",2]
	]
  ],
  [
    _vests select 0,
    [
      ["rhsusf_5Rnd_300winmag_xm2010",4,5],
      ["rhsusf_mag_17Rnd_9x19_FMJ",2,15],
      ["rhs_mag_an_m8hc",1,1]
    ]
  ],
  [],
  _headgear select 1,
  _goggles select 1,,
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]