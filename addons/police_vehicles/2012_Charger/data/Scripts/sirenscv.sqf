private["_vcl"];

_vcl = _this;


while {alive _vcl} do {


	if (!isNull driver _vcl && _vcl animationPhase "ani_sirens" > 0 && getdammage _vcl < 0.7 && _vcl animationPhase "ani_lightbar" > 0) then {			
		_phase = _vcl animationPhase "ani_sirens";
		_phase = _phase * 10;
		_phase = round _phase;
		_phase = _phase / 10;
		
		switch (_phase) do {
			case (0.2): {
				_vcl say3D "CVSiren1";
				sleep 4.629;
			};
			
			case (0.4): {
				_vcl say3D "CVSiren2";
				sleep 0.225;
			};
		
		};
		
	} else {
		waitUntil {sleep 2; (_vcl animationPhase "ani_sirens" > 0 && getdammage _vcl < 0.7 && _vcl animationPhase "ani_lightbar" > 0)};
	};	
};

exit;