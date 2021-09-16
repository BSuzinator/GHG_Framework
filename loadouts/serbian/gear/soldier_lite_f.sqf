/*======================================
	Loadout for EW Specialist (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36c_grip3",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_eotech_xps3",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [],
  [
    "hgun_esd_01_F",
    "muzzle_antenna_03_f",
    "",
    "",
    [],
    ["ESD_01_DummyMagazine_1",4331],
    ""
  ],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhssaf_30rnd_556x45_EPR_G36",8,30],
      ["SmokeShell",1,1],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [],
  _headgear select 8,
  "rhsusf_oakley_goggles_clr",
  [],
  _linkItems
]