//
// Created by PC-R5-3600 on 20.06.2024.
//
#include <iostream>
#include "biblioteka.h"
#include <fstream>
#include <cstdlib>

void Ksiazka::wypiszinfo() {

   // cout << "nazwa ksiazki: "<<nazwa<<endl;
   // cout << "autor: "<<autor<<endl;
   // cout<<"termin: "<<termin<<endl;
  //  cout<<"rok: "<<rok<<endl;

    fstream ksiazki;

    ksiazki.open("ksiazki.txt",ios::in);
    if(ksiazki.good()== true)
    {

        while(!ksiazki.eof()){

            getline(ksiazki,nazwa);
            getline(ksiazki,autor);
            getline(ksiazki,termin);
            getline(ksiazki,rok);

                cout<<"----------------"<<endl<<nazwa<<endl<<autor<<endl<<termin<<endl<<rok<<endl;
        }
ksiazki.close();
    }



}

void Ksiazka::dodaj() {


    cout<<"podaj nazwe ksiazki:";
cin>>nazwa;

    cout<<"podaj autora ksiazki:";
    cin>>autor;
    cout<<"podaj termin do oddania: ";
    cin>>termin;

    cout<<"podaj rok ksiazki:";
    cin>>rok;


cout<<"dodano ksiazke:"<<endl<<nazwa<<endl<<autor<<endl<<rok;

fstream ksiazki;

ksiazki.open("ksiazki.txt",ios::out | ios::app);
if(ksiazki.good()== true)
{
        ksiazki<<nazwa<<endl<<autor<<endl<<termin<<endl<<rok ;
        ksiazki.close();

}




}

Ksiazka tab[20]={Ksiazka("abc","abc","abc",15),
                Ksiazka("dlugopis","mickiewicz","28 maj",1999)};


