#include<iostream>
using namespace std;
void q1(int n){
for(int i =0; i <n; i++){
    for(int j =0; j < n; j++){
         cout<<"*";
    }
    cout<<endl;

}
}

void q2(int n){
    for(int i = 0; i< n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void q3(int n){
    for(int i = 0; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}

void q4(int n ){
    for(int i =1; i <=n; i++){
        for(int j=1; j<= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void q5(int n ){
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
}

void q6(int n ){
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout<<j<< " ";
        }
        cout<<endl;
        
    }
}

void q7(int n){
    for(int i = 0; i < n; i++){
    //space
    for(int j = 0; j < n-i+1; j++){
        cout<<" "<< " ";
    }

    //star
    for(int j = 0; j < 2*i + 1; j++){
        cout<<"*"<<" ";
    }

    //space
    for(int j = 0; j < n-i+1; j++){
        cout<<" "<<" ";
    }
    cout<<endl;

    }
}




int main() {
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    for(int i =0; i < t; i++){
        int n;
        cout<<"Enter the number of rows: ";
        cin>>n;
        q7(n);
    }


return 0;
}