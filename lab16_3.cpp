#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int R){
	vector<int> A;
	for(int i=0;i<R;i++){
		A.push_back(rand()%10);
	}
	return A;
}

void showVector(vector<int> S){
	cout << "[" ;
	for(int i=0;i<S.size();i++){
		cout << S[i] << " ";
	}
	cout << "]";
}

int dotProduct(vector<int> X,vector<int> Y){
	int Z =0;
	for(int i=0;i<X.size();i++){
		Z += X[i]*Y[i];
	}
	return Z;
}
