// CONTAINER WITH MOST WATER BY OPTIMAL APPROACH( 2 POINTER APPROACH ) 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxwater(vector<int> height, int n){
    int left=0, right=n-1, maxwater=0;
    while(left < right){
       int width = right - left;
       int ht = min(height[left], height[right]);
       int currwater = width * ht;
       maxwater =max(maxwater, currwater);
    //    if(height[left]<height[right]){
    //     left++;
    //    }else{
    //     right--;
    //    }
    height[left]<height[right]?left++:right--;
    }
    return maxwater;
}
int main(){
    int n;
    cout << "enter size of a vector : ";
    cin >> n;
    vector<int> height(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    int ans = maxwater(height, n);
    cout << "maximum amount of water container can store : " << ans << endl;
    return 0;
}