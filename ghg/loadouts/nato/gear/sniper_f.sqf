/*======================================
	Loadout for Recon Sniper (nato)
======================================*/
params ["_linkItems", "_weapons", "_magazine", "_scopes", "_uniforms", "_vests", "_headgears", "_backpacks", "_goggle"];

[
  [
    _weapons select 2,
    "rhsusf_acc_M2010S",
    "rhsusf_acc_anpeq15_bk",
    "rhsusf_acc_LEUPOLDMK4_2",
    [_magazines select 2,10],
    [],
    "rhsusf_acc_harris_bipod"
  ],
  [],
  [
    "hgun_P07_F",
    "",
    "",
    "",
    ["16Rnd_9x21_Mag",16],
    [],
    ""
  ],
  [
    _uniforms select 0,
    []
  ],
  [
    _vests select 3,
    [
      [_magazines select 2,3,10],
      ["16Rnd_9x21_Mag",2,16],
      ["rhs_mag_an_m8hc",1,1]
    ]
  ],
  [],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]