#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char *& p,int n){
	p = new char[n+1];
	for(int i=0; i < n;i++){
		p[i] = 'A' + i;
	}
	p[n] = '\0';
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
