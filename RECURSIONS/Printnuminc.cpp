// PRINT NUMBER IN INCREASING ORDER USING RECURSION...
#include <iostream>
using namespace std;
void Print(int n) {
    if(n==0){
        return ;
    }
    Print(n-1);
    cout << n << " ";
}
int main() {
    int n;
    cout << "Enter value = ";
    cin >> n;
    cout << "In increasing order : ";
    Print(n);
    return 0;
}