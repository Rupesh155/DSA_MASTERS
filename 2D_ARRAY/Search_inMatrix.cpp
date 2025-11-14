#include <iostream>
using namespace std;
pair<int, int> Search(int matrix[][4], int target, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == target){
                return make_pair(i, j);
            }
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
    int target;
    cout << "enter targeted element : ";
    cin >> target;
    pair<int, int> result = Search(matrix, target, 4);
    cout << "targeted element is lie in the " << result.first << " row & " << result.second << " column." << endl;
    return 0;
}