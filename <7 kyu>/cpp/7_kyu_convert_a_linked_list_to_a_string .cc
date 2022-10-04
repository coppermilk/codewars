// [Kata] https://www.codewars.com/kata/582c297e56373f0426000098/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Convert a linked list to a string

#include <iostream>
#include <string>

class Node
{
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

std::string stringify(Node* list){
    /*Returns a string representation of the list.*/

    std::string representation;
    while(list){
        representation += std::to_string(list->data) + " -> ";
        list = list->next;
    }
    return representation + "nullptr";
}

int main() {
    /*Tests.*/
    std::cout << stringify(new Node(1, new Node(2, new Node(3))));
    return 0;
}