// 1. run the outer loop, count the no. of lines
// 2. run the inner loop , focus on the columns and connect them somehow to the rows
// print them "*" inside the inner for loop
// observe symmeetry(optional)

#include <iostream>
using namespace std;

// int main(){

//     for(int i = 0; i<4; i++){

//         for(int j = 0; j<4 ; j++){
//             cout<<"*";
//         };
//         cout<<endl;
//     };
// };

// let see how to write in interviews

void print1(int n) {
    for(int i = 0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        };
        cout<<endl;
    };
};

void print2(int n){
   for(int i = 0; i<n ; i++){
     for(int j = 0; j<=i ; j++){
        cout<<"* ";

     };
     cout<<endl;

   };
};

void print3(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<j<<" ";
        };
        cout<<endl;
    };
};

void print4(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<i<<" ";
        };
        cout<<endl;
    };
};

// void print5(int n){
//    for(int i = 0; i<n ; i++){
//      for(int j = n; j>i ; j--){
//         cout<<"* ";

//      };
//      cout<<endl;

//    };
// };

void print5(int n){
   for(int i = 0; i<n ; i++){
     for(int j = 0; j<n-i ; j++){
        cout<<"* ";

     };
     cout<<endl;

   };
};

void print6(int n){
   for(int i = 0; i<n ; i++){
     for(int j = 1; j<n-i+1 ; j++){
        cout<<j<<" ";

     };
     cout<<endl;

   };
};

void print7(int n){
     for(int i = 0; i<n; i++ ){
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        };
       
     
        for(int j = 0; j< (2*i+1) ; j++){
            cout<<"*";
        };
       
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        };
        
      cout<<endl;
     } 
};

void print8(int n){
     for(int i = 0; i<n; i++ ){
        for(int j = 0; j<i; j++){
            cout<<" ";
        };
       
     
        for(int j = 0; j< (2*n-1-2*i) ; j++){
            cout<<"*";
        };
       
        for(int j = 0; j<i; j++){
            cout<<" ";
        };
        
      cout<<endl;
     } 
};

// use to above patterns to complete pattern 9.

void print10(int n){
    for(int i = 0; i<n ; i ++){
        for(int j = 0; j<n-i-1 ; j++){
            cout<<"* ";
        };
        cout<<endl;
    };
    
};

void print10_2(int n){
    for(int i = 1; i<=2*n-1; i++){
        // int stars = i;
        // if(i > n) stars = 2*n-1;
        int stars = (i <= n) ? i : (2 * n - i);
        for(int j = 1; j<=stars;j++){
            cout<<"* ";
        };
        cout<<endl;
    }
};



int main (){
    int t;
    cin >> t;
    for( int i = 0; i<t ; i++){
        int n;
        cin >> n ;
        print10_2(n);
    };
};


