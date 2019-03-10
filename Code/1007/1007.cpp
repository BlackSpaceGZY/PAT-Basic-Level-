#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int primeArray[100001]={0},n,cnt=0,first=3,second=0;
	for(int i=2;i<sqrt(100000);i++){
		for(int j=i;j<=100000/i;j++)
			primeArray[i*j]=1;
	}
	cin>>n;
	for(int i=4;i<=n;i++){
		if(primeArray[i]==0){
			second=first;
			first=i;
			if(first-second==2)
				cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}