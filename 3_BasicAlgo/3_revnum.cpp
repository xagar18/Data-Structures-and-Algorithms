#include<bits\stdc++.h>
using namespace std;

int reverse(int x) {
    
        int rev = 0;
        while(x){
            int lastdigi = x % 10;
            x = x/10;
            rev = (rev * 10) + lastdigi;
        }
        return rev;
    }

int main(){

    int x =123;
    int a= reverse(x);
    cout<<a;

    return 0;
}