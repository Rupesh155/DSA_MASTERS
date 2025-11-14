// SPIRAL MATRIX
#include <iostream>
using namespace std;
int spiralMatrix(int matrix[][4], int n, int m){
    int strow = 0, stcol = 0;
    int endrow = n-1, endcol = m-1;
    while(strow <= endrow && stcol <= endcol)
    {
    for(int j=stcol; j<=endcol; j++){
        cout << matrix[strow][j] << " ";
    } 

    for(int i = strow+1; i<=endrow; i++){
        cout << matrix[i][endcol] << " "; 
    }

    for(int j = endcol-1; j>=stcol; j--){
        if(strow == endrow){
            break;
        }
        cout << matrix[endrow][j] << " ";
    }

    for(int i = endrow-1; i>=strow+1; i--){
        if(stcol == endcol){
            break;
        }
        cout << matrix[i][stcol] << " ";
    }

    strow++, stcol++;
    endrow--, endcol--;
    }
    cout << endl;
}
int main(){
    int matrix[4][4];
    cout << "enter matrix elements : " << "\n";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "In spiral order : ";
    spiralMatrix(matrix, 4, 4);    
    return 0;                                   
}