#include<stdio.h>
#include<string.h>
typedef struct{
	char name[100];
	int tall;
}Student;
int cmp(Student s1,Student s2);
void sort(Student a[],int n);
int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	Student stu[N];
	int i,j;
	for(i=0;i<N;i++){
		scanf("%s %d",stu[i].name,&stu[i].tall);
	}
	sort(stu,N);
//	for(i=0;i<N;i++){
//		printf("%s ",stu[i].name);
//	}
//	printf("\n");
//	for(i=0;i<N;i++){
//		printf("%d ",stu[i].tall);
//	}
//	printf("\n");
	int col=N/K;//每排人数 
	int final=N/K+N%K;//最后一排人数 
	char result[100];
	for(i=0;i<N;){
		if(i==0){//先站最后一排 
			strcpy(result,stu[i].name);
			i++;
			for(j=1;j<final;j++,i++){
				if(j%2==1){
					strcat(stu[i].name," ");
					strcat(stu[i].name,result);
					strcpy(result,stu[i].name);//
				}else{
					strcat(result," ");
					strcat(result,stu[i].name);
				}
			}
			printf("%s\n",result);
		}else{//其余排 
			strcpy(result,stu[i].name);
			i++;
			for(j=1;j<col;j++,i++){
				if(j%2==1){
					strcat(stu[i].name," ");
					strcat(stu[i].name,result);
					strcpy(result,stu[i].name);
				}else{
					strcat(result," ");
					strcat(result,stu[i].name);
				}
			}
			printf("%s\n",result);
		}
	}
	return 0;
}
int cmp(Student s1,Student s2){
	if(s1.tall!=s2.tall){
		return s1.tall>s2.tall;//只能返回1,0,1表示s1.tall大于s2.tall,0表示小于 
	}else{
		return strcmp(s2.name,s1.name);//可返回0，+1,-1 
	}
	
}
void sort(Student a[],int n){//冒泡排序 
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(cmp(a[j],a[j+1])<=0){
				Student t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
//void sort(Student a[],int n){//选择排序 
//	int i,j;
//	for(i=0;i<n;i++){
//		int max=i;
//		for(j=i+1;j<n;j++){
//			if(cmp(a[max],a[j])<=0){
//				max=j;
//			}
//		}
//		Student t=a[i];
//		a[i]=a[max];
//		a[max]=t;
//	}
//} 

