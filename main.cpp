#include"cricket.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

cricketteam::cricketteam() {
	int no_of_members = 0;
	int rank = 0;
	string captain = "s";
	int scoreinlast10matches[10] = { '0','0','0','0','0','0','0','0','0','0' };
	string *membernames = nullptr;
	char*teamname = nullptr;

}

cricketteam::cricketteam(string s, int n) {

	int no_of_members = n;
	string teamname = s;
}

cricketteam::cricketteam(string infofile)
{
	char arr[100];
	string s;
	string n;
	string c;
	int a;
	int i = 0;
	ifstream fin;
	fin.open(infofile.c_str());
	if (fin.is_open()) {
		fin.getline(arr, 100, ':');
		fin >> s;
		teamname = new char[s.length() + 1];
		strcpy_s(teamname,9 ,s.c_str());
		fin.getline(arr, 100, ':');
		fin >> a;
		no_of_members = a;
		membernames = new string[a];

		while (i < a) {

			getline(fin, membernames[i]);
			i++;
		}
		a = 0;
		fin.getline(arr, 100, ':');
		fin >> a;
		rank = a;
		a = 0;

		fin.getline(arr, 100, ':');
		fin >> c;
		captain = c;


		fin.getline(arr, 100, ':');
		i = 0;
		while (i < 10) {
			fin >> a;
			scoreinlast10matches[i] = a;
			fin.getline(arr, 100, ',');
			a = 0;
			i++;
		}
	}
	else {
		cout << "file not found";
	}
}


string cricketteam::getcaptain() {


	return captain;
}

void cricketteam::setcaptain(string s) {

	captain = s;
	
}

int cricketteam::getrank() {
	
	return rank;
}

void cricketteam::setrank(int r) {

	rank = r;
	

	
}

char* cricketteam::getteamname() {
	
	return teamname;
}

void cricketteam::setteamname(string t) {
	if (teamname != nullptr) {
		delete[] teamname;
	}
	teamname = new char[t.length() + 1];
	strcpy_s(teamname,10, t.c_str());

	
}


int cricketteam::avgscore() {

	int tot = 0;
	int avg;
	for (int i = 0; i < 10; i++)
	{

		tot = tot + scoreinlast10matches[i];
		 avg = tot / 10;
	}
	
	return avg;
}


void cricketteam::print() {

	cout << "the latest score of the team is :" << scoreinlast10matches[9] << endl;
	cout << "team name is: " << teamname << endl;
	cout << "captain name is: " << captain;


}

void cricketteam::printaboutteam() {

	cout << "..... The information about team is ....." << endl;
	cout << "Team Name: " << teamname << endl;
	cout << "team's captain is:" << captain << endl;
	cout << "team members are:\n";
	for (int i = 0; i < 11; i++) {
		cout << membernames[i] << endl;

	}
	cout << "last ten matches scores are:\n";
	for (int i = 0; i < 10; i++) {
		cout << scoreinlast10matches[i] << endl;
	}
	cout << "the rank of the team is :" << rank << endl;
}


void cricketteam::inputscore(int s) {

	
	for (int i = 0; i < 10; i++) {
		if (scoreinlast10matches[i] == ' ') {
			scoreinlast10matches[i] = s;
		}
	}
	int i = 0;
	
	for (int j=1; j < 10; j++) {
		scoreinlast10matches[i] = scoreinlast10matches[j];
		i++;
	}
	
	scoreinlast10matches[i] = s;


	
		cout << "last ten matches scores are:\n";
		for (int i = 0; i < 10; i++) {
			cout << scoreinlast10matches[i] << endl;
		}
	}

void cricketteam::inputteammembers(string s) {

	for (int i = 0; i < 11; i++)
	{
		

	 }
	}

//desructorcode..


cricketteam::~cricketteam() {

		delete[]membernames;
		delete[]teamname;

}








