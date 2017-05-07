#include<stdio.h>

int compare(char a,char b);
int max(int a,int b,int c);
char fswitch(int x,int c,int j,int b);
char fswitch2(int x,int c,int j,int b);
int main()
{
	int n;
	scanf("%d",&n);
	char a[n][2];
	int i,awin=0,alost=0;
	int a_C_win=0,a_J_win=0,a_B_win=0;
	int a_C_lost=0,a_J_lost=0,a_B_lost=0;
	for(i=0;i<n;i++){
		getchar();
		scanf("%c %c",&a[i][0],&a[i][1]);
	}
//	for(i=0;i<n;i++){
//		printf("%c %c\n",a[i][0],a[i][1]);
//	}
	for(i=0;i<n;i++){
		if(a[i][0]=='C'){
			if(compare(a[i][0],a[i][1])>0){
				awin++;
				a_C_win++;		
			}
			if(compare(a[i][0],a[i][1])<0){
				alost++;
				a_C_lost++;
			}
		}
		if(a[i][0]=='J'){
			if(compare(a[i][0],a[i][1])>0){
				awin++;
				a_J_win++;
			}
			if(compare(a[i][0],a[i][1])<0){
				alost++;
				a_J_lost++;
			}
		}
		if(a[i][0]=='B'){
			if(compare(a[i][0],a[i][1])>0){
				awin++;
				a_B_win++;
			}
			if(compare(a[i][0],a[i][1])<0){
				alost++;
				a_B_lost++;
			
			}
		}
	}
	printf("%d %d %d\n",awin,n-awin-alost,alost);
	printf("%d %d %d\n",alost,n-awin-alost,awin);
	char ta,tb;
//	printf("test:%d %d %d %d\n",a_C_lost,a_J_lost,a_B_lost,max(a_C_lost,a_J_lost,a_B_lost));
	ta=fswitch(max(a_C_win,a_J_win,a_B_win),a_C_win,a_J_win,a_B_win);
	tb=fswitch2(max(a_C_lost,a_J_lost,a_B_lost),a_C_lost,a_J_lost,a_B_lost);
	printf("%c %c",ta,tb);
 } 
 
 int compare(char a,char b){
 	 int flag;
	 if(a=='C'){
 		if(b=='C') flag=0;
 		else if(b=='J') flag=1;
 		else flag=-1;
	 }else if(a=='J'){
	 	if(b=='C') flag=-1;
	 	else if(b=='J') flag=0;
	 	else flag=1;
	 }else{
	 	if(b=='C') flag=1;
	 	else if(b=='J') flag=-1;
	 	else flag=0;
	 }
	 return flag;
 }
 int max(int a,int b,int c){
 	int ret;
 	if(a>b){
 		if(a>c) ret=a;
 		else ret=c;
	 }else{
	 	if(b>c) ret=b;
	 	else ret=c;
	 }
	 return ret;
 }
char fswitch(int x,int c,int j,int b){
	char ta;
	if(x==b) ta='B';
	else if(x==c) ta='C';
	else ta='J';
	return ta;
}
char fswitch2(int x,int c,int j,int b){
	char ta;
	if(x==c) ta='B';
	else if(c==j) ta='C';
	else ta='J';
	return ta;
}
