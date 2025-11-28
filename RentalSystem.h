#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include "Person.h"

class RentalSystem {
private:
    Person persons[50];
    int count;

public:
    RentalSystem();

    void addPerson();
    void showPersons();
    void editPerson();
    void deletePerson();
};

#endif
