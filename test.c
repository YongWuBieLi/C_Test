#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int	main() {
	int num = 0;
	int a = num % 2 == 0 ? 0 : 1;
	int b[3] = { 0,1,2 };
	printf("%d", getFactorialS1(3));
	//binsearch(int x, int v[], int n)
	
	printf("%d", binsearch(1, b, 2));

	return 0;
}



//计算N阶乘 5*4*3*2*1 0的阶乘等于1
int getFactorial(int n) {
	int factorial = 1;
	if (0 == n)
		return factorial;
	for (int i = n; i != 1; i--)
	{		
		factorial *= i;
	}
	return factorial;
}


//计算1!+2!+3!..n!
int getFactorialS1(int n) {
	int factorialSum = 0;
	for (int i = n; i != 0; i--)
	{	
		factorialSum += getFactorial(i);
	}
	return factorialSum;
}

//有序数组v中查找 某个值 返回位置 n作为查找的范围 从第一个到第n个
//0 代表未找到
int binsearch(int x, int v[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (v[i] == x)
			return i + 1;
	}
	return 0;
}