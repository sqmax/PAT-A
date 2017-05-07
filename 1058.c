#include<stdio.h>
#define true 1
#define false 0 
#define MAXN 1000
#define MAXM 100
	typedef struct Question{
		int id,score,num,ansNum,ans[6],wrongNum;
	}Question; 
	int cmp(Question *q1,Question *q2){
		if(q1->wrongNum!=q2->wrongNum) return q1->wrongNum>q2->wrongNum;
		else return q1->id<q2->id;
	}
	void sort(Question *q,int m){//冒泡排序，wrongNum大到小,id从小到大 
		int i,j;
		Question t;
		for(i=0;i<m;i++){
			for(j=0;j<m-i-1;j++)
			if(!cmp(&q[j],&q[j+1])){
				t=q[j];
				q[j]=q[j+1];
				q[j+1]=t;
			}
		}
	}
	int main()
	{
		int stu[MAXN]={0};//代表m个学生的得分
		Question ques[MAXM];//代表n个问题
		int n,m;
		int i,j,k;
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++){//对m个问题的题目信息赋值 
			scanf("%d %d %d",&ques[i].score,&ques[i].num,&ques[i].ansNum);
			for(j=0;j<ques[i].ansNum;j++){
				char str[4];
				scanf("%s",str);
				ques[i].ans[j]=str[0]-'a';
			}
		ques[i].id=i+1;
		ques[i].wrongNum=0;	
		}
		for(i=0;i<n;i++){//n个学生的答题信息 
			for(j=0;j<m;j++){
				int ansNum=0,ans[6];
				char str[4];
				scanf("%s",str);
				ansNum=str[1]-'0';
				for(k=0;k<ansNum;k++){
					scanf("%s",str);
					ans[k]=str[0]-'a';
				}
				int flag=true;
				if(ansNum!=ques[j].ansNum){
					flag=false;
				}else{
					for(k=0;k<ansNum;k++){
						if(ans[k]!=ques[j].ans[k]){
							flag=false;break;
						}
					}
				}
				if(flag==true){
					stu[i]+=ques[j].score;
				}else{
					ques[j].wrongNum++;
				}
			}
		}
		for(i=0;i<n;i++){
			printf("%d\n",stu[i]);
		}
		sort(ques,m);
		if(ques[0].wrongNum==0){
			printf("Too simple");
		}else{
			int max=ques[0].wrongNum;
			printf("%d",max);
			for(i=0;i<m;i++){
				if(ques[i].wrongNum==max){
					printf(" %d",ques[i].id);
				}else{
					break;
				}
			}
		}
		return 0;
	}	
