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
    void Output (void)
    {
    	cout << "###############################################################################" << endl;
    	cout << "*********************************SPECIES BERUANG*******************************"<< endl;
        cout << "Nama Beruang           	: " << namaberuang << endl;
        cout << "Nama Ilmiah           	: " << namailmiah << endl;
        cout << "Habitat Beruang        	: " << habitatberuang << endl;
        cout << "Warna Bulu Beruang     	: " << warnabuluberuang << endl;
        cout << "Jenis Beruang      	: " << jenisberuang << endl;
        cout << "Berat Badan      	: " << beratbadan << " Kg" << endl;
        cout << "Tinggi Badan  		: " << tinggibadan << " Meter" <<endl;
        cout << "Umur Beruang     	: " << umurberuang << "Tahun" << endl;
        cout << endl;
    };
};

int main()
    { 
	SpeciesBeruang BeruangA("Royal Bear","Ursus Martimus", "Laut", 
	"Putih","Beruang Kutub", 100, 2 , 5);
	
	 SpeciesBeruang BeruangB("Ishq Bear","Ursus Thibetanus Laniger", "Pegunungan", 
	"Hitam","Beruang Hitam Himalaya", 60, 1.5 , 5);
	
	SpeciesBeruang BeruangC("Mirror Bear","Ursus Arctos Crowtheri", "Pegunungan Atlas", 
	"Coklat","Beruang Atlas", 70, 2 , 5);

    BeruangA.Output();
    BeruangB.Output();
    BeruangC.Output();
    return 0;
}
