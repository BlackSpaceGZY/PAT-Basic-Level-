#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct moon{
	double store;
	double money;
	double s;
};
bool cmp(moon m1,moon m2){
	return m1.s>m2.s;
}
int main(){
	vector<moon> v;
	int N,D;
	cin>>N>>D;
	for(int j=0;j<2;j++){
		for(int i=0;i<N;i++){
			if(j==0){
				struct moon m;
				cin>>m.store;
				v.push_back(m);
			}
			if(j==1){
				cin>>v[i].money;
				v[i].s=v[i].money/v[i].store;
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<N;i++)
		cout<<v[i].money;
	return 0;
}