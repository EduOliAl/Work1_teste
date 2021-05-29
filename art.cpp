#include <iostream>
#include <fstream>
#include "art.h" 
using namespace std;


Artistas* salvaArtista(ifstream *readArtCSV)
{
    string line;
    Artistas *art = new Artistas();

    getline(*readArtCSV, line, ',');

    art->id = line;

    return art;
}

void imprimeArt()
{

}