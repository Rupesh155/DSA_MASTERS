// PRACTICE QUESTION ...(3)...
#include <iostream>
using namespace std;
int TRANSPOSE(int (*matrix)[3], int n, int m){
    cout << "Transpose of a Matrix is : " << endl;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int matrix[3][3];
    cout << "enter elements of a matrix : " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrix[i][j];
        }
    }
    TRANSPOSE(matrix, 3, 3);
    return 0;
}