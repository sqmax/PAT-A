#include<cstdio>
#include<cstring>

char s[25],s1[100];//题目说正确的密码长度不超过20但没有说错误的密码不超过！！！数组开大点
int N;
int main()
{
	scanf("%s%d", s, &N);
	getchar();
	int count = 0;
	while (count < N)
	{
		gets(s1);//提交时改为gets即可，这里注意下题目说没有空格符但没有说没有空白符
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
			//count++;这个地方加也行
		}
		count++;
	}
	printf("Account locked\n");
	return 0;
}
