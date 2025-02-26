﻿#include <iostream>

using namespace std;

class Player {
private:
	// attribute
	string name = "Player";
	int health = 100;

public:
	// method
	void talk(string dialogue) const { cout << name << " says " << dialogue << endl; };
	void is_dead();
};

int main()
{
	Player hero;
	Player companion;

	Player* enemy = nullptr;
	enemy = new Player();

	enemy->talk("I am the enemy!");

	delete enemy;

	return 0;
}