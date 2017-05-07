#include<stdio.h>
#include<stdlib.h>
typedef struct {
	char* name;
	char* sign;
	int grade;
}student;

int main()
{
	int n;
	scanf("%d",&n);
	student* stu[n];
	int i;
	for(i=0;i<n;i++){
		stu[i]=(student*)malloc(sizeof(student));
		stu[i]->name=(char*)malloc(100);
		stu[i]->sign=(char*)malloc(100);
		scanf("%s %s %d",stu[i]->name,stu[i]->sign,&(stu[i]->grade));
	}
	int max,min; 
	max=min=stu[0]->grade;
	int imax,imin;
	imax=imin=0;
	for(i=1;i<n;i++){
		if(stu[i]->grade>max){
			max=stu[i]->grade;
			imax=i;
		}
		if(stu[i]->grade<min){
			min=stu[i]->grade;
			imin=i;
		}
	}
	printf("%s %s\n",stu[imax]->name,stu[imax]->sign);
	printf("%s %s\n",stu[imin]->name,stu[imin]->sign);
	return 0;
}
