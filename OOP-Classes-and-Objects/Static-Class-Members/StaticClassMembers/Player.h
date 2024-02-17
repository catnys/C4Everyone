#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {

private:
	static int numPlayers;
	std::string name;
	int health;
	int xp;

public:
	std::string getName() { return this->name; }
	int getHealth() { return this->health; }
	int getXp() { return this->xp; }
	
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	
	// Copy Constructor
	Player(const Player& source);
	// Destructor
	~Player();

	static int getNumPlayers();
};

#endif // _PLAYER_H_