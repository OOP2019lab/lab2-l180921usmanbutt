#include <string>
using namespace std;

class cricketteam {

	string* membernames;
	int no_of_members;
	char*teamname;
	int rank;
	string captain;
	int scoreinlast10matches[10];

public:
	//constructors
	cricketteam();   //defaultconstructor
	cricketteam(string s, int no_of_members);
	cricketteam(string infofile);

	//getters setters...
	string getcaptain();
	void setcaptain(string s);
	int getrank();
	void setrank(int r);
	char* getteamname();
	void setteamname(string name);

	//functionss...
	int avgscore();
	void print();
	void printaboutteam();
	//input functions........

	void inputscore(int score);
	void inputteammembers(string s);

	//destructor....
	~cricketteam();

};
