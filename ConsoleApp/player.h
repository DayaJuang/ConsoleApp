#ifndef PLAYER_H
#define	PLAYER_H

#include <string>


class Player {
private:
	// attributes
	std::string name;
	int health;

public:
	// constructors
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val);

	// destructor
	~Player() {};

	// methods
	void set_name(std::string name) { this->name = name; };
	std::string get_name() { return name; };
	void set_health(int health) { this->health = health; };
	int get_health() { return health; };

	void talk(std::string dialogue);
	bool is_dead();
};

#endif // DEBUG