#include <iostream>
using namespace std;

int square(double x) {
	return x*x*x;
}

int main(){
	int a;
	cin>>a;
	cout<<square(a)<<endl;
	return 0;
}
