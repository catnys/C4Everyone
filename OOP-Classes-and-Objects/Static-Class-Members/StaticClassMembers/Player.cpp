#include "Player.h"

int Player::numPlayers {0};

// Constructor
Player::Player(std::string name_val, int healh_val, int xp_val)
	: name{ name_val }, health{ healh_val }, xp{ xp_val } {
	++numPlayers;
}

// Copy Constructor
Player::Player(const Player& source)
	: Player(source.name, source.health, source.xp) {

}

// Destructor
Player::~Player() {
	--numPlayers;
}


// Static
int Player::getNumPlayers() {
	return numPlayers;
}