#include <iostream>
#include "player.h"

void Player::talk(std::string dialogue) {
	std::cout << name << " says: " << dialogue << std::endl;
}

bool Player::is_dead() {
	if (health <= 0) {
		return true;
	}
	return false;
}