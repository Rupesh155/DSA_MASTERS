// PRACTICE QUESTION ...(1)...
#include <iostream>
using namespace std;
int ARR(int (*matrix)[3], int n, int m, int x){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == x){
                count ++;
            }
        }
    }
    return count;
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
    cout << "enter element : ";
    cin >> x;                     
    int result = ARR(matrix, 3, 3, x);
    cout << "This element is found at " << result <<" times in a matrix.";
    return 0;                
}