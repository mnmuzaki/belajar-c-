#include<iostream>
using namespace std;
int main(){
	int nilai = 0;
	
	while(nilai>0){
		cout<<"while-do berjalan"<<endl;
		nilai--;
	}
	
	do{
		cout<<"do-while berjalan"<<endl;
		nilai--;
	}while(nilai>0);
	
	
	return 0;
}