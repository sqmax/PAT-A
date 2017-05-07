#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

const int maxn=100010;
string pwd[maxn];

int main()
{
	string tPwd;
	int n;
	cin>>tPwd>>n;
	getchar();
	int cnt=0;
	while(1){
		string temp;
		getline(cin,temp);
		if(temp=="#") break;
		pwd[cnt++]=temp;
	}		
	for(int i=0;i<cnt;i++){
		if(i==n){
			printf("Account locked\n");
			break;
		}
		if(pwd[i]==tPwd){
			printf("Welcome in\n");
			break;
		}else{
			printf("Wrong password: %s\n",pwd[i].c_str());
		}
	}
	return 0;
}
