#include <iostream>
#include "biblioteka.h"
#include <string>

//system zarzadzania biblioteka : sledzenie ksiazek wypozyczajacych i terminow zwrotu
int main() {

    do {


        cout << "-----SYSTEM ZARZADZANIA BIBLIOTEKA-----" << endl;
        cout << "1.Dodaj tytul" << endl;
        cout << "2.Dostepne tytuly" << endl;

        int wybor;
        cin >> wybor;

        Ksiazka *k1 = new Ksiazka;


        switch (wybor) {


            case 1: {




                k1->dodaj();


                break;
            }
            case 2: {

                k1->wypiszinfo();

                delete k1;

            }


        }


    } while (1);


    return 0;
}


