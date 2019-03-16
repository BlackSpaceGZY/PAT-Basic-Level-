#include<iostream>
using namespace std;

int main(){
	string s,str;
	int a=0,b;
	cin>>s>>b;
	for(int i=0;i<s.length();i++){
		a=a*10+(s[i]-'0');
		if(i==0&&a<b)
			continue;
		str+=to_string(a/b);
		a=a%b;
	}
	if(str=="")
		cout<<0<<" "<<a<<endl;
	else
		cout<<str<<" "<<a<<endl;
	return 0;
}