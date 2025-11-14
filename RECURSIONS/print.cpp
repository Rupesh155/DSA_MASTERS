#include <iostream>
using namespace std;
int print(int arr[], int n, int i) {
    if(i == 5){
        return 1;
    }
    cout << arr[i] << " ";
    print(arr, 5, i+1);
}
int main() {
    int arr[5] = {1,2,3,4,5};
    print(arr, 5, 0);
}