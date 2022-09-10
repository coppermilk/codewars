// [Kata] https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Grasshopper - Personalized Message

#include <string>

std::string greet(const std::string& name, const std::string& owner) {
    /*Case return:
        - name equals owner	'Hello boss';
        - otherwise	'Hello guest'.*/

    return name == owner ? "Hello boss" : "Hello guest";
}

int main(){
    /*Tests.*/
    greet("Daniel", "Daniel");
    greet("Greg", "Daniel");
}