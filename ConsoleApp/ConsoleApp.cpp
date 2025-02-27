#include <iostream>
#include "player.h"

using namespace std;

void Player::talk(string dialogue) {
	cout << name << " says: " << dialogue << endl;
}

bool Player::is_dead() {
	if (health <= 0) {
		return true;
	}
	return false;
}


int main()
{
	Player* enemy = nullptr;
	enemy = new Player();

	enemy->set_name("Slime");
	enemy->set_health(50);

	enemy->talk("I am the enemy!");

	delete enemy;

	return 0;
}