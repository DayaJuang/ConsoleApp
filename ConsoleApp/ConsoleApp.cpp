#include <iostream>

using namespace std;

class Player {
public:
	// attribute
	string name;
	int health;

public:
	// method
	void talk(string dialogue);
	void is_dead();
};

int main()
{
	Player hero;
	Player companion;

	Player* enemy = nullptr;
	enemy = new Player();

	enemy->name = "Slime";
	enemy->health = 100;


	delete enemy;

	return 0;
}