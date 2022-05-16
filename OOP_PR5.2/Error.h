#pragma once
#include <iostream>
#include <string>
using namespace std;

class Error {
    string message;
public:
    Error(string message)
        : message(message)
    {}

    string What() { return message; }
};
