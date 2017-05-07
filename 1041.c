#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n][2];
	char id[n][15];
	int i,j;
	for(i=0;i<n;i++){
		getchar();
		scanf("%s",id[i]);
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	int m,s[m];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&s[i]);
	}
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			if(s[j]==a[i][0]){
				printf("%s %d\n",id[i],a[i][1]);break;
			}	
		}	
	}
	return 0;
}

//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	long long a[n][3];
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<3;j++){
//			scanf("%lld",&a[i][j]);
//		}
//	}
//	int m,s[m];
//	scanf("%d",&m);
//	for(i=0;i<m;i++){
//		scanf("%d",&s[i]);
//	}
//	for(j=0;j<m;j++){
//		for(i=0;i<n;i++){
//			if(s[j]==a[i][1]){
//				printf("%lld %lld\n",a[i][0],a[i][2]);break;
//			}	
//		}	
//	}
//	return 0;
//}
