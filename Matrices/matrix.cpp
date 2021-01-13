#include "matrix.h"

template <class T>
Matrix<T>::Matrix(T[][3] matrix, int rows, int columns) {
	this->rows = rows;
	this->columns = columns;

	this->matrix = new T * [this->rows];

	for (int i = 0; i < this->rows; i++) {
		this->matrix[i] = new T[this->columns];

		for (int j = 0; j < this->columns; j++) {
			this->matrix[i][j] = matrix[i][j];
		}
	}
}

template <class T>
Matrix<T>::~Matrix() {
	for (int i = 0; i < this->rows; i++) {
		if (this->matrix[i]) {
			delete[] this->matrix[i];
			this->matrix[i] = NULL;
		}
	}

	delete[] this->matrix;
	this->matrix = NULL;
}

template <class T>
int Matrix<T>::getRows() const {
	return rows;
}

template <class T>
int Matrix<T>::getColumns() const {
	return columns;
}

template <class T>
T** Matrix<T>::getMatrix() const {
	return matrix;
}

template <class T>
T Matrix<T>::getValueAt(int x, int y) const {
	return matrix[x][y];
}

template <class T>
void Matrix<T>::print() {
	if (!matrix) {
		cout << "The matrix is empty!" << endl;
	}
	else {
		for (int i = 0; i < this->rows; i++) {
			for (int j = 0; j < this->columns - 1; j++) {
				cout << matrix[i][j] << " ";
			}

			cout << matrix[i][this->columns - 1] << endl;
		}
	}
}

//Matrix<T>::