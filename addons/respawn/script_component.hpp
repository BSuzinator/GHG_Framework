#define COMPONENT respawn
#define COMPONENT_BEAUTIFIED Respawn
#include "\x\ghg\addons\main\script_mod.hpp"
#include "\x\ghg\addons\main\script_macros.hpp"

#define PLAYERS_PER_SQUAD 7
#define TIME_PER_PLAYER 5
#define MAX_WAIT_TIME (PLAYERS_PER_SQUAD * TIME_PER_PLAYER)
#define DUMMY_WAIT_TIME 100000