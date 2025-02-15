#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i;
    cout<<"Hello World"<< endl;

    for (int i = 0; i<=16; i++){
        cout<<i<<dec<<"\t"<<i<<oct<<"\t"<<i<<hex<<"\t"<<endl;
    };
    cout<<"\n";
    
    for (int i = 0; i<=16; i++){
        cout<<dec<<i<<"\t"<<oct<<i<<"\t"<<hex<<i<<"\t"<<endl;
    };

    cout<<i++<<endl;
    cout<<i<<endl;

    return 0;
};