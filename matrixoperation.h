#include<bits/stdc++.h>

#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H
#include <vector>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

vector<vector<int>> createMatrixWithInput(int rows, int cols) ;
vector<vector<int>> addMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2);
vector<vector<int>> subtractMatrices(const vector<std::vector<int>>& matrix1, const vector<vector<int>>& matrix2);
vector<std::vector<int>> multiplyMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2);

vector<std::vector<double>> createRowReductionMatrix(int var);
vector<double> rowReductionSolve(vector<vector<double>>& augmentedMatrix);
void displayRowReductionSolve(const vector<double>& solution);

vector<vector<double>> createMatrixForInverseOrDet(int var);
vector<vector<double>> findMatrixInverse(vector<vector<double>>& matrix);

double findMatrixDeterminant(vector<std::vector<double>>& matrix);

void displayMatrix(const vector<vector<int>>& matrix) ;


#endif // MATRIX_OPERATIONS_H