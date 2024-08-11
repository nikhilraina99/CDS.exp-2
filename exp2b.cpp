//Nikhil
//23070123093
//entc b1
//experiment 2b
#include <iostream>
using namespace std;
void staticExample(){
    static int z=0;
    z++;
    cout<<"The Value of z is:"<<z<<endl;
}
int main() {
    staticExample();
    staticExample();
    return 0;
}