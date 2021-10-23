/*======================================
	Loadout for HeliPilots (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "SMG_03C_black",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_eotech_xps3",
    ["50Rnd_570x28_SMG_03",50],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [],
  [],
  [
    _uniform,
    [
	  ["ACE_microDAGR",1]
	]
  ],
  [
    _vests select 3,
    [
      ["50Rnd_570x28_SMG_03",4,50],
	  ["rhs_mag_m18_red",2,1]
    ]
  ],
  [],
  _headgear select 2,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]