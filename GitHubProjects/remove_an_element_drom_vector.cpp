#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k=0, j=nums.size()-1, i=0, temp;
    bool found=false;
    while (i<=j){
        if (nums[i]==val){
           if (nums[j]!=val){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            else if (nums[j]==val){ 
                j--;
                }
        }
        else if (nums[i]!=val){
            i++;
        }
    };

    for (int i=0; i<nums.size(); i++){
        if (nums[i]==val){
            if (found==false){
                found=true;
                k=i;
            }
        }
        else {
            k=nums.size();
        }
    }
        return k;
}

int main(){
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=2;
    int k=removeElement(nums, val);

    for (int i=0; i<k; i++){
        cout << nums[i] << " ";
    }



    return 0;
}