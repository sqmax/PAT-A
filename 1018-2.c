#include<stdio.h>

int compare(char a,char b);
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	char a,b;//甲，乙 
	int awin[3]={0};//a_b_win=0,a_c_win=0,a_j_win=0;//甲出b,c,j时赢的次数 
	int no=0;//平局 
	int bwin[3]={0};
	for(i=0;i<n;i++){
		getchar();
		scanf("%c %c",&a,&b);
		if(a=='B'&&compare(a,b)>0) awin[0]++;
		if(a=='C'&&compare(a,b)>0) awin[1]++;
		if(a=='J'&&compare(a,b)>0) awin[2]++;
		if(b=='B'&&compare(b,a)>0) bwin[0]++;
		if(b=='C'&&compare(b,a)>0) bwin[1]++;
		if(b=='J'&&compare(b,a)>0) bwin[2]++;
		if(a==b) no++; 
	}
	int awin_sum=awin[0]+awin[1]+awin[2];
	int bwin_sum=bwin[0]+bwin[1]+bwin[2];
	printf("%d %d %d\n",awin_sum,no,bwin_sum);
	printf("%d %d %d\n",bwin_sum,no,awin_sum);
	
	if(awin[0]>=awin[1]&&awin[0]>=awin[2]) printf("%c ",'B');
	else if(awin[1]>awin[0]&&awin[1>=awin[2]]) printf("%c ",'C');
	else printf("%c ",'J');	
	
	if(bwin[0]>=bwin[1]&&bwin[0]>=bwin[2]) printf("B");
	else if(bwin[1]>bwin[0]&&bwin[1]>=bwin[2]) printf("C");
	else printf("J");
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

