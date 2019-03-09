#include<iostream>
using namespace std;

int main(){
	int n,flag=0,a,b,c,n1=0,n2=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		a=0,b=0,c=0;
		for(int i=0;i<s.length();i++){
			if(s[i]!='A'&&s[i]!='P'&&s[i]!='T'){
				c=-1;
				break;
			}
			if((flag==0&&s[i]=='T')){
				c=-1;
				break;
			}
			if(flag==0&&s[i]=='A')
				a++;
			else if(s[i]=='P'){
				flag=1;
				n1++;
			}
			else if(flag==1&&s[i]=='A')
				b++;
			else if(s[i]=='T'){
				flag=2;
				n2++;
			}
			else if(flag==2&&s[i]=='A')
				c++;
		}
		if(((b==1&&c==a)||(a*b==c&&b!=0))&&n1==1&&n2==1)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
		flag=0,n1=0,n2=0;
	}
	return 0;
}