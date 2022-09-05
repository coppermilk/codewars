#include <vector>
#include <iostream>

std::string likes(const std::vector<std::string> &names)
{
    unsigned long size = names.size();
    std::string end = " like this";
    if(!size) {
        return "no one likes this";
    }else if(size == 1){
        return names[0] + " likes this";
    }else if(size == 2){
        return names[0] + " and " + names[1] + end;
    }else if(size == 3){
        return names[0] + ", " + names[1] + " and " + names[2] + end;
    }else if(size > 3){
        return names[0] + ", " + names[1] + " and " + std::to_string(size - 2) + " others" + end;
    }

    return "";
}

int main(){
    std::vector<std::string> test1 = {};                               //-->  "no one likes this"
    std::vector<std::string> test2 = {"Peter"};                        //-->  "Peter likes this"
    std::vector<std::string> test3 = {"Jacob", "Alex"};                //-->  "Jacob and Alex like this"
    std::vector<std::string> test4 = {"Max", "John", "Mark"};          //-->  "Max, John and Mark like this"
    std::vector<std::string> test5 = {"Alex", "Jacob", "Mark", "Max"}; //-->  "Alex, Jacob and 2 others like this"

    std::cout << likes(test1) << std::endl;
    std::cout << likes(test2) << std::endl;
    std::cout << likes(test3) << std::endl;
    std::cout << likes(test4) << std::endl;
    std::cout << likes(test5) << std::endl;

}