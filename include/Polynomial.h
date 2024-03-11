#pragma once
#include <iostream>
#include <vector>
#include "Term.h"

using namespace std;

class Polynomial {
public:
	Polynomial ();
	Polynomial (const Polynomial &rcPoly);

	unsigned int degree () const;
	unsigned int size () const;
	double evaluate (double variable) const;

	bool operator== (const Polynomial &rcPoly) const;
	Polynomial operator+ (const Polynomial &rcPoly) const;
	Polynomial operator- (const Polynomial &rcPoly) const;
	Polynomial operator+ (const Term &rcTerm);

	friend istream &operator>> (istream &rcInStream, Polynomial &rcPoly);
	friend ostream &operator<< (ostream &rcOutStream, Polynomial &rcPoly);

private:
	vector<Term> mcTerms;
};