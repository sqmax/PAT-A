#include<stdio.h>
#include<string.h>

void converse(char a[]);
int main()
{
	char a[101],b[101],c[101];
	scanf("%s %s",a,b);
	converse(a);                                                 
	converse(b);
	//printf("%s,%s\n",a,b);
	int len1=strlen(a),len2=strlen(b);
	int i;
	if(len1<len2){
		for(i=len1;i<len2;i++){
			a[i]='0';
		}
		a[i]='\0';
	}else{
		for(i=len2;i<len1;i++){
			b[i]='0';
		}
		b[i]='\0';
	}
	for(i=0;i<len1||i<len2;i++){
		
		if((i+1)%2!=0){
			int t=(b[i]-'0'+a[i]-'0')%13;
			if(t==10) c[i]='J';
			else if(t==11) c[i]='Q';
			else if(t==12) c[i]='K';
			else c[i]=t+'0';
		}else{
			int t;
			t=b[i]-a[i];
			if(t<0) t+=10;
			c[i]=t+'0';
		}
	}
	c[i]='\0';
	converse(c);
	puts(c);
	
	return 0;
}
void converse(char a[]){
	int len=strlen(a);
	int i;
	for(i=0;i<len/2;i++){
		char t=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=t;
	}
}
