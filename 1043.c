#include<stdio.h>
#include<string.h>

int main()
{
	char in[10000];
	gets(in);
	int i;
	int P_cnt=0,A_cnt=0,T_cnt=0,e_cnt=0,s_cnt=0,t_cnt=0;
	for(i=0;i<strlen(in);i++){
		if(in[i]=='P'){
			P_cnt++;
		}else if(in[i]=='A'){
			A_cnt++;
		}else if(in[i]=='T'){
			T_cnt++;
		}else if(in[i]=='e'){
			e_cnt++;
		}else if(in[i]=='s'){
			s_cnt++;
		}else if(in[i]=='t'){
			t_cnt++;
		}
	}
	int sum;
	while((sum=P_cnt+A_cnt+T_cnt+e_cnt+s_cnt+t_cnt)){
		if(P_cnt){
			printf("P");
			P_cnt--;
		}
		if(A_cnt){
			printf("A");
			A_cnt--;
		}
		if(T_cnt){
			printf("T");
			T_cnt--;
		}
		if(e_cnt){
			printf("e");
			e_cnt--;
		}
		if(s_cnt){
			printf("s");
			s_cnt--;
		}
		if(t_cnt){
			printf("t");
			t_cnt--;
		}
	}
	return 0;
}
