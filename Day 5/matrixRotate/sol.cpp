// code by g4g modified by isptobi
// C++ program for left 
// rotation of matrix by 90 degree 
// without using extra space 
#include <bits/stdc++.h> 
using namespace std; 
#define R 1000 
#define C 1000 
  
// After transpose we swap 
// elements of column 
// one by one for finding left 
// rotation of matrix 
// by 90 degree 
void reverseColumns(int arr[R][C], int n) 
{ 
    for (int i = 0; i < n; i++) 
        for (int j = 0, k = n - 1; 
             j < k; j++, k--) 
            swap( 
                arr[j][i], arr[k][i]); 
} 
  
// Function for do transpose of matrix 
void transpose(int arr[R][C], int n) 
{ 
    for (int i = 0; i < n; i++) 
        for (int j = i; j < n; j++) 
            swap(arr[i][j], arr[j][i]); 
} 
  
// Function for print matrix 
void printMatrix(int arr[R][C], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << arr[i][j] << " "; 
        cout << '\n'; 
    } 
} 
  
// Function to anticlockwise 
// rotate matrix by 90 degree 
void rotate90(int arr[R][C], int n) 
{ 
    transpose(arr, n); 
    reverseColumns(arr, n); 
} 
  
// Driven code 
int main() 
{ 
    int arr[R][C], n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    rotate90(arr, n); 
    printMatrix(arr, n); 
    return 0; 
} 
