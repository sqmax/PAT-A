#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 60

void weekday(char a);
void hour(char a);
int main()
{
	char a[4][N];
	
	int i,j;
	for(i=0;i<4;i++){
		scanf("%s",a[i]);
	}
	int cnt=0;
	for(j=0;j<strlen(a[1]);j++){
		if(a[0][j]==a[1][j]&&(a[0][j]>='A'&&a[1][j]<='G')&&cnt==0){
			weekday(a[0][j]);
			cnt++;
			continue;
		}
		if(a[0][j]==a[1][j]&&(a[0][j]>='0'&&a[1][j]<='9'||a[0][j]>='A'&&a[0][j]<='N')&&cnt==1){
			hour(a[0][j]);
			break;
		}	
	}
	for(j=0;j<strlen(a[2]);j++){
		if(a[2][j]==a[3][j]&&(a[2][j]>='a'&&a[2][j]<='z'||a[2][j]>='A'&&a[2][j]<='Z')){
			printf("%02d",j);
		}
	}
}
void weekday(char a){
	char* t=(char*)malloc(4);
	switch (a){
		case 'A':t="MON";break;
		case 'B':t="TUE";break;
		case 'C':t="WED";break;
		case 'D':t="THU";break;
		case 'E':t="FRI";break;
		case 'F':t="SAT";break;
		case 'G':t="SUN";break;
	}
	printf("%s ",t);
	
}
void hour(char a){
	char b[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
	int i;
	for(i=0;i<24;i++){
		if(a==b[i]){
			printf("%02d:",i);
		}
	}
}
