#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a, &b, &c);
	
	int x = a, y = b, z = c;
	
	if(a > b)
	{
		int i = a;
		a = b;
		b = i;
	}
	if(a > c)
	{
		int i = a;
		a = c;
		c = i;
	}
	if(b > c)
	{
		int i = b;
		b = c;
		c = i;
	}
	    printf("%d\n%d\n%d\n \n",a,b,c);
        printf("%d\n%d\n%d\n",x,y,z);
	return 0;
 } 
 
 
 
 
 
 
 
