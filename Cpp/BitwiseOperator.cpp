#include <iostream>
using namespace std;

int main() {

    int a = 4;
    int b = 6;

    cout<< " a&b = "<<(a&b) << endl;
    cout<< " a|b = "<<(a|b) << endl;
    cout<< " ~a = "<<(~a) << endl;
    cout<< " a^b = "<<(a^b) << endl;
    
    // Left and right shift

    cout<< (17>>1) << endl;   // this is right shift simply divide the value by 2 like yaha 17 >> 1 dia h too 17 ko 1 bar 2 se divide kardo
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl; // this is left shift just multiply the value by 2.
    cout<< (21<<2) << endl;
    // 2 multiply or divide har jagah kaam nhi mtlb bade no.s me kaam nhi aata kyuki bo negative ho jate h , also +ve no's ke case me padding hamesa 0 se hogi or -ve no ke case me padding hamesa compiler decide karega..

    //  increment and decrement operator
    // i++ post increment , ++i pre increment;  i-- post decrement , --i pre decrement.

    int i = 7;

    cout<< (++i) <<endl;
    cout<< i <<endl;

    cout<< (i++) <<endl;
    cout<< (i) <<endl;

    cout<< (i--) <<endl;
    cout<< (i) <<endl;
    
    cout<< (--i) <<endl;
    cout<< (i) <<endl;
    
    
}