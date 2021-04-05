//Football.h
#include "sportsgame.h";
class Football : public Sportsgame {
public:
	Football(const string name = "", const int number = 0);
	Football(const Football& f);
	operator string() const;
	friend ostream& operator << (ostream& out, const Football& f);
	friend istream& operator >> (istream& in, Football& f);
};
