// SEARCH IN SORTED MATRIX BY STAIR CASE SEARCH APPROACH
// TIME COMPLEXITY :: O(n + m)
#include <iostream>
using namespace std;
pair<int, int> Search(int matrix[][4], int key, int n, int m)
{
    int row = 0, column = m-1;
    while(row <= n-1 && column >=0){
        if(matrix[row][column] == key){
            return make_pair(row, column);
        }else if(matrix[row][column] < key){
            row++;
        }else if(matrix[row][column] > key){
            column--;
        }
    }
}
int main(){
    int matrix[4][4];
    cout << "enter elements of a matrix : " << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> matrix[i][j];
        }
    }
    int key;
    cout << "enter targeted element : ";
    cin >> key;
    pair<int, int> result = Search(matrix, key, 4, 4);
    cout << "targeted element is found at row number " << result.first << " and column number " << result.second << endl;
    return 0;
}