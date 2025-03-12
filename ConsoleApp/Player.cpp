#include <iostream>
#include "player.h"


Player::Player(std::string name_val, int health_val) 
	: name{ name_val }, health{ health_val } {}

Player::Player(const Player& source)
	: Player{ source.name, source.health } {
}

void Player::talk(std::string dialogue) {
	std::cout << name << " says: " << dialogue << std::endl;
}

bool Player::is_dead() {
	if (health <= 0) {
		return true;
	}
	return false;
}