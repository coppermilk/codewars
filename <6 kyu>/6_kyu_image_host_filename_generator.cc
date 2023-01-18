// [Kata] https://www.codewars.com/kata/586a933fc66d187b6e00031a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Image host filename generator

#include <string>
std::string get_n_rand_characters(int n){
   /*Generating random string size n.*/
  std::string rand_characters = "";
  for(int i = 0; i < n; ++i){
    // 26 is count letters in alphabet.
    rand_characters += (rand() % 26)+ 'a';
  }
  return rand_characters;
}

std::string generateName(){
  /*Generating random and unique image filenames.*/
  std::string name;
  const int name_size = 6;
  while(photoManager.nameExists(name = get_n_rand_characters(name_size)));
  return name;
}
