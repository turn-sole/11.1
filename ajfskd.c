#include<stdio.h>
//�ݹ�ʵ��n��k�η�
//int print(int n, int k)
//{
//	for (int i = 1; i <= k; i++)
//	{
//		if (i < k)
//			return n * print(n, k - i);
//		else 
//			return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	int ret = print(n, k);
//	printf("%d", ret);
//	return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//		return n % 10 + DigitSum(n / 10) % 10;
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int strlen_c(char i[], int sz)
//{
//	int a = 0;
//	while (i[a] != '\0')
//	{
//		a++;
//	}
//	return a;
//}
//int strlen_c(char i[], int sz)
//{
//	if (*i == '\0')
//		return 0;
//	else
//		return 1 + strlen_c(i+1, sz);
//}
//int main()
//{
//	char i[20] = { 0 };
//	scanf_s("%s", i, 20);
//	int sz = sizeof(i) / sizeof(i[0]);
//	int ret = strlen_c(i, sz);
//	printf("%d", ret);
//}
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9)
//		print(n/10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
void Swap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d  %d", &a, &b);
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}