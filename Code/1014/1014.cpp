#include<iostream>
#include<cctype>
using namespace std;

int main(){
	char charr[2]={'0'};
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i=0,j=0,second;
	while(i<s1.length()&&j<s2.length()){
		if(s1[i]==s2[j]&&charr[0]!='0'&&
			(isdigit(s1[i])||(65<=s1[i]&&s1[i]<=79))){
			charr[1]=s1[i];
			break;
		}
		if(s1[i]==s2[j]&&65<=s1[i]&&s1[i]<=72&&charr[0]=='0')
			charr[0]=s1[i];
		i++;
		j++;
	}
	i=0;j=0;
	while(true){
		if(s3[i]==s4[j]&&isalpha(s3[i])){
			second=i;
			break;
		}
		i++;
		j++;
	}
	switch(charr[0]){
		case 'A':
			cout<<"MON ";
			break;
		case 'B':
			cout<<"TUE ";
			break;
		case 'C':
			cout<<"WED ";
			break;
		case 'D':
			cout<<"THU ";
			break;
		case 'E':
			cout<<"FRI ";
			break;
		case 'F':
			cout<<"SAT ";
			break;
		case 'G':
			cout<<"SUN ";
			break;
	}
	if(isdigit(charr[1]))
		printf("%02d",charr[1]-'0');
	else
		printf("%d",charr[1]-'A'+10);
	printf(":%02d\n",second);
	return 0;
}