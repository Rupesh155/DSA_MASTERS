// FACTORIAL USING RECURSION...
#include <iostream>
using namespace std;
int factorial(int n) {
    if(n==0) {
        return 1;
    }
    return n * factorial(n-1);
}
int main() {
    int n;
    cout << "Enter value = ";
    cin >> n;
    int ans = factorial(n); 
    cout << "factorial of " << n << " is : " << ans << "\n";
    return 0;
}