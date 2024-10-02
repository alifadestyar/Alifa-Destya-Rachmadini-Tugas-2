#include <stdio.h>

int main()
{
	float d,pi,r,v;
	
	d = 15;
	pi = 3.14;
	r = d/2;
	v = pi*r*r*r*4/3;
	printf("Diketahui diameter bola adalah 15 cm, maka volumenya adalah %.2f", v);
	return 0;
}
