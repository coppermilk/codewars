// [Kata] https://www.codewars.com/kata/57f604a21bd4fe771b00009c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// The Office IV - Find a Meeting Room

#include <vector>

int meeting(const std::vector<char>& rooms) {
  /*Find the first empty one and return its index.*/
  
  for(unsigned long i = 0; i < rooms.size(); ++i){
    if(rooms[i] == 'O'){
      return i;
    }
  }
  return -1;
}