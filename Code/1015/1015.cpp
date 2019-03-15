#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student {
	long id;
	int de,cai,grade,rank;
};
int cmp(student s1,student s2){
	return s1.rank!=s2.rank?s1.rank<s2.rank:
	s1.grade!=s2.grade?s1.grade>s2.grade:s1.de!=s2.de?s1.de>s2.de:s1.id<s2.id;
}
int main(){
	int n,l,h;
	vector<student>v;
	scanf("%d %d %d",&n,&l,&h);
	for(int i=0;i<n;i++){
		student st;
		cin>>st.id>>st.de>>st.cai;
		if(st.de<l||st.cai<l)
			continue;
		st.grade=st.de+st.cai;
		if(st.de>=h&&st.cai>=h)
			st.rank=1;
		else if(st.de>=h&&st.cai<h)
			st.rank=2;
		else if(st.cai<h&&st.de<h&&st.de>=st.cai)
			st.rank=3;
		else 
			st.rank=4;
		v.push_back(st);
	}
	sort(v.begin(),v.end(),cmp);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
		printf("%d %d %d\n",v[i].id,v[i].de,v[i].cai);
	return 0;
}