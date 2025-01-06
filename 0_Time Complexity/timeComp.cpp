#include<iostream>
using namespace std;

int main(){
    //always consider the worst case scenario
    cout<<"test";
    for(int i = 0; i < 5; i++){ // i < 5 will run 5 times, i++ will run 5 times
        cout<<i; // O(1)  // 5 times
    }
    // O( 5 * 3 ) = O(15)
    //generalize: O(n * 3) = O(3n) = O(n)

    //best case 
    
}