#pragma once
#include <iostream>
#include <string>
using namespace std;

class FuzzyNumber{
private:
    double x, l, r;
public:
    void set_x(double value) { x = value; };
    void set_l(double value) { l = value; };
    void set_r(double value) { r = value; };
    double get_x() { return x; }
    double get_l() { return l; }
    double get_r() { return r; }
    void Read();
    void Display();
    FuzzyNumber& operator = (FuzzyNumber&);
};

void FuzzyNumber::Read()
{
    double a, b, c;
    cout << "Set fuzzy number" << endl;
    cout << "x = "; cin >> a;
    cout << "l = "; cin >> b;
    cout << "r = "; cin >> c;
    set_x(a);
    set_l(b);
    set_r(c);
}

void FuzzyNumber::Display()
{
    cout << "current fuzzy number " << get_x() - get_l() << " " << get_x() << " " << get_x() + get_r() << endl;
}

FuzzyNumber& FuzzyNumber::operator = (FuzzyNumber& f) {
    set_x(f.get_x());
    set_l(f.get_l());
    set_r(f.get_r());
    return *this;
}
