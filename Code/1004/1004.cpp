#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student{
	string name,id;
	int grade;
};
int cmp(student s1,student s2){
	return s1.grade>s2.grade;
}
int main(){
	int n;
	vector<student>v;
	cin>>n;
	for(int i=0;i<n;i++){
		student st;
		cin>>st.name>>st.id>>st.grade;
		v.push_back(st);
	}
	sort(v.begin(),v.end(),cmp);
	cout<<v[0].name<<" "<<v[0].id<<endl;
	cout<<v[v.size()-1].name<<" "<<v[v.size()-1].id<<endl;
	return 0;
}