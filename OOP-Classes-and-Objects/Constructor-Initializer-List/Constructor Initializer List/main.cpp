#include<iostream>
#include<string.h>

using namespace std;

class Player {
private:
	std::string name{"XXXXXX"}; // initialized first here cuz string already has its 'invisible' methods
	int health;
	int xp;

public:
//Overloaded Constructors
	Player();
	Player(std::string name_val);
	Player(std::string name_val,int health_val, int xp_val);
};


Player::Player() 
	: name{"None"},health{0},xp{0} {}


Player::Player(std::string name_val)
	: name{name_val}, health{ 0 }, xp{ 0 } //ORDER MATTERS -> NAME -> HEALTH -> XP 
{}


Player::Player(std::string name_val, int health_val, int xp_val) {
	name = name_val;
	xp = xp_val;
	health = health_val;
}

int main() {
	
	Player empty;
	Player frank("Frank");
	Player("Villain", 100, 55);

	return 0;
}