#include "matrix.h"

int main() {
	double array[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

	Matrix<double> A(array, 3, 3);

	A.print();

	return 0;
}