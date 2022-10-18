// [Kata] https://www.codewars.com/kata/5d23d89906f92a00267bb83d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu New Cashier Does Not Know About Space or Shift.

#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> menu = {
        "burger",
        "fries",
        "chicken",
        "pizza",
        "sandwich",
        "onionrings",
        "milkshake",
        "coke"
};

std::string get_order(const std::string &order) {
    /* Separate and capitalize orders return string
     * in the same order as they appear in the menu.*/
    std::string separate_order;
    for(auto & i : menu){
        unsigned long start = 0;
        unsigned long end;
        std::string current_order;
        while ((end = order.find(i, start)) != std::string::npos){
            current_order = i + " ";
            current_order[0] = (char)toupper(current_order[0]);
            separate_order += current_order;
            start = end + 1;
        }
    }
    separate_order.pop_back();
    return separate_order;
}
}

int main(){
    std::cout << get_order("milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza");
}
