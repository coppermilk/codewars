// [Kata] https://www.codewars.com/kata/5d49c93d089c6e000ff8428c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Computer problem series #1: Fill the Hard Disk Drive

#include <vector>

int save(std::vector<int> sizes, int hd) {
  /* Determine how many files of the copy queue you 
  will be able to save into your Hard Disk Drive.*/
  
  int saved_files_size = 0;
  for(unsigned long i = 0; i < sizes.size(); ++i){
    saved_files_size += sizes[i];
    if(saved_files_size > hd){
      return i; 
    }
  }
  return sizes.size();
}