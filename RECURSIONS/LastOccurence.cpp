#include <iostream>
using namespace std;
int LastOccurence(vector<int> vec, int n, int i, int target) {
    if(i == n) {
        return -1;
    }
    int idx = LastOccurence( vec, n, i+1, target);
    if(idx == -1 && vec[i] == target) {
        return i;
    }
    return idx;
}
int main() {
    int n, i=0, target;
    cout << "Enter size of vector : ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements of vector : ";
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    cout << "Enter target :: ";
    cin >> target;
    int ans = LastOccurence(vec, n, i, target);
    cout << "Targeted element is found at an index : " << ans << "\n";
    return 0;
}