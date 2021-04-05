//Football.cpp
#include "Football.h";
#include <sstream>
Football::Football(const string name, const int number) {
	string gamename = name;
	int numberofplayers = number;
	setgamename(gamename);
	setnumberofplayers(numberofplayers);
}
Football :: Football(const Football& f){
	string gamename = f.getgamename();
	int numberofplayers = f.getnumberofplayers();
}

Football::operator string() const {
	stringstream ss;
	ss << "(" << getgamename() << "," << getnumberofplayers() << ")";
	return ss.str();
}
ostream& operator << (ostream& out, const Football& f) {
	return out << (string)f;
}
istream& operator >> (istream& in, Football& f) {
	string name;
	int number;
	cout << "The game is..."; in >> name;
	cout << "How many players?"; in >> number;
	f.setgamename(name); f.setnumberofplayers(number);
	return in;

}