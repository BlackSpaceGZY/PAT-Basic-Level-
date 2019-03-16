#include<iostream>
using namespace std;

int main(){
	string s1,s2;
	int d1,d2;
	long pa=0,pb=0;
	cin>>s1>>d1>>s2>>d2;
	for(int i=0;i<s1.length();i++)
		if(s1[i]==d1+'0')
			pa=pa*10+(s1[i]-'0');
	for(int i=0;i<s2.length();i++)
		if(s2[i]==d2+'0')
			pb=pb*10+(s2[i]-'0');
	cout<<pa+pb<<endl;
	return 0;
}