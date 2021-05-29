#ifndef __ART_H__
#define __ART_H__

#include <fstream>
using namespace std;

struct Artistas
{
    string id;
    float followers;
    string name;
    int popularity;
};


Artistas* salvaArtista(ifstream *readArtCSV);

void imprimeArt();





#endif // __ART_H__