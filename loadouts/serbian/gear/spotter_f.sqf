/*======================================
	Loadout for Recon Spotter (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_g36kv_grip3",
    "",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_eotech_xps3",
    ["rhssaf_30rnd_556x45_EPR_G36",30],
    [],
    "rhsusf_acc_rvg_blk"
  ],
  [],
  [],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["ACE_EntrenchingTool",1],
      ["ACE_MapTools",1],
      ["ACE_Kestrel4500",1],
      ["ACE_RangeCard",1],
      ["ACE_SpottingScope",1],
      ["rhssaf_30rnd_556x45_EPR_G36",6,30],
      ["rhs_mag_m67",2,1]
    ]
  ],
  [
    _backpacks select 0,
    [
      ["rhsusf_20Rnd_762x51_SR25_m118_special_Mag",4,20]
    ]
  ],
  _headgear select 0,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]