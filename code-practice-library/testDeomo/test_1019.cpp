#include <stdio.h>

#define URL "http://www.fishc.com"
#define NAME "��Է��װ��"
#define BOSS "���Ʊ�"
#define YEAR "2022"
#define MONTH "10"
#define DAY "17"  

int main()
{
	printf("%s������%d��%d��%d��\n", NAME, YEAR, MONTH, DAY);
	printf("%s��%s������\n", NAME, BOSS);
	printf("%s��������%s\n", NAME, URL);
	return 0;
}
