#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class E : public exception
{
    string message;
public:
    E(string message)
        : message(message)
    {}

    string What() { return message; }
};
