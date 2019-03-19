#include<iostream>
using namespace std;

int main(){
	int arr[10];
	for(int i=0;i<10;i++)
		cin>>arr[i];
	for(int i=1;i<10;i++)
		if(arr[i]!=0){
			arr[i]--;
			cout<<i;
			break;
		}
	for(int i=0;i<10;i++){
		if(arr[i]!=0){
			for(int j=0;j<arr[i];j++)
				cout<<i;
		}
	}
	return 0;
}