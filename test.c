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



//����N�׳� 5*4*3*2*1 0�Ľ׳˵���1
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


//����1!+2!+3!..n!
int getFactorialS1(int n) {
	int factorialSum = 0;
	for (int i = n; i != 0; i--)
	{	
		factorialSum += getFactorial(i);
	}
	return factorialSum;
}

//��������v�в��� ĳ��ֵ ����λ�� n��Ϊ���ҵķ�Χ �ӵ�һ������n��
//0 ����δ�ҵ�
int binsearch(int x, int v[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (v[i] == x)
			return i + 1;
	}
	return 0;
}