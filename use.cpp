#include "my.h"
#include "std_lib_facilities.h"
int foo;

int main()
{
	foo=7;
	print_foo();
	print(99);

	int x=7;
	int y=9;
	const int cx=7;
	const int cy=9;
	double dx=7.7;
	double dy=9.9;
	
	//swap_v(x,y);
	//cout<<"x: "<<x<<" y: "<<y<<endl;

	//swap_r(cx,cy);
	//cout<<"x: "<<x<<" y: "<<y<<endl;

	//swap_cr(x,y);							//konstanra nem irhato swap fuggveny
	//cout<<"x: "<<x<<" y: "<<y<<endl;

	return 0;
}