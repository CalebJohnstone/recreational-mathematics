#include <iostream>

using namespace std;

int main()
{
	int rows = 2;
	int cols = 3;

    int matrix[rows][cols] = {{1,2,3}, 
							  {4,5,6}};
    
	for(int currentRow = rows-1; currentRow >= 0; --currentRow){
    	for(int currentCol = cols-1; currentCol >= 0; --currentCol){
        	cout << "matrix[" << currentRow << ", " << currentCol << "]: " << matrix[currentRow][currentCol] << endl;
    	}
	}

    return 0;
}
