// PRINT Nth FABONACCI NUMBER ...
#include <iostream>
using namespace std;
int Fabonacci(int n) {
    if( n==0 || n==1 ) {
        return n;
    }
    return Fabonacci(n-1) + Fabonacci(n-2);
}
int main() {
    int n;
    cout << "Enter position = ";
    cin >> n;
    int ans = Fabonacci(n);
    cout << "The element in this position is : " << ans << "\n";
    return 0;
}