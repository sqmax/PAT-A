#include<stdio.h>
#include<math.h>
int main()
{

	double A=0.005,B=-0.006;
	if(fabs(A) < 0.005) A = 0;
	if(fabs(B) < 0.005) B = 0;
	printf("%.2lf\n",A);
	printf("%.2lf\n",B);
	if(B<0){
		printf("%.2lf-%.2lfi",A,-B);
	}else{
		printf("%.2lf+%.2lfi",A,B);
	}
	return 0;
}
