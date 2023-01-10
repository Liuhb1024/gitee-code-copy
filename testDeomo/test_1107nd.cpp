//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	system(" color 0c");//设计程序颜色 
//	printf("笑死我了笑死我了笑死我了笑死我了！！！\n");//打印文字 
//	
//	float x,y,a;//定义变量x,y,a 
//	
//	for(y=1.5f;y>-1;y-=0.1f)
//	{
//		for(x=-1.5f;x<1.5f;x+=.05f){
//			a=x*x+y*y-1;
//			putchar(a*a*a-x*x*y*y*y<0.0f?'x':' ');
//		}
//		
//		Sleep(150);//停顿函数（1.5秒钟） 
//		putchar('\n'); //换行 
//	}
//	
//	return 0;
//}

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>
 
float f(float x, float y, float z) {
float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
 
float h(float x, float z) {
  for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
if (f(x, y, z) <= 0.0f)
return y;
return 0.0f;
}
 
int main() { system(" color 0c");
HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
_TCHAR buffer[25][80] = { _T(' ') };
_TCHAR ramp[] = _T(".:-=+*#%@");
 
for (float t = 0.0f;; t += 0.1f) {
	int sy = 0;
	float s = sinf(t);
	float a = s * s * s * s * 0.2f;
	for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
	_TCHAR* p = &buffer[sy++][0];
	float tz = z * (1.2f - a);
	for (float x = -1.5f; x < 1.5f; x += 0.05f) {
	float tx = x * (1.2f + a);
	float v = f(tx, 0.0f, tz);
	if (v <= 0.0f) {
	float y0 = h(tx, tz);
	float ny = 0.01f;
	float nx = h(tx + ny, tz) - y0;
	float nz = h(tx, tz + ny) - y0;
	float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
	float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
	*p++ = ramp[(int)(d * 5.0f)];
}
else
	*p++ = ' ';
}
}
 
	for (sy = 0; sy < 25; sy++) {
	COORD coord = { 0, sy };
	SetConsoleCursorPosition(o, coord);
	WriteConsole(o, buffer[sy], 79, NULL, 0);
}
Sleep(33);
}
}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <conio.h>
//#define I 20
//#define R 350
 
//int main()
//{
//	system("mode con cols=80  lines=80");
//	system("color F4");
//	int i, j, e;
//	int a;
//	long time;
//	for (i = 1, a = I; i < I / 2; i++, a--)
//	{
//		for (j = (int)(I - sqrt(I*I - (a - i)*(a - i))); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
//			printf("\3");
//		for (j = (int)
//			(2 * (I - sqrt(I*I - (a - i)*(a - i)))); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
//			printf("\3");
//		printf("\n");
//	}
//	for (i = 1; i < 49;i++)
//	{
//		if (i == 20)
//		{
//			printf("                 笑死我了                     ");
//			i += 15;
//		}
//		printf("\3");
//	}
//	printf("\n");
//	for (i = 1; i <= R / 2; i++)
//	{
//		if (i % 2 || i % 3)
//			continue;
//		for (j = (int)(R - sqrt(R*R - i * i)); j > 0; j--)
//			printf(" ");
//		for (e = 1; e <= 2 * (sqrt(R*R - i * i) - (R - 2 * I)); e++)
//			printf("\3");
//		printf("\n");
//	}
// 
//	system("pause");
//}
//

















