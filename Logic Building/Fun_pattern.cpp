#include<iostream>
using namespace std;



// actually created by mistake it's fun because on different inputs it give totally different but a kinda symmetric pattern. Have fun running it.
void print9(int n){

    for(int p = 0; p<5 ; p++){
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
        
    //   cout<<endl;
      for(int j = 0; j<i; j++){
            cout<<" ";
        };
       
     
        for(int j = 0; j< (2*n-1-2*i) ; j++){
            cout<<"*";
        };
       
        for(int j = 0; j<i; j++){
            cout<<" ";
        };
        
    
     } 
     cout<<endl;
    }
}

int main (){
    int t;
    cin >> t;
    for( int i = 0; i<t ; i++){
        int n;
        cin >> n ;
        print9(n);
    };
};