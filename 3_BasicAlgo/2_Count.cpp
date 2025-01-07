#include<bits\stdc++.h>
using namespace std;

// int countdigi(int n){
//     int count = 0;
//     while(n > 0){
//         n = n / 10;
//         count = count + 1;  
//     }
//     return count;
// }

int countdigi(int n){
    int count = 0;
    count = (int) log10(n) + 1;
    return count;
}

int main(){

    int t;
    cout<<"How many test cases  : ";
    cin>>t;
    for(int i = 0 ; i< t; i++){
        int n;
        cout<<"Enter The Number : ";
        cin>>n;
        int b =  countdigi(n);
        cout<<b;
        cout<<endl;
    }
    
    return 0;
}