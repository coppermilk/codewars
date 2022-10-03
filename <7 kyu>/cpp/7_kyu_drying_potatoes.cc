#include <iostream>
using namespace std;

int potatoes(int p0, int w0, int p1){
    /*Return the final weight coming out of the oven w1 truncated as an int.*/

    return  int(w0 * (double (100.0 - p0) / double(100.0 - p1)));
}

int main(){
    /*Tests.*/

    std::cout << potatoes(82, 127, 80);
}