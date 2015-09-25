#pragma once
#include <string>
using std::string;

class Racional{
  private:
  	int numerador;
  	unsigned int denominador;
  	const Racional& simplificar();
  public:
  	explicit Racional(int = 0, int = 1);
  	string toString()const;
  	double toDouble()const;
  	const Racional& operator=(const Racional&);
	const Racional& operator+=(const Racional&);
	const Racional& operator-=(const Racional&);
	const Racional& operator*=(const Racional&);
	const Racional& operator/=(const Racional&);
  	const Racional operator+(const Racional&)const;
	const Racional operator-(const Racional&)const;
	const Racional operator*(const Racional&)const;
	const Racional operator/(const Racional&)const;
	bool operator==(Racional&);
	bool operator!=(Racional&);	
};
