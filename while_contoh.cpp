#include<iostream>
using namespace std;
int main(){
    int tiket = 100, beli, jml_pembeli = 0;
    
    while(tiket>0){
    	cout<<"Beli tiket berapa? : "; 
		cin>>beli;
		
    	tiket = tiket - beli; //atau tiket -= beli;
    	jml_pembeli++;
    	
		cout<<"Sisa tiket : "<<tiket<<endl<<endl;
	}
	
	cout<<"Total pembeli : "<<jml_pembeli<<endl;
    
	return 0;
}