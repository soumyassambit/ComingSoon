#include "add.h"

int main()
{
	PRINT_LOG("%s","Please enter 2 numbers");
	int a , b ;
	cin>>a>>b;
	PRINT_LOG("The number is %d",test(a,b));
	return 0;
}
