#pragma once
#include <iostream>

using namespace std;

class Term {
public:
  static const char VARIABLE;
	Term (double coefficient = 0.0, unsigned int exponent = 0,
		char variable = VARIABLE);
	Term (const Term &rcTerm);

	unsigned int degree () const;
	double coefficient () const;
	char variable () const;
	double evaluate (double variableValue) const;
	bool isPositive () const;
	bool operator== (const Term &rcTerm) const;
	Term operator+ (const Term &rcTerm) const;
	Term operator- (const Term &rcTerm) const;

	friend istream &operator>> (istream &rcInStream, Term &rcTerm);
	friend ostream &operator<< (ostream &rcOutStream, const Term &rcTerm);

private:
	double mCoefficient;
	unsigned int mExponent;
	char mVariable;
};