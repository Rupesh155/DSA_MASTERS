// DIAGONAL SUM PROBLEM IN WHICH TIME COMPLEXITY IS O(N*2)
#include <iostream>
using namespace std;
int Diagonal(int matrix[][4], int n, int m){
    int Sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                Sum += matrix[i][j];
            }else if(j == n-i-1){
                Sum += matrix[i][j];
            }
        }
    }
    return Sum;
}
int main(){
    int matrix[4][4];
    cout << "enter matrix elements : " << "\n";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Diagonal sum : " << Diagonal(matrix, 4, 4);;    
    return 0;                                   
}