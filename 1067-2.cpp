#include<cstdio>
#include<cstring>

char s[25],s1[100];//��Ŀ˵��ȷ�����볤�Ȳ�����20��û��˵��������벻�������������鿪���
int N;
int main()
{
	scanf("%s%d", s, &N);
	getchar();
	int count = 0;
	while (count < N)
	{
		gets(s1);//�ύʱ��Ϊgets���ɣ�����ע������Ŀ˵û�пո����û��˵û�пհ׷�
		if (strcmp(s1, "#") == 0)
		{
			return 0;
		}
		else if (strcmp(s1,s) == 0)
		{
			printf("Welcome in"); return 0;
		}
		else
		{
			printf("Wrong password: %s\n", s1);
			//count++;����ط���Ҳ��
		}
		count++;
	}
	printf("Account locked\n");
	return 0;
}
