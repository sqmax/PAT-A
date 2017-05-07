#include<stdio.h>

void getTime(int s,int e);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	getTime(m,n);
	return 0;
	
}
void getTime(int b,int e){
	int h,m,s;
//	int t=(b-e)/100;
	h=(e-b)/100/3600;
	m=(e-b-h*3600*100)/100/60;
	s=(e-b)/100%60;
	int t=(e-b-h*3600*100-m*60*100)/100;
	int t2=t*10/60-t/60*10;
	if(t2>=5){
		s++;
	}
	printf("%02d:%02d:%02d\n",h,m,s);
	
}
