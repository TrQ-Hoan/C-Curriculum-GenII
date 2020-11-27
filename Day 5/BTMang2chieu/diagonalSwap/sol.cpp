// CPP Program to swap diagonal of a matrix
// source: g4g, edited by isptobi
#include <bits/stdc++.h> 
using namespace std; 
  
// size of square matrix 
#define N 1000 
  
// Function to swap diagonal of matrix 
void swapDiagonal(int matrix[][N], int n) { 
  for (int i = 0; i < n; i++) 
    swap(matrix[i][i], matrix[i][n - i - 1]); 
} 
  
// Driver Code 
int main() { 
  int matrix[N][N], n;
  cin >> n;
  for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
          cin >> matrix[i][j];
  swapDiagonal(matrix, n); 
  
  // Displaying modified matrix 
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++) 
      cout << matrix[i][j] << " "; 
    cout << endl; 
  } 
  
  return 0; 
} 
