#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int primeArr[500000]={0},n,m,cnt=0,k=2,num[10001];
	for(int i=2;i<=sqrt(500000);i++)
		for(int j=i;j<=500000/i;j++)
			primeArr[i*j]=1;
	cin>>m>>n;
	while(cnt<n){
		if(primeArr[k]==0){
			cnt++;
			if(cnt>=m)
				num[cnt]=k;
		}
		k++;
	}
	for(int i=m;i<=n;i++){
		if(i==n||(i-m+1)%10==0)
			cout<<num[i]<<endl;
		else
			cout<<num[i]<<" ";
	}
	return 0;
}
