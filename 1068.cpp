#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn=10010;
const int maxc=1<<24;
int g[maxn][maxn];
int color_cnt[maxc];
int m,n,tol;
bool isTypical(int i,int j){
	bool flag=false;
	int t=g[i][j];
	int l=g[i][j-1],r=g[i][j+1],u=g[i-1][j],d=g[i+1][j];
	int lu=g[i-1][j-1],ru=g[i-1][j+1],ld=g[i+1][j-1],rd=g[i+1][j+1];
	int a1=abs(t-l),a2=abs(t-r),a3=abs(t-ru),a4=abs(t-rd);
	int a5=abs(t-lu),a6=abs(t-ru),a7=abs(t-ld),a8=abs(t-rd);
	if(a1>tol&&a2>tol&&a3>tol&&a4>tol&&a5>tol&&a6>tol&&a7>tol&&a8>tol){
		flag=true;
	}
	return flag;
}
int main()
{
	scanf("%d%d%d",&m,&n,&tol);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&g[i][j]);
			color_cnt[g[i][j]]++;
		}
	}
	int cnt=0;
	int ansI,ansJ;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(color_cnt[g[i][j]]==1&&isTypical(i,j)==true){			
				ansI=i;
				ansJ=j;
				cnt++;
			}
		}
	}
	if(cnt==0) printf("Not Exist\n");
	else if(cnt>1) printf("Not Unique\n");
	else{
		printf("(%d, %d): %d\n",ansJ,ansI,g[ansI][ansJ]);
	}
}
