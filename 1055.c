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
	int col=N/K;//ÿ������ 
	int final=N/K+N%K;//���һ������ 
	char result[100];
	for(i=0;i<N;){
		if(i==0){//��վ���һ�� 
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
		}else{//������ 
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
		return s1.tall>s2.tall;//ֻ�ܷ���1,0,1��ʾs1.tall����s2.tall,0��ʾС�� 
	}else{
		return strcmp(s2.name,s1.name);//�ɷ���0��+1,-1 
	}
	
}
void sort(Student a[],int n){//ð������ 
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
//void sort(Student a[],int n){//ѡ������ 
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

