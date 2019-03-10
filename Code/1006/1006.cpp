#include<iostream>
using namespace std;
int main(){
	string s;
	int c;
	cin>>c;
	for(int i=0;i<c/100;i++)
        s=s+'B';
	c=c%100;
	for(int i=0;i<c/10;i++)
        s=s+'S';
	c=c%10;
	for(int i=1;i<=c;i++)
        s=s+to_string(i);
	cout<<s;
}