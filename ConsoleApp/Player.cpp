#include <iostream>
#include "player.h"

Player::Player() : name{ "None" }, health{ 100 } {}
Player::Player(std::string name_val) : name{ name_val }, health{ 100 } {}
Player::Player(std::string name_val, int health_val) : name{ name_val }, health{ health_val } {}

void Player::talk(std::string dialogue) {
	std::cout << name << " says: " << dialogue << std::endl;
}

bool Player::is_dead() {
	if (health <= 0) {
		return true;
	}
	return false;
}