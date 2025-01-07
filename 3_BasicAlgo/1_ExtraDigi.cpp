#include<bits\stdc++.h>
using namespace std;

void extdigi(int n){
    while(n > 0){
        cout<<n % 10 << " ";
        n = n / 10;
    }
    cout<<endl;
}
// time complexity is O(log(n)) where n is the number of digits in the number n (beacuse we are dividing the number by 10 in each iteration) incase of division always consider log(n) time complexity base will depend on the number we are dividing with 

int main(){

    int t;
    cout<<"How many test cases  : ";
    cin>>t;
    for(int i = 0 ; i< t; i++){
        int n;
        cout<<"Enter The Number : ";
        cin>>n;
        extdigi(n);
    }
    

    





    return 0;
}