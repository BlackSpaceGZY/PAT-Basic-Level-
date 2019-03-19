#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	string s;
	cin>>a>>b>>c;
	a=a+b;
	if(a==0){
		cout<<0<<endl;
		return 0;
	}
	while(a!=0){
		s=to_string(a%c)+s;
		a=a/c;
	}
	cout<<s<<endl;
	return 0;
}