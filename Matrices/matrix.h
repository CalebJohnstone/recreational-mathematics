#ifndef  MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
class Matrix {
private:
	int rows;
	int columns;
	T** matrix;

public:
	Matrix(T[][3] matrix, int rows, int columns);
	~Matrix();
	int getRows() const;
	int getColumns() const;
	T** getMatrix() const;
	T getValueAt(int x, int y) const;
	void print();
};

#endif
