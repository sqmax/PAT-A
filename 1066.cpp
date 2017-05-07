#include<cstdio>

const int maxn=510;
int g[maxn][maxn];

int main()
{
	int m,n,a,b,c;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&c);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&g[i][j]);
			if(g[i][j]>=a&&g[i][j]<=b){
				g[i][j]=c;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%03d",g[i][j]);
			if(j<n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
