#include <iostream>
using namespace std;
bool isSorted(int arr[], int n, int i) {
    if(i == n-1) {
        return true;
    }
    if(arr[i]>arr[i+1]) {
        return false;
    }
    return isSorted(arr, n, i+1); 
}
int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int i=0;
    bool ans = isSorted(arr, n, i);
    if(ans == true){
        cout << "Array is sorted ..." << "\n";
    }else {
        cout << "Array is not sorted ..." << "\n";
    }
    return 0;
}