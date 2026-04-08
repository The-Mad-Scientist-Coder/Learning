#pragma once
#include "Operators.h"

Complex_Numbers::Complex_Numbers(){
        num=0;
    }

    Complex_Numbers::Complex_Numbers(float a){
        num=a;
    }

    float Complex_Numbers::Console_out(){
        float g=num;
        return g;
    }

    Complex_Numbers Complex_Numbers::operator+(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num+b.num;
        float gg=ans.Console_out();
        cout <<"Their summ equals: "<< gg << endl;
        return ans;
    }

    Complex_Numbers Complex_Numbers::operator-(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num-b.num;
        float gg=ans.Console_out();
        cout <<"Their diference equals: "<< gg << endl;
        return ans;
    }
    Complex_Numbers Complex_Numbers::operator*(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num*b.num;
        float gg=ans.Console_out();
        cout <<"Their product equals: "<< gg << endl;
        return ans;
    }
    Complex_Numbers Complex_Numbers::operator/(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num/b.num;
        float g=ans.Console_out();
            cout <<"Their division equals: "<< g << endl;
        return ans;
    }
    Complex_Numbers Complex_Numbers::operator==(Complex_Numbers b){
        if (num==b.num){
            cout << "The numbers are equal!" << endl;
            return true;
        }
        else {
            return false;
        }
    }
    Complex_Numbers Complex_Numbers::operator!=(Complex_Numbers b){
        if (num!=b.num){
            cout << "The numbers are different!" << endl;
            return true;
        }
        else {
            return false;
        }
    }