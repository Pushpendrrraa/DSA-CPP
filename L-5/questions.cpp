#include <iostream>
using namespace std;

class questions{

    public:
    void q3(){
        
    for(int i = 0; i<=15 ; i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    
}
    }

    
};

int main() {
    questions s1;
    s1.q3();
    return 0;
    };
