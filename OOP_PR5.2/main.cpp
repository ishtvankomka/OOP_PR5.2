#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include <exception>
#include "Empty.h"
#include "Error.h"
#include "E.h"
#include "FuzzyNumber.hpp"
using namespace std;

void FU()
{
    cout << "unexpected error! - bad_exception" << endl;
    throw;
}

void FT()
{
    cout << "unknown error! - terminate" << endl;
    exit(0);
}

FuzzyNumber InverseFuzzyNumber1(FuzzyNumber& f)
{
    if (f.get_x() <= 0)
    {
        throw 1;
    }
    
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

FuzzyNumber InverseFuzzyNumber2(FuzzyNumber& f) throw()
{
    if (f.get_x() <= 0)
    {
        throw 1.0;
    }
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

FuzzyNumber InverseFuzzyNumber3(FuzzyNumber& f) throw(char)
{
    if (f.get_x() <= 0)
    {
        throw '1';
    }
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

FuzzyNumber InverseFuzzyNumber4(FuzzyNumber& f) throw(Empty)
{
    if (f.get_x() <= 0)
    {
        throw Empty();
    }
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

FuzzyNumber InverseFuzzyNumber5(FuzzyNumber& f) throw(Error)
{
    if (f.get_x() <= 0)
    {
        throw Error("x equal or less than 0");
    }
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

FuzzyNumber InverseFuzzyNumber6(FuzzyNumber& f) throw(E)
{
    if (f.get_x() <= 0)
    {
        throw E("x equal or less than 0");
    }
    double i1, i2, i3;
    i1 = 1 / (f.get_x() + f.get_r());
    i2 = 1 / f.get_x();
    i3 = 1 / (f.get_x() - f.get_l());

    double x1, l1, r1;
    x1 = i2;
    l1 = i1 - i2;
    r1 = i3 - i2;
    FuzzyNumber i;
    i.set_x(x1);
    i.set_l(l1);
    i.set_r(r1);
    return i;
}

int main() {
    set_unexpected(FU);
    set_terminate(FT);
    //1
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber1(f1);
        f2.Display();

    }
    catch (int)
    {
        cout << " catch (int) <= InverseFuzzyNumber1()" << endl;
    }
    //2
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber2(f1);
        f2.Display();

    }
    catch (double)
    {
        cout << " catch (double) <= InverseFuzzyNumber2()" << endl;
    }
    //3
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber3(f1);
        f2.Display();

    }
    catch (char)
    {
        cout << " catch (char) <= InverseFuzzyNumber3()" << endl;
    }
    //4
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber4(f1);
        f2.Display();

    }
    catch (Empty)
    {
        cout << " catch (char) <= InverseFuzzyNumber4()" << endl;
    }
    //5
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber5(f1);
        f2.Display();

    }
    catch (Error e)
    {
        cout << " catch (Error) <= InverseFuzzyNumber5() :" << endl;
        cout << e.What() << endl;
    }
    //6
    try
    {
        FuzzyNumber f1;
        f1.Read();
        f1.Display();
        FuzzyNumber f2 = InverseFuzzyNumber6(f1);
        f2.Display();

    }
    catch (E e)
    {
        cout << " catch (E) <= InverseFuzzyNumber6() :" << endl;
        cout << e.What() << endl;
    }
    catch (bad_exception)
    {
        cout << " catch (bad_exception)" << endl;
    }
    return 0;
}
