// [Kata] https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Thinkful - Logic Drills: Traffic light.

#include <string>

std::string update_light(const std::string& current) {
    /*Handle each change from green, to yellow, to red, and then to green again.*/

    if(current == "green"){
        return "yellow";
    }else if(current == "yellow"){
        return "red";
    }else{
        return "green";
    }
}

int main(){
    /*Tests.*/

    update_light("green");
    return 0;
}