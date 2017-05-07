#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
   PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}
int FactorialSum( List L )
{   
    int s,j,n=0;  
    List m;
    for(m=L;m->Next!=NULL;m=m->Next)
        {
        	for(s=1,j=1;j<=m->Data;j++)
        	s*=j;
        	n+=s;
        }
    s=1;
    for(j=1;j<=m->Data;j++)
    {
    	s*=j;	
	}
    
    n=n+s;
    return n;
}
