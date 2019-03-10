#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,num,flag=0;
	int arr[101];
	cin>>n;
	fill(arr,arr+101,-1);
	for(int i=0;i<n;i++){
		cin>>num;
		if(arr[num]==-1)
			arr[num]=0;
		while(num!=1){
			if(num%2==0)
				num/=2;
			else
				num=(num*3+1)/2;
			if(num>100)
				continue;
				arr[num]=1;
		}
	}
	for(int i=100;i>1;i--){
		if(arr[i]==0){
			if(flag==0){
				cout<<i;
				flag=1;
			}
			else
				cout<<" "<<i;
		}
	}
	return 0;
}