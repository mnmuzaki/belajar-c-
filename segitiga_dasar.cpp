#include<iostream>
using namespace std;
int main(){
	int i, j, jml;
	
	cout<<"Masukkan jumlah perulangan :";
	cin>>jml;
	
	for(i=1;i<=jml;i++){
		for(j=1;j<=jml;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(i=1;i<=jml;i++){
		for(j=jml;j>=1;j--){
			if(j<=i)
			  cout<<"* ";
			else
			  cout<<"- ";
		}
		cout<<endl;
	}
	cout<<endl;
	/*
	for(i=1;i<=jml;i++){
		for(j=1;j<=jml;j++){
			if(j<=i)
			  cout<<"* ";
			else
			  cout<<"- ";
		}
		cout<<endl;
	}
	cout<<endl;
	*/
	
	return 0;
}