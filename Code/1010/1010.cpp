#include<iostream>
using namespace std;

int main(){
	int exp,coe;
	string s;
	while(cin>>coe>>exp){
		if(exp==0)
			break;
		s+=to_string(coe*exp)+" "+to_string(exp-1)+" ";
		if(cin.get()=='\n')
			break;
	}
	if(s.length()==0)
		cout<<"0 0";
	else
		cout<<s.substr(0,s.length()-1);
	return 0;
}