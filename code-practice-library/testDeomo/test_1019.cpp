#include <stdio.h>

#define URL "http://www.fishc.com"
#define NAME "南苑武装部"
#define BOSS "刘浩彬"
#define YEAR "2022"
#define MONTH "10"
#define DAY "17"  

int main()
{
	printf("%s成立于%d年%d月%d日\n", NAME, YEAR, MONTH, DAY);
	printf("%s是%s创立的\n", NAME, BOSS);
	printf("%s的域名是%s\n", NAME, URL);
	return 0;
}
