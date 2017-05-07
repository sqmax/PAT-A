#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;

const int maxm=1010;
string rec[maxm];
map<string,bool> mp;

int main()
{
	int m,n,s;
	scanf("%d%d%d",&m,&n,&s);
	for(int i=1;i<=m;i++){
		cin>>rec[i];
		mp[rec[i]]=false;
	}
	bool flag=false;
	for(int i=s;i<=m;){
		if(mp[rec[i]]==false){
			mp[rec[i]]=true;
			cout<<rec[i]<<endl;
			flag=true;
			i+=n;
		}else{
			i++;
		}
	}
	if(flag==false) printf("Keep going...\n");
	return 0;
}
