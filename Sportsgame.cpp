//Sportsgame.cpp
#include "sportsgame.h";
#include <sstream>
Sportsgame::Sportsgame(const string name, const int number) : gamename(name), numberofplayers(number) {}
Sportsgame::Sportsgame(const Sportsgame& s)
{
	gamename = s.gamename;
	numberofplayers = s.numberofplayers;
}
Sportsgame::operator string() const {
	stringstream ss;
	ss << "(" << getgamename() << "," << getnumberofplayers() << ")";
	return ss.str();
}
ostream& operator << (ostream& out, const Sportsgame& s) {
	return out << (string)s;
}
istream& operator >> (istream& in, Sportsgame& s) {
	string name;
	int number;
	cout << "The game is..."; in >> name;
	cout << "How many players?"; in >> number;
	s.setgamename(name); s.setnumberofplayers(number);
	return in;
}