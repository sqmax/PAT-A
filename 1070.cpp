#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn=10010;
int a[maxn];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int sum=a[0];
	for(int i=1;i<n;i++){
		sum=(sum+a[i])/2;
	}
	printf("%d\n",sum);
	return 0;
 } 
