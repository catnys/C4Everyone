#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>

class Hero {

	std::string name;
	double health;
	double hunger;
	int stamina;
public:

	Hero(std::string nameVar, double health, double hunger, int stamina)
		: name{ nameVar }, health{ health }, hunger{ hunger }, stamina{ stamina } {};

	std::string getName() const {
		return this->name;
	}

	void setName(std::string name) {
		this->name = name;
	}

	double getHunger() const {
		return this->hunger;
	}

	void setHunger(double hunger) {
		this->hunger = hunger;
	}

	double getHealth() const {
		return this->health;
	}

	void setHealth(double health) {
		this->health = health;
	}


	int getStamina() const {
		return this->stamina;
	}

	void setStamina(int stamina) {
		this->stamina = stamina;
	}

};


int main() {


	Hero villain("villain", 100.0, 0.0, 100); // Create an instance of the Hero class

	std::cout << "Name: " << villain.getName() << std::endl;
	std::cout << "Health: " << villain.getHealth() << std::endl;
	std::cout << "Hunger: " << villain.getHunger() << std::endl;
	std::cout << "Stamina: " << villain.getStamina() << std::endl;

	std::cout << std::setfill('-');// HOLD
	std::cout << std::setw(40) << "" << std::endl;
	std::cout << std::setfill(' ');// RELEASE

	std::cout << std::setw(40) << "" << std::endl;




	std::vector<Hero> heroes;

	heroes.push_back(Hero("Todoroki", 100.0, 2.8, 90));
	heroes.push_back(Hero("Bubbles", 100.0, 0.0, 80));
	heroes.push_back(Hero("Flash", 100.0, 9.0, 100));

	// Now have a vector of Hero objects. You can access and manipulate them as needed.

	for (const Hero& hero : heroes) {
		std::cout << "Name: " << hero.getName() << ", Health: " << hero.getHealth() << ", Hunger: " << hero.getHunger() << ", Stamina: " << hero.getStamina() << std::endl;
	}


	return 0;
}