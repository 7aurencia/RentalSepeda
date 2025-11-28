#include "RentalSystem.h"
#include <iostream>
using namespace std;

RentalSystem::RentalSystem() {
    count = 0;
}

void RentalSystem::addPerson() {
    int id;
    string name;

    cout << "Masukkan ID: ";
    cin >> id;
    cout << "Masukkan Nama: ";
    cin >> name;

    persons[count] = Person(id, name);
    count++;

    cout << "Penyewa ditambahkan!\n";
}

void RentalSystem::showPersons() {
    cout << "\n. ݁₊ ⊹ DATA PENYEWA . ݁˖ . ݁\n";
    for (int i = 0; i < count; i++) {
        persons[i].display();
    }
}

void RentalSystem::editPerson() {
    int id;
    cout << "Masukkan ID yang akan diedit: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (persons[i].getId() == id) {
            string newName;
            cout << "Nama baru: ";
            cin >> newName;
            persons[i].setName(newName);
            cout << "Berhasil diubah!\n";
            return;
        }
    }

    cout << "ID tidak ditemukan!\n";
}

void RentalSystem::deletePerson() {
    int id;
    cout << "Masukkan ID yang akan dihapus: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (persons[i].getId() == id) {
            for (int j = i; j < count - 1; j++) {
                persons[j] = persons[j + 1];
            }
            count--;
            cout << "Berhasil dihapus!\n";
            return;
        }
    }

    cout << "ID tidak ditemukan!\n";
}
