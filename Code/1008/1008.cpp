#include<iostream>
using namespace std;

void reverse(int num[],int l,int r){
	int temp;
	while(l<r){
		temp=num[l];
		num[l]=num[r];
		num[r]=temp;
		l++;
		r--;
	}
}
int main(){
	int n,k,num[101];
	cin>>n>>k;
	k%=n;
	for(int i=0;i<n;i++)
		cin>>num[i];
	reverse(num,0,n-k-1);
	reverse(num,n-k,n-1);
	reverse(num,0,n-1);
	cout<<num[0];
	for(int i=1;i<n;i++)
		cout<<" "<<num[i];
	return 0;
}