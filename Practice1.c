#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//题目1：从键盘输入两个整数，计算这两个数差的绝对值
//int main()
//{
//	int a, b;
//	printf("请输入这两个数,用逗号隔开：");
//	scanf("%d,%d", &a,&b);
//	printf("%d",abs(a-b));
//	return 0;
//}
//题目2：编写一个C语言程序，实现如下菜单
//*******************
//欢迎使用工资管理系统
//[1] 输入工资
//[2] 修改工资
//[3] 删除工资
//[4] 退出系统
//********************
//int main()
//{
//	printf("*******************\n欢迎使用工资管理系统\n[1] 输入工资\n[2] 修改工资\n[3] 删除工资\n[4] 退出系统\n********************");
//	return 0;
//}
//题目3：从键盘输入两个整数到变量a和b中，然后交换a和b的值并输出
//int main() 
//{
//	int a,b;
//	printf("请输入两个整数a和b，用逗号隔开：格式为a=xx,b=xx\n");
//	scanf("a=%d,b=%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后的值为：a = %d, b = %d\n", a, b);
//	return 0;
//}
//题目4：从键盘输入直角三角形的两条直角边的长度，求斜边长度和三角形面积，输出结果保留两位小数
//#include<math.h>
//int main() 
//{
//	float a, b;
//	printf("请输入直角三角形两条直角边长度，用,隔开\n");
//	scanf("%f,%f", &a, &b);
//	float c = sqrt(a * a + b * b);
//	float area = 0.5 * (a * b);
//	printf("该三角形斜边为%.2f,面积为%.2f", c, area);
//	return 0;
//}
////题目5：从键盘输入两个实数x和y,求x的y次方+y的绝对值的值
//int main()
//{
//	double x, y;
//	double result = 1;
//	printf("请输入两个实数x和y，用逗号隔开：\n");
//	scanf("%lf,%lf", &x, &y);
//	if (y>0)
//	{
//		for (int i = 0; i < y; i++)
//		{
//			result *= x;
//		}
//		printf("结果为：%lf", (result+y));
//	}
//	else if (y < 0)
//	{
//		for (int i = 0; i < (- y); i++)
//		{
//			result *= x;
//		}
//		printf("结果为：%lf", ((1/result) -y));
//	}
//	else
//	{
//		printf("结果为1");
//	}
//	return 0;
//}
//题目6：从键盘输入圆柱体的半径和高，求圆柱体的体积和表面积
//#define pi 3.1415926
//int main()
//{
//	double r, h;
//	printf("请输入圆柱体半径和高：\n");
//	scanf("%lf,%lf", &r, &h);
//	printf("体积为%lf", pi * r * r * h);
//	printf("表面积为%lf", 2*pi * r * h+ pi * r * r);
//	return 0;
//}