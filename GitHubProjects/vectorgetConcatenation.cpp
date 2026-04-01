#include <iostream>
#include <vector>

using namespace std;


vector<int> getConcatenation(vector<int>& array1){
    int n=array1.size();
    int v = n*2;
   vector<int> result1(v);

  
    for (int j=0; j<n; j++){
        
        result1[j]=array1[j];
        result1[j+n]=array1[j];
    } 
    return result1;
}


int main(){
    int n=5;
    vector<int> array0= {1, 5, 3, 2, 4};


    vector<int> result0 = getConcatenation(array0);
    for (int i=0; i<result0.size(); i++)
    {
        cout << result0[i] << " ";
    }
return 0;
}