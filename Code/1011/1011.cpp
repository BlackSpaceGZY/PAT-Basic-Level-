#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		long a,b,c;
		cin>>a>>b>>c;
		if(a+b>c)
			cout<<"Case #"<<i<<": true"<<endl;
		else
			cout<<"Case #"<<i<<": false"<<endl;
	}
}