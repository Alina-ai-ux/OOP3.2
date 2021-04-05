//sportsgame.h
#pragma once
#include <iostream>
#include <string>

using namespace std;
class Sportsgame
{
	int numberofplayers;
	string gamename;
public:
	Sportsgame(const string name = "", const int number = 0);
	Sportsgame(const Sportsgame& r);
	int getnumberofplayers() const { return numberofplayers; }
	string getgamename() const { return gamename; }
	void setnumberofplayers(const int value) { numberofplayers = value; }
	void setgamename(const string value) { gamename = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const Sportsgame& s);
	friend istream& operator >> (istream& in, Sportsgame& s);
};

