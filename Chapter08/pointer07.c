#include <stdio.h>
 
void fun(int x)
{
	static int a = x;	
	a++;
	printf("a= %d \n", a);
}

int main()
{
	for (int i = 10; i > 0; i--)
	{
		fun(i);
	}
	//system("pause");
	return 0;
}
