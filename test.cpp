#include<stdio.h>
#include<string.h>

typedef struct{
	int tall;
	char name[10];
}Student;
int main()
{
	Student t1,t2;
	t1.tall=175;
	strcpy(t1.name,"sunqiang");
	t2=t1;
	printf("%d %s\n",t1.tall,t2.name);
	printf("%d %s\n",t1.tall,t2.name);
	return 0;
	
 } 
