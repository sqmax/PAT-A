#include<stdio.h>
#include<string.h>

void read(int a);
int main(){
	char c;
	int sum=0,cnt=1,t,d;
	while((c=getchar())!='\n'){
		sum+=c-'0';
	}
	t=sum;
	while(t>9){
		t/=10;
		cnt*=10;
	}
	do{
		d=sum/cnt;
		read(d);
		if(cnt>9){
			printf(" ");
		}
		sum%=cnt;
		cnt/=10;
	}while(cnt>0);
	return 0;
} 
void read(int a){
	char p[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int b[10]={0,1,2,3,4,5,6,7,8,9};
	int i;
	for(i=0;i<10;i++){
		if(a==b[i]){
			printf("%s",p[i]);
		}
	}
}
