#include <iostream>
using namespace std;

int square(double x) {
	return x*x*x;
}

string strings_sum(string s1, string s2, string s3){
    return s1+s2+s3;
}


int main(){
	int a;
	cin>>a;
	cout<<square(a)<<endl;
	
	string s1;
	string s2;
	string s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cout<<strings_sum(s1, s2, s3);
	return 0;
}
