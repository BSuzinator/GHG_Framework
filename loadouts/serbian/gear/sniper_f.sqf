/*======================================
	Loadout for Recon Sniper (serbian)
======================================*/
params ["_linkItems", "_uniform", "_vests", "_headgear", "_backpacks"];

[
  [
    "rhs_weap_sr25",
    "rhsusf_acc_sr25s",
    "rhsusf_acc_anpeq15side_bk",
    "rhsusf_acc_m8541",
    ["rhsusf_20Rnd_762x51_SR25_m118_special_Mag",5],
    [],
    "rhsusf_acc_harris_bipod"
  ],
  [],
  [
    "rhsusf_weap_glock17g4",
    "",
    "",
    "",
    ["rhsusf_mag_17Rnd_9x19_JHP",17],
    [],
    ""
  ],
  [
    _uniform,
    []
  ],
  [
    _vests select 2,
    [
      ["rhsusf_20Rnd_762x51_SR25_m118_special_Mag",5,20],
      ["rhsusf_mag_17Rnd_9x19_JHP",2,17],
      ["rhs_mag_an_m8hc",1,1]
    ]
  ],
  [],
  _headgear select 1,
  "rhsusf_oakley_goggles_clr",
  ["rhsusf_bino_lrf_Vector21","","","",[],[],""],
  _linkItems
]