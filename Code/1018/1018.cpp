#include<iostream>
using namespace std;

void win(int n[]){
	int maxs=max(n[0],max(n[1],n[2]));
	if(n[0]==maxs)
		cout<<"B";
	else if(n[1]==maxs)
		cout<<"C";
	else
		cout<<"J";
}
int main(){
	int n,n1[3]={0},n2[3]={0},count1[3]={0},count2[3]={0};
	char c1,c2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c1>>c2;
		if(c1=='C'&&c2=='J'){
			count1[0]++;
			count2[2]++;
			n1[1]++;
		}
		else if(c1=='C'&&c2=='B'){
			count1[2]++;
			count2[0]++;
			n2[0]++;	
		}
		else if(c1=='J'&&c2=='B'){
			count1[0]++;
			count2[2]++;
			n1[2]++;	
		}
		else if(c1=='J'&&c2=='C'){
			count1[2]++;
			count2[0]++;
			n2[1]++;	
		}
		else if(c1=='B'&&c2=='C'){
			count1[0]++;
			count2[2]++;
			n1[0]++;	
		}
		else if(c1=='B'&&c2=='J'){
			count1[2]++;
			count2[0]++;
			n2[2]++;	
		}
		else{
			count2[1]++;
			count1[1]++;
		}
	}
	cout<<count1[0]<<" "<<count1[1]<<" "<<count1[2]<<endl;
	cout<<count2[0]<<" "<<count2[1]<<" "<<count2[2]<<endl;
	win(n1);
	cout<<" ";
	win(n2);
	return 0;
}
