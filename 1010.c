#include<stdio.h>
#include<stdlib.h>
typedef struct PolyNode * Polynomial;
struct PolyNode{
	int coef;
	int expon;
	Polynomial link;
};
Polynomial readPoly();
void attach(int c,int e,Polynomial* pRear);
Polynomial polyDifferentiation(Polynomial p);
void printPoly(Polynomial p);

int main()
{
	Polynomial p;
	p=readPoly();
	p=polyDifferentiation(p);
	printPoly(p);
	
	return 0;
}
Polynomial readPoly(){
	Polynomial p,rear,t;
	int c,e;
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	rear=p;
	while(scanf("%d %d",&c,&e)!=EOF){
		attach(c,e,&rear);
	}
	t=p;p=p->link;free(t);
	return p;
} 
void attach(int c,int e,Polynomial* pRear){
	Polynomial p;
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	p->coef=c;
	p->expon=e;
	p->link=NULL;
	(*pRear)->link=p;
	*pRear=p;
}
Polynomial polyDifferentiation(Polynomial p){
	Polynomial p1,p2;
	p2=p;p1=NULL;
	while(p2&&p2->expon){
		p2->coef*=p2->expon;
		p2->expon--;
		p1=p2;
		p2=p2->link;
	}
	if(p2){
		if(p1){
			free(p2);
			p1->link=NULL;
		}else{
			p2->coef=0;
		}
	}
	return p;
}
void printPoly(Polynomial p){
	int flag=0;
	while(p){
		if(!flag){
			flag=1;
		}else{
			printf(" ");
		}
		printf("%d %d",p->coef,p->expon);
		p=p->link;
	}
}
