// [Kata] https://www.codewars.com/kata/52a89c2ea8ddc5547a000863/train/cpp
// [User] https://www.codewars.com/users/coppermilk

// First solution.
int getLoopSize(Node * startNode) {
  /* Determine the length of the loop. */
  
  std::map <unsigned long, unsigned long> m;
  Node * pNext = startNode;
  
  int loop_length = 0;
  
  while (true) {
    pNext = pNext -> getNext();
    int count = ++m[(unsigned long) pNext];
    if (count >= 3) {
      /* End following by loop. */ 
      break;
    } else if (count == 2) {
      /* Follow by loop.*/
      loop_length++;
      continue;
    }
  }
  return loop_length;
}

// Second solution.
int getLoopSize2(Node* startNode)
{
  Node* turtle = startNode;
  Node* rabbit = startNode->getNext();
  while(turtle != rabbit) {
    turtle = turtle->getNext();
    rabbit = rabbit->getNext()->getNext();
  }
  turtle = turtle->getNext();
  int count = 1;
  while(turtle != rabbit) {
    turtle = turtle->getNext();
    count++;
  }
  return count;
}