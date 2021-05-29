#include <iostream>
#include <fstream>
#include "art.h"
using namespace std;



void registraArtista(fstream *fileO)
{
    Artistas *art;
    ifstream readArt;
    readArt.open("artistas.csv");

    if(readArt.is_open())
        art = salvaArtista(&readArt);
    else
        cout << "Erro ao abrir o arquivo artistas.csv" << endl;

    cout << "Teste1: " << art->id << endl;

    fileO->write((char*) art, sizeof(art)); // armazenando id do primeiro artista em arquivo binário

    delete art;
    readArt.close();
}

void lendoArt(fstream *fileI)
{
    string id;

    fileI->read((char*) &id, sizeof(Artistas));
    cout << "Lendo dado binario de artistas.dat: " << id << endl;
}



int main()
{

    fstream file;
    file.open("artistas.dat", ios::out | ios::in | ios::binary);

    if(file.is_open())
    {
        registraArtista(&file);
        lendoArt(&file);
    }
    else
        cout << "Erro ao abrir o arquivo 1" << endl;

    file.close();
        


return 0;
}