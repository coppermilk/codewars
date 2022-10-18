// [Kata] https://www.codewars.com/kata/55beec7dd347078289000021/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Linked Lists - Length & Count.


struct Node {
  Node(int data) {
      this->data = data;
  }

  Node() {

  }

  Node *next{};
  int data;
};


int Length(Node *head) {
    /*Count the number of nodes in a linked list.*/
    int length = 0;
    while (head) {
        ++length;
        head = head->next;
    }
    return length;
}

int Count(Node *head, int data) {
    /*Count the occurrences of an integer in a linked list.*/
    int count = 0;
    while (head) {
        if (data == head->data) {
            ++count;
        }
        head = head->next;
    }
    return count;
}

int main() {
    /*Tests.*/
    Node *head = new Node;
    Node *n = head;
    for (int i = 0; i < 11; ++i) {
        n->next = new Node(i / 2);
        n = n->next;
    }
    Count(head, 4);
}