#include<stdio.h>
#include<string.h>
#define N 100001
int main()
{
	char a[N];
	scanf("%s",a);
	int i,j,k,cnt=0;
	int len=strlen(a);
	for(i=0;i<len;i++){
		int flag=0;
		if(a[i]=='P'){
			for(j=i+1;j<len;j++){
				if(a[j]=='A'){
					for(k=j+1;k<len;k++){
						if(a[k]=='T'){
							cnt++;
							flag=1;
							break;
						}
					}
					if(flag==1) break;
				}
			}
		}
	}
	printf("%d\n",cnt%1000000007);
	return 0;
 } 
