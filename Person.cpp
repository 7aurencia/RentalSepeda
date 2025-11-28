#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
    id = 0;
    name = "";
}

Person::Person(int i, string n) {
    id = i;
    name = n;
}

int Person::getId() {
    return id;
}

string Person::getName() {
    return name;
}

void Person::setName(string n) {
    name = n;
}

void Person::display() {
    cout << "ID: " << id << " | Nama: " << name << endl;
}
