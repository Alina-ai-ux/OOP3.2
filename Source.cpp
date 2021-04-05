//Source.cpp
#include "Football.h"
using namespace std;
int main() {
	Sportsgame s, s1;
	s.setgamename("sportsgame");
	s.setnumberofplayers(23);
	cout << s << endl;
	cin >> s1;
	cout << s1 << endl;

	Football f("football",34),f1;
	cout << f<< endl;
	cin >> f1;
	cout << f1;
	return 0;
} 