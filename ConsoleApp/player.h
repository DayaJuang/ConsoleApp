#ifndef PLAYER_H
#define	PLAYER_H

#include <string>


class Player {
private:
	// attributes
	std::string name;
	int health;
	static int num_players;

public:
	// constructors
	Player(std::string name_val = "None", int health_val = 100);

	// copy constructor
	Player(const Player& source);

	// destructor
	~Player() {};

	// methods
	void set_name(std::string name) { this->name = name; };
	std::string get_name() { return name; };
	void set_health(int health) { this->health = health; };
	int get_health() const { return health; };

	void talk(std::string dialogue);
	bool is_dead();

	static int get_num_players() { return num_players; };
	friend void display_player(const Player& p);
};

#endif // DEBUG