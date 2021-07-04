#include <stdio.h>
#ifdef __Unikraft__
#include <uk/config.h>
#endif /* __Unikraft__ */

int function_3(int a)
{
	int ret = 0;
	ret = a;
	printf("aux = %d\n",ret);	
	return ret;
}

int function_2(int a,int b)
{
	int ret = 0;
	ret = a + b;
	printf("aux = %d\n",ret);	
	return ret;
}

int function_1(int a,int b)
{
	int ret = 0;
	ret = a - b;
	printf("aux = %d\n",ret);		
	return ret;
}

int main(int argc, char *argv[])
{
	int aux = 100;
	int i;

	for(i = 0; i < 50000; i++){
		aux = function_1(aux, 1);
	}

	for(i = 0; i < 50000; i++){
		aux = function_2(aux, 2);
	}
	
	for(i = 0; i < 50000; i++){
		aux = function_3(aux);
	}
}
