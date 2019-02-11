#include <iostream>
#include <cstring>
#include <string>
#include "cricket.h"
using namespace std;



int  main() {

	cricketteam obj("infofile.txt");
	obj.getcaptain();
	obj.setcaptain("usman");
	obj.getrank();
	obj.setrank(5);
	obj.getteamname();
	obj.setteamname("australia");
	obj.avgscore();
	obj.print();
	obj.printaboutteam();
	obj.inputscore(1000);
	system("pause");
	return 0;
}