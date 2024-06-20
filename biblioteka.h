//
// Created by PC-R5-3600 on 20.06.2024.
//
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
#ifndef BIBLIOTEKA_BIBLIOTEKA_H
#define BIBLIOTEKA_BIBLIOTEKA_H


class Ksiazka{
private:
    string nazwa;
    string autor;
    string termin;
    int rok;
public:

    Ksiazka(string nazwa,string autor,string termin,int rok){

        this->nazwa=nazwa;
        this->autor=autor;
        this->termin=termin;
        this->rok=rok;

    }
Ksiazka(){

        nazwa = "default";
        autor = "default";
        termin = "default";
        rok = 0;


    }

    void wypiszinfo();
    void dodaj();


};







#endif //BIBLIOTEKA_BIBLIOTEKA_H
