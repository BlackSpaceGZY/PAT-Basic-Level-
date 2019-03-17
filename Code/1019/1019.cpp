#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cmp(int n1,int n2){
	return n1>n2;
}
int main(){
	int n1,n2,n3;
	cin>>n3;
	vector<int>v(4);
	while(true){
		v[0]=n3/1000;
		v[1]=(n3%1000)/100;
		v[2]=(n3%100)/10;
		v[3]=n3%10;
		sort(v.begin(),v.end(),cmp);
		n1=v[0]*1000+v[1]*100+v[2]*10+v[3];
		sort(v.begin(),v.end());
		n2=v[0]*1000+v[1]*100+v[2]*10+v[3];
		n3=n1-n2;
		printf("%04d - %04d = %04d\n",n1,n2,n3);
		if(n3==0||n3==6174)
			break;
	}
	return 0;
}