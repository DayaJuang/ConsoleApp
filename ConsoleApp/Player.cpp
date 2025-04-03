#include <iostream>
#include "player.h"


int Player::num_players = 0;

Player::Player(std::string name_val, int health_val) 
	: name{ name_val }, health{ health_val } {
	++num_players;
}

Player::Player(const Player& source)
	: Player{ source.name, source.health } {
}

void Player::talk(std::string dialogue) {
	std::cout << name << " says: " << dialogue << std::endl;
}

Player::~Player() {
	--num_players;
}

bool Player::is_dead() {
	if (health <= 0) {
		return true;
	}
	return false;
}

void display_player(const Player& p)
{
	std::cout << "Player name: " << p.name << std::endl;
	std::cout << "Player health: " << p.health << std::endl;
}
