/*======================================
	Loadout for Vehicle Crew (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "SMG_03_black",
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
    _vests select 0,
    [
      ["50Rnd_570x28_SMG_03",4,50],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [],
  _headgear select 5,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_m24_ARD","","","",[],[],""],
  _linkItems
]