#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int smallestEqual(vector<int>& nums) {
        int min_in=-1;
        for (int i=0; i<nums.size(); i++){
            int in= i%10;
            if (in==nums[i]){
               min_in=i;
               return min_in;
            }
        }
        return min_in;
    }

int main(){
vector <int> nums= {0,1,2};

int min=smallestEqual(nums);

cout << min;
    return 0;
}