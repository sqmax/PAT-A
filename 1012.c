#include<stdio.h>

void calcuA(int a[],int n,int* A1,int* A2,int* A3,double* A4,int* A5);
void print(int A);
int main()
{
	int n;
	int a[n];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int A1,A2,A3,A5;
	double A4;
	calcuA(a,n,&A1,&A2,&A3,&A4,&A5);
	int tem[5]={A1,A2,A3,A4,A5};
	print(A1);
	print(A2);
	print(A3);
	if(A4==0){
		printf("N ");
	}else{
		printf("%.1f ",A4);	
	}
	if(A5==0){
		printf("N");
	}else{
		printf("%d",A5);	
	}
	
		
	return 0;	

}
void calcuA(int a[],int n,int* A1,int* A2,int* A3,double* A4,int* A5){
	*A1=*A2=*A3=*A4=*A5=0;
	double tA4=0.0;
	int flag=1;
	int count=0,max=0;
	int i;
	for(i=0;i<n;i++){
		if(a[i]%5==0&&a[i]%2==0){
			*A1+=a[i];
		}
		if(a[i]%5==1){
			*A2+=flag*a[i];
			flag=-flag;
		}
		if(a[i]%5==2){
			(*A3)++;
		}
		if(a[i]%5==3){
			tA4+=a[i];
			count++;
		}
		if(a[i]%5==4){
			if(a[i]>max){
				max=a[i];
			}
		}
	}
	if(count!=0){
		*A4=tA4/count;
	}
	*A5=max;
}
void print(int A){
	if(A==0){
		printf("%c ",'N');
	}else{
		printf("%d ",A);
	}
}
