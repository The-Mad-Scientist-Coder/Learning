#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
        
    char temp;
    int i=0;
    int j=s.size()-1;
    while (i<j){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
    }
    }
int  main(){
vector<char> s={'h', 'e', 'l', 'l', 'o'};

reverseString(s);
for (int i=0; i<s.size(); i++){
    cout << s[i] << " ";
}
    return 0;
}