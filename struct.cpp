#include<iostream>
using namespace std;
struct biodata{			//deklarasi struct
	string nama; 	  	//deklarasi tipe string/kata
	float bobot; 		//deklarasi tipe float/bilangan desimal
	char gender;		//deklarasi tipe char/ karakter
	bool hobi_mancing;	//deklarasi tipe boolean
	int usia;			//deklarasi tipe integer
};

int main(){
	biodata data_mhs;	//deklarasi variabel tipe struct
	
	//inisalisasi data
	data_mhs.nama = "bagong";
	data_mhs.bobot = 80.5;
	data_mhs.gender = 'L';
	data_mhs.hobi_mancing = 1;
	data_mhs.usia = 19;
	
	cout<<data_mhs.nama<<endl;
	cout<<data_mhs.bobot<<endl;
	cout<<data_mhs.gender<<endl;
	cout<<data_mhs.hobi_mancing<<endl;
	cout<<data_mhs.usia<<endl;
	
	return 0;
}