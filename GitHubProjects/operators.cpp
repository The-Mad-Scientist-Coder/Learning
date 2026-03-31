#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class True_or_False{
    private:
        bool tf;
    
    public:

    True_or_False(){
        tf=false;
    }

    True_or_False(bool verdict){
        tf=verdict;
    }
};


class Complex_Numbers{
    private:
    float num;

    public:
    Complex_Numbers(){
        num=0;
    }

    Complex_Numbers(float a){
        num=a;
    }

    float Console_out(){
        float g=num;
        return g;
    }

    Complex_Numbers operator+(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num+b.num;
        float gg=ans.Console_out();
        cout <<"Their summ equals: "<< gg << endl;
        return ans;
    }

    Complex_Numbers operator-(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num-b.num;
        float gg=ans.Console_out();
        cout <<"Their diference equals: "<< gg << endl;
        return ans;
    }
    Complex_Numbers operator*(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num*b.num;
        float gg=ans.Console_out();
        cout <<"Their product equals: "<< gg << endl;
        return ans;
    }
    Complex_Numbers operator/(Complex_Numbers b){
        Complex_Numbers ans;
        ans=num/b.num;
        float g=ans.Console_out();
            cout <<"Their division equals: "<< g << endl;
        return ans;
    }
    Complex_Numbers operator==(Complex_Numbers b){
        if (num==b.num){
            cout << "The numbers are equal!" << endl;
            return true;
        }
        else {
            return false;
        }
    }
    Complex_Numbers operator!=(Complex_Numbers b){
        if (num!=b.num){
            cout << "The numbers are different!" << endl;
            return true;
        }
        else {
            return false;
        }
    }

};
int main(){
    float n;
    cout << "Enter a complex number: ";
    cin >> n;
    Complex_Numbers n1(n);
    cout << "Enter another complex number: ";
    cin >> n;
    Complex_Numbers n2(n);
    Complex_Numbers n3;
    n3=n1+n2;
    //Complex_Numbers sees n3= n1.operator+(n2) - выживается функция оператор+ и посылает туда значение n2
    n3=n1-n2;
    n3=n1*n2;
    n3=n1/n2;
    Complex_Numbers n4;
    n4=n2==n1;
    n4=n2!=n1;
    return 0;
}