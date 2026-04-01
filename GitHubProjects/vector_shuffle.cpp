#include <iostream>
#include <vector>

using namespace std;

 vector<int> shuffle(vector<int>& nums0, int n) {
    
    vector <int> ans0;
    for (int i=0; i<n; i++){
        ans0.push_back(nums0[i]);
        ans0.push_back(nums0[i+n]);
    }
    return ans0;
 }

 int main(){
    vector <int> nums= {2, 5, 1, 3, 4, 7};
    int n=3;
    vector <int> ans=shuffle(nums, n);

    for (int i=0; i<n*2; i++){
        cout << ans[i] << " ";
    }
 }