#include<stdio.h>

int main()
{
	int a[10],b[50];
	int i,j;
	for(i=0,j=0;i<10;i++){
		scanf("%d",&a[i]);
		while(a[i]!=0){
			b[j++]=i;
			a[i]--;
		}
	}
	for(i=0;i<j;i++){
		if(b[i]!=0){
			printf("%d",b[i]);
			b[i]=-1;          //�����һ��������С������ʹ��Ƿ����Ժ������ 
			break;
		}
	}
	for(i=0;i<j;i++){
		if(b[i]!=-1){
			printf("%d",b[i]);	
		}
	}
	return 0;
}
//��2
//int main()
//{
//	int a[10];
//	int i;
//	for(i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=1;i<10;i++){
//		if(a[i]!=0){
//			printf("%d",i);
//			a[i]--;
//			break;
//		}
//	}
//	for(i=0;i<10;i++){
//		while(a[i]!=0){
//			printf("%d",i);
//			a[i]--;
//		}
//	}
//	return 0;
// } 
