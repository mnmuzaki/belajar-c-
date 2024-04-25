#include<iostream>
using namespace std;
int main(){
	int x = 7, y = 3, z = 4;
	
	z += y;
	y = x;
	x -= z;
	y %= z;
	
	cout << x + y + z <<endl;
	
	return 0;
}