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
		printf("\"����Լ��� ������?\"\n");
		jjik_make(a - n);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	}
	else
	{
		jjik_make(a - n);
		printf("\"����Լ��� ������?\"\n");
		jjik_make(a - n);
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		jjik_make(a - n);
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		jjik_make(a - n);
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		s_chat_bot(n - 1, a);
	}
	jjik_make(a - n);
	printf("��� �亯�Ͽ���.");
	if (a - n != 0)
		puts("");

}

int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	s_chat_bot(n, n);
	return 0;
}