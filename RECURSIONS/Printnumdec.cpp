// PRINT NUMBER IN DECREASING ORDER USING RECURSION...
#include <iostream>
using namespace std;
void Print(int n) {
    cout << n << " ";
    if(n==1){
        return ;
    }
    Print(n-1);
}
int main() {
    int n;
    cout << "Enter value = ";
    cin >> n;
    cout << "In decreasing order : ";
    Print(n);
    return 0;
}