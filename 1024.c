#include<stdio.h>
#include<string.h>
#define N 10000

int main()
{
	char a[N];
	gets(a);
	if(a[0]=='-'){
	 	printf("-");
	 }
	int i,j;
	int x=strchr(a,'E')-strchr(a,'.')-1;//表示小数的位数
	char* pi;//表示指数字符出现的位置 
	 int expon=0;//表示指数 
	 for(pi=strchr(a,'E')+2;*pi!='\0';pi++){
	 	expon=expon*10+(*pi-'0');
	 }
	 char* t=strchr(a,'E')+1 ;
	 if(*t=='-'){			//指数为负 
	 	if(expon!=0) printf("0.");
	 	for(i=0;i<expon-1;i++){
	 		printf("0");	//整数位前补零  
	 	}					
	 	printf("%c",a[1]);	//整数位 
	 	if(expon==0) printf("."); 
	 	for(i=3,j=0;j<x;i++,j++){
	 		printf("%c",a[i]);//输出各小数位 
		 }
	 }else{					//指数为正 
	 	printf("%c",a[1]);
	 	if(expon==0) printf(".");
	 	for(i=3,j=0;j<x;i++,j++){
	 		printf("%c",a[i]);//输出各小数位 
		 }
		 for(i=0;i<expon-x;i++){
		 	printf("0");	//结尾补零 
		 }
	 }
	 return 0;
}
