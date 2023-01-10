int main()
{
	int a, b = 0;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);

	printf("a是b的%f%%。\n",(a / b) * 100);
		
}
