// SUM OF N NATURAL NUMBER ...
#include <iostream>
using namespace std;
int Sum(int n) {
    if(n==0){
        return 0;
    }
    return n + Sum(n-1);
}
int main() {
    int n;
    cout << "Enter value = ";
    cin >> n;
    int ans = Sum(n);
    cout << "Sum of " << n << " natural number is : " << ans;
    return 0;
}