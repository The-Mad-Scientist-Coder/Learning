#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

class My_String{
    private:
    string smth;
    bool found_diff=false;

    public:

    My_String(){
        smth= "   ";
    }

    My_String(string n){
        smth=n;
    }


    My_String operator+(My_String a){
        My_String res;
        res=smth+a.smth;
        string b=res.smth;
        cout << "The result of the addition of the two strings is: " << b << endl;
        return res;
    }

    My_String operator==(My_String a){
        if (smth==a.smth){
            cout << "The strings are equal!" << endl;
        }
        return smth;
    }

    My_String operator!=(My_String a){
        if (smth!=a.smth){
            cout << "The strings are different!" << endl;
        }
        return smth;
    }

    My_String operator<=(My_String a){
        int b=smth.length();
        int c=a.smth.length();
        if (b<c){
            cout << "The first string has less simbols than the second one." << endl;
            for (int i=0; i<=smth.length()-1; i++){
                if(smth[i]<a.smth[i]){
                    cout << "The first string is smaller, in alphabetical order, than the second one." << endl;
                    found_diff=true;
                    break;
                }

                else if(smth[i]>a.smth[i]){
                    cout << "The first string is bigger, in alphabetical order, than the second one." << endl;
                    found_diff=true;
                    break;
                }
            }
        }
        else if (b==c){
            cout << "The strings are the same length." << endl;
            for (int i=0; i<=smth.length()-1; i++){
                if(smth[i]<a.smth[i]){
                    cout << "The first string is smaller, in alphabetical order, than the second one." << endl;
                    found_diff=true;
                    break;
                }

                else if(smth[i]>a.smth[i]){
                    cout << "The first string is bigger alphabetically than the second one." << endl;
                    found_diff=true;
                    break;
                    }

                else if (i==smth.length()-1){
                    found_diff=false;
                }
            }
        }
        return smth;
    }

    My_String operator>=(My_String a){
        int b=smth.length();
        int c=a.smth.length();
        if(found_diff==false){
            if (b>c){
                cout << "The first string has more simbols than the second one." << endl;
                for (int i=0; i<=a.smth.length()-1; i++){
                    if(smth[i]>a.smth[i]){
                        cout << "The first string is bigger, in alphabetical order, than the second one." << endl;
                        found_diff=true;
                        break;
                    }
                    else if(smth[i]<a.smth[i]){
                        cout << "The first string is smaller, in alphabetical order, than the second one." << endl;
                        found_diff=true;
                        break;
                    }
                }
            }
            else if (b==c){
                //cout << "The strings are the same length! But..." << endl;
                for (int i=0; i<=smth.length()-1; i++){
                    if(smth[i]>a.smth[i]){
                        cout << "The first string is bigger, in alphabetical order, than the second one." << endl;
                        found_diff=true;
                        break;
                    }
                    else if(smth[i]<a.smth[i]){
                        cout << "The first string is smaller, in alphabetical order, than the second one." << endl;
                        found_diff=true;
                        break;
                    }
                }
            }
        }
        return smth;
    }
};


int main(){
string s, s1;
cout << "Please enter a string or a set of characters/letters: ";
cin >> s;
My_String str(s);
cout << "Please enter another string or a set of characters/letters: ";
cin >> s1;
My_String str1(s1);
My_String str2;
str2=str+str1; 
My_String str3;
str3=str==str1;
str3=str!=str1;
str3=str<=str1;
str3=str>=str1;

    return 0;
}