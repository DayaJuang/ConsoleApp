#include <iostream>

using namespace std;

class Player {
	
	// attribute
	string name;
	int health;

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

	delete enemy;

	return 0;
}