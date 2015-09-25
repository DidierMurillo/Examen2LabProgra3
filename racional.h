#pragma once
#include <string>
using std::string;

#include <iostream>
using std::istream;
using std::ostream;

class Racional{
  friend ostream& operator<<(ostream&, const Racional&); 
  friend istream& operator>>(istream&, Racional&);
  private:
  	int numerador;
  	int denominador;
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
