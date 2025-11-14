// PRACTICE QUESTION ...(2)...
#include <iostream>
using namespace std;
int SUM_ROW(int (*matrix)[3], int n, int m, int i){
    int SUM = 0;
        for(int j=0; j<m; j++){
            SUM = SUM + matrix[i][j];
        }
        return SUM;
}
int main(){
    int matrix[3][3];
    cout << "enter elements of a matrix : " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrix[i][j];
        }
    }
    int x;
    cout << "Enter row : ";
    cin >> x;
    cout << "Sum of a second row is : " << SUM_ROW(matrix, 3, 3, x) << endl;
    return 0;
}