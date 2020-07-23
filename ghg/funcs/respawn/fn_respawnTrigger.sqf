if ( !hasInterface || alive player || ZEUS_WAVE_RESPAWN_OPTOUT ) exitWith {};

params ["_pos", "_obj"];

// Respawn the players
setPlayerRespawnTime 0;