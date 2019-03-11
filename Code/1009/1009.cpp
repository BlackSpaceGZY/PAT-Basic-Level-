#include<iostream>
using namespace std;

int main(){
	string s[100],str;
	int n=0;
	while(cin>>str){
		s[n++]=str;
		if(cin.get()=='\n')
			break;
	}
	cout<<s[n-1];
	for(int i=n-2;i>=0;i--)
		cout<<" "<<s[i];
	return 0;
}