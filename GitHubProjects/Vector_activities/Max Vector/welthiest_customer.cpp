#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int sum=0, maxw=0;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                sum+=accounts[i][j];
            }
            if(sum>maxw){
                maxw=sum;
            }
            sum=0;
        }
        return maxw;
    }

int main(){
vector <vector <int>> accounts={{1,2,3},{3,2,1}};

int maxw=maximumWealth(accounts);

cout << maxw;



    return 0;
}