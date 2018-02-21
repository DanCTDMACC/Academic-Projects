#ifndef GENERALDATA_H
#define GENERALDATA_H
#include <vector>
#include <string>
#include "Player.cpp"
using namespace std;

class GeneralData {

public:
	Player p1;
	Player p2;
	std::vector<int> deck;
	bool p1IsPlaying;
	bool isAsking;
	GeneralData() {

	}
};

#endif /* DATA_H */