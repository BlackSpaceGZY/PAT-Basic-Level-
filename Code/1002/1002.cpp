#include<iostream>
using namespace std;

int main(){
	string s,str;
	int n=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		n+=s[i]-'0';
	s=to_string(n);
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case '0':
				str+="ling ";
				break;
			case '1':
				str+="yi ";
				break;
			case '2':
				str+="er ";
				break;
			case '3':
				str+="san ";
				break;
			case '4':
				str+="si ";
				break;
			case '5':
				str+="wu ";
				break;
			case '6':
				str+="liu ";
				break;
			case '7':
				str+="qi ";
				break;
			case '8':
				str+="ba ";
				break;
			case '9':
				str+="jiu ";
				break;
		}
	}
	cout<<str.substr(0,str.length()-1)<<endl;
	return 0;
}