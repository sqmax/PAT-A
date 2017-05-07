#include<stdio.h>

typedef struct{
	int id;
	int d;//德分 
	int c;//才分 
	int total_score;
	int class;//等级 
}Student;
void sort(Student stu[],int n);
int cmp(Student s1,Student s2);
int main(){
	int n,l,h;
	scanf("%d %d %d",&n,&l,&h);
	Student stu[n];
	int i,j,cnt=0;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].id,&stu[i].d,&stu[i].c);
		stu[i].total_score=stu[i].d+stu[i].c;
		if(stu[i].d>=l&&stu[i].c>=l){
			cnt++;
			if(stu[i].d>=h&&stu[i].c>=h){
				stu[i].class=1;
			}else if(stu[i].d>=h&&stu[i].c<h){
				stu[i].class=2;
			}else if(stu[i].d<h&&stu[i].c<h&&stu[i].d>=stu[i].c){
				stu[i].class=3;
			}else{
				stu[i].class=4;	
			}
		}else{
			stu[i].class=5;
		}
	}
	printf("%d\n",cnt);
	sort(stu,n);
	for(i=0;i<n;i++){
		if(stu[i].class<5)
		printf("%d %d %d\n",stu[i].id,stu[i].d,stu[i].c);
	}
	return 0;
} 
//void sort(Student stu[],int n){//冒泡排序 
//	int i,j;
//	Student t;
//	for(i=0;i<n;i++){
//		for(j=0;j<n-i-1;j++){
//			if(!cmp(stu[j],stu[j+1])){
//				t=stu[j];
//				stu[j]=stu[j+1];
//				stu[j+1]=t;
//			}
//		}
//	}
//}
void sort(Student stu[],int n){//选择排序 
	int i,j,min;
	Student temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(!cmp(stu[min],stu[j])) min=j;
		}
		temp=stu[i];
		stu[i]=stu[min];
		stu[min]=temp;
	}
}
int cmp(Student s1,Student s2){
	if(s1.class!=s2.class){
		return s1.class<s2.class;
	}else if(s1.total_score!=s2.total_score){
		return s1.total_score>s2.total_score;
	}else if(s1.d!=s2.d){
		return s1.d>s2.d;
	}else{
		return s1.id<s2.id;
	}
	
}
