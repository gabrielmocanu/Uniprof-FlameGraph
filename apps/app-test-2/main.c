#include <stdio.h>
#ifdef __Unikraft__
#include <uk/config.h>
#endif /* __Unikraft__ */

int function_3(int a)
{
	int i;
	int ret = 0;
	for(i = 0; i < 50000; i++) {
		ret = a;
		printf("aux = %d\n",ret);
	}	
	return ret;
}


int function_4(int a)
{
	int i = 0;
	int ret = 0;	
	for(i = 0; i < 50000; i++) {
		ret = a;
		printf("aux = %d\n",ret);
	}
	return ret;
}


int function_5(int a,int b)
{
	int i;
	int ret = 0;	
	for(i = 0; i < 100000; i++) {
		ret = a + b;
		printf("aux = %d\n",ret);
	}

	return ret;
}

int function_2(int a,int b)
{
	int ret = 0;
	ret = function_4(b);
	ret = function_5(a,b);
	return ret;
}

int function_1(int a,int b)
{

	int ret = 0;	
	ret = function_3(a);
	return ret;
}

int main(int argc, char *argv[])
{
	int aux = 0;

	aux = function_1(aux, 1);
	aux = function_2(aux, 2);
}
