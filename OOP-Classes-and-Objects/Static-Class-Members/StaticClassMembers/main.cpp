#include <iostream>
#include "Player.h"

using namespace std;


void display_active_players() {
	cout << "Active Players: " << Player::getNumPlayers() << endl;
}


int main() {

	display_active_players();
	Player hero{ "hero" };
	display_active_players();
	return 0;
}