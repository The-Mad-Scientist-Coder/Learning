#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool isthere;
        vector<int> res;
        int i2=0, j2=0;
        for (int i=0; i<nums1.size(); i++){
            isthere=false;
            for (int j=0; j<nums2.size(); j++){
                if (nums1[i]==nums2[j]){
                    if(res.size()==0){
                            res.push_back(nums2[j]);
                            isthere=true;
                        }
                    else {
                        for (int i3=0; i3<res.size(); i3++){
                        if (nums1[i]==res[i3]){
                            isthere=true;
                            break;
                            }
                        }
                    }
                    if (isthere==false){
                        res.push_back(nums1[i]);
                        }
                }
            }
        }

        return res;
    }

int main(){
vector <int> nums1={4,9,5};
vector<int> nums2={9,4,9,8,4};

vector<int> res=intersection(nums1, nums2);

for (int i=0; i<res.size(); i++){
    cout << res[i] << " ";
}
    return 0;
}