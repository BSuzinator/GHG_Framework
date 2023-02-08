while{true}do
{
	private["_car"];
	_car = _this;	

	waitUntil {((_car getHitPointDamage "HitBody") > .45)};
	_car setObjectMaterial [0,"\A3L_ChargerSRT8_Police\rvmats\BodyDamage.rvmat"];

	waitUntil {((_car getHitPointDamage "HitBody") < .45)};;
	_car setObjectMaterial [0,"\A3L_ChargerSRT8_Police\rvmats\Body.rvmat"];
};