#include <iostream>
#include "player.h"

using namespace std;


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