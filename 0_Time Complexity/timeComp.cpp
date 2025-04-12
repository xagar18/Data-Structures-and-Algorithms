#include<iostream>
using namespace std;

int main(){
    // always consider the worst case scenario
    // avoid constant
    // avoid lower value

    // Big O - worst case scenario
    // Big Omega - best case scenario
    // Big Theta - average case scenario

    cout<<"test";
    for(int i = 0; i < 5; i++){ // i < 5 will run 5 times, i++ will run 5 times
        cout<<i; // O(1)  // 5 times
    }
    // O( 5 * 3 ) = O(15)
    //generalize: O(n * 3) = O(3n) = O(n)


    //best case and worst case scenario
    int marks = 24; // O(2) one time check then print (best case)
    marks = 70; // O(4) three times check then print (worst case)
    if (marks < 25){
        cout<<"fail";
    }
    else if (marks < 50){
        cout<<"pass";
    }
    else if (marks < 75){
        cout<<"good";
    }
    else{
        cout<<"excellent";
    }
    //exercise 
    int n;
    for(int i = 0; i < n; i++){  // O(n)  // n times
        for(int j = 0; j < n; j++){ // O(n)  // for each i, n times j will run 
            //code
        }
    }


}