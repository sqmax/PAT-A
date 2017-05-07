#include<stdio.h>

int main()
{
	int a,da,b,db;
	int pa,pb,s;
	scanf("%d %d %d %d",&a,&da,&b,&db);
	s=count(a,da)+count(b,db);
	printf("%d\n",s);
	
	return 0;
}
int count(int x,int dx)
{
	int t;
	int res=0;
//	int count=0;
	while(x>0){
		t=x%10;
		if(t==dx){
//			count++;
			res=res*10+dx;
		}
		x/=10;
	}
	return res;
}
