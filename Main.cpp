#include <iostream>
#include "RentalSystem.h"
using namespace std;

int main()
{
    RentalSystem rs;
    int choice;

    do
    {
        cout << "\n ݁˖ . ݁ RENTAL SEPEDA Q . ݁₊ ⊹ ݁\n";
        cout << "1. Tambah Penyewa\n";
        cout << "2. Tampilkan Penyewa\n";
        cout << "3. Edit Penyewa\n";
        cout << "4. Hapus Penyewa\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        if (choice == 1)
            rs.addPerson();
        else if (choice == 2)
            rs.showPersons();
        else if (choice == 3)
            rs.editPerson();
        else if (choice == 4)
            rs.deletePerson();

    } while (choice != 5);

    return 0;
}
