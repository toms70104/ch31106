#include <stdio.h> 
#include <stdlib.h> 

int gcd(int n1, int n2);		//程そ计
int lcm(int n1, int n2);		//程そ计

int main(void)
{
	int num1;
	int num2;

	printf("Enter two integers,and their LCM will show on the monitor:");
	scanf_s("%d %d", &num1, &num2);
	
	printf("Their LCM is %d.\n\n", lcm(num1, num2));
	system("pause");
	return 0;
}

/*―程そ计*/
int gcd(int n1, int n2)
{
	int a;

	while (n2!=0)
	{
		a = n1%n2;
		n1 = n2;
		n2 = a;
	}
	return n1;
}

/*―程そ计*/
int lcm(int n1, int n2)
{
	int lcm = (n1*n2) / gcd(n1,n2);
	return lcm;
}


