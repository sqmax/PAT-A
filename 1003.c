#include<stdio.h>
#include<string.h>

int main(){
  int n,i;
  scanf("%d",&n);
  char a[n][100];
  for(i=0;i<n;i++){
    scanf("%s",a[i]);
  }
  for(i=0;i<n;i++){
    if(isTrue(a[i])){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}
int isTrue(char a[]){
    int i,len=strlen(a);
    int p_num=0,p_loc,t_num=0,t_loc,other=0;
    int flag=1;
    for(i=0;i<len;i++){
      if(a[i]=='P'){
        p_num++;
        p_loc=i;
      }else if(a[i]=='T'){
        t_num++;
        t_loc=i;
      }else if(a[i]!='A'){
        other++;
      }  
    }
    if(p_num!=1||t_num!=1||other!=0||t_loc-p_loc==1){
      flag=0;
    }
    int x=p_loc,y=t_loc-p_loc-1,z=len-t_loc-1;
    if((z-(y-1)*x)!=x){
      flag=0;
    }
    return flag;    
}				
