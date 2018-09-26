#include <iostream>
#include "Vector.h"

int main()
{
	Vector v1(1, 1, 1);
	Vector v2(1, 1, 1);

	/*v1.Zero2();
	v2.Zero();
	if (v1 == v2)printf("Zero(void) and Zero2(Vector) work the same way. \n");*/ 

	v1 += v2;

	if (v1 == Vector(2, 2, 2) && v2 != v1) printf("Operator == and !=: OK!");

	system("pause");
	return 0;
}