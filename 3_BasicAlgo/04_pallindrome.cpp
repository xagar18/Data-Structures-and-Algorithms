#include<bits\stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int temp = x;
        int rev = 0;
        while(x>0){
            int lastdigi = x % 10;
            x = x/10;
            rev = (rev * 10) + lastdigi;
        }
        if (rev != temp) return false;
        return true;
    }

int main(){

    int x =121;
    int a= isPalindrome(x);
    if(a){
        cout<<"Given Number is Paliindrome!";
    }else{
        cout<<"Given Number is Not Pallindrome!";
    }
    
    return 0;
}