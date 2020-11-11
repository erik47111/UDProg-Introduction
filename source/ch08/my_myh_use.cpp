extern int foo;
void print_foo();
void print(int);

//--------------------------------------------------------


#include "my.h"
#include "std_lib_facilities.h"

void print_foo()
{
	cout << foo << endl;
}

void print(int i)
{
	cout << i << endl;
}




//--------------------------------------------------------
#include "my.h"

int foo;

int main()
{
	
	foo = 7;	
	print_foo();
	print(99);

	return 0;
}
