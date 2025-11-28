#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    int id;
    string name;

public:
    Person();
    Person(int i, string n);

    int getId();
    string getName();

    void setName(string n);

    void display();
};

#endif
