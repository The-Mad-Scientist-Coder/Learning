#pragma once
#include "Operators_string.h"

    My_String::My_String(){
        smth= "   ";
    }

    My_String::My_String(string n){
        smth=n;
    }


    My_String My_String::operator+(My_String a){
        My_String res;
        res=smth+a.smth;
        string b=res.smth;
        cout << "The result of the addition of the two strings is: " << b << endl;
        return res;
    }

    My_String My_String::operator==(My_String a){
        if (smth==a.smth){
            cout << "The strings are equal!" << endl;
        }
        return smth;
    }

    My_String My_String::operator!=(My_String a){
        if (smth!=a.smth){
            cout << "The strings are different!" << endl;
        }
        return smth;
    }

    My_String My_String::operator<=(My_String a){
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

    My_String My_String::operator>=(My_String a){
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