#include<iostream>
using namespace std;

int main(){
	int n,num,flag=0,cnt=0,arr[5]={0},cnt2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		if(num%10==0)
			arr[0]+=num;
		else if(num%5==1){
			cnt2=1;
			if(flag==0)
				arr[1]+=num;
			else
				arr[1]-=num;
			flag=!flag;
		}
		else if(num%5==2)
			arr[2]++;
		else if(num%5==3){
			cnt++;
			arr[3]+=num;
		}
		else if(num%5==4)
			arr[4]=max(arr[4],num);
	}
	if(arr[0]==0)
		cout<<"N";
	else 
		cout<<arr[0];
	for(int i=1;i<5;i++){
		if(i==1&&cnt2==0)
			cout<<" N";
		else if(arr[i]==0&&i!=1)
			cout<<" N";
		else{
			if(i==3)
				printf(" %.1f",(float)arr[3]/cnt);
			else
				cout<<" "<<arr[i];
		}
	}
	return 0;
}