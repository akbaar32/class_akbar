#include <iostream>
#include <string>
using namespace std;

class SpeciesBeruang
{	
private:
	string namaberuang;
	string namailmiah;
    string habitatberuang;
    string warnabuluberuang;
    string jenisberuang;
    int beratbadan;
    int tinggibadan;
    int umurberuang;
    
public:
    SpeciesBeruang (string namaberuang, string namailmiah, string habitatberuang, string warnabuluberuang, string jenisberuang, 
	int beratbadan, int tinggibadan, int umurberuang)
    {
    	SpeciesBeruang::namaberuang 		= namaberuang;
    	SpeciesBeruang::namailmiah 			= namailmiah;
        SpeciesBeruang::habitatberuang 		= habitatberuang;
        SpeciesBeruang::warnabuluberuang 	= warnabuluberuang;
        SpeciesBeruang::jenisberuang 		= jenisberuang;
        SpeciesBeruang::beratbadan 			= beratbadan;
        SpeciesBeruang::tinggibadan 		= tinggibadan;
        SpeciesBeruang::umurberuang 		= umurberuang;
    }

};
