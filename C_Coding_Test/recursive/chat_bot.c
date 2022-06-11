//17478
#include <stdio.h>

void jjik_make(int a)
{
	for (int n = 0; n < a; n++)
	{
		printf("____");
	}
}

void s_chat_bot(int n, int a)
{
	if (n == 0)
	{
		jjik_make(a - n);
		printf("\"재귀함수가 뭔가요?\"\n");
		jjik_make(a - n);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
	}
	else
	{
		jjik_make(a - n);
		printf("\"재귀함수가 뭔가요?\"\n");
		jjik_make(a - n);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		jjik_make(a - n);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		jjik_make(a - n);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		s_chat_bot(n - 1, a);
	}
	jjik_make(a - n);
	printf("라고 답변하였지.");
	if (a - n != 0)
		puts("");

}

int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	s_chat_bot(n, n);
	return 0;
}