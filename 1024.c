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
	int x=strchr(a,'E')-strchr(a,'.')-1;//��ʾС����λ��
	char* pi;//��ʾָ���ַ����ֵ�λ�� 
	 int expon=0;//��ʾָ�� 
	 for(pi=strchr(a,'E')+2;*pi!='\0';pi++){
	 	expon=expon*10+(*pi-'0');
	 }
	 char* t=strchr(a,'E')+1 ;
	 if(*t=='-'){			//ָ��Ϊ�� 
	 	if(expon!=0) printf("0.");
	 	for(i=0;i<expon-1;i++){
	 		printf("0");	//����λǰ����  
	 	}					
	 	printf("%c",a[1]);	//����λ 
	 	if(expon==0) printf("."); 
	 	for(i=3,j=0;j<x;i++,j++){
	 		printf("%c",a[i]);//�����С��λ 
		 }
	 }else{					//ָ��Ϊ�� 
	 	printf("%c",a[1]);
	 	if(expon==0) printf(".");
	 	for(i=3,j=0;j<x;i++,j++){
	 		printf("%c",a[i]);//�����С��λ 
		 }
		 for(i=0;i<expon-x;i++){
		 	printf("0");	//��β���� 
		 }
	 }
	 return 0;
}
