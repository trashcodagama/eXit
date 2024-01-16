#pragma once
#include <windows.h>
class player_info
{
public:
	std::string name;
	int ans;
	int score;
	std::string personality;
	player_info() {
	}
	void update_score(int score) {
		this->score += score;
	}
	void show_personality() {
		if (this->score > 0) {
			;;
		}
	}
	std::string getName() const
	{
		return name;
	}
};
	