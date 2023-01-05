// [Kata] https://www.codewars.com/kata/5f6d533e1475f30001e47514/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Consecutive items

bool consecutive(std::vector<int>arr, int a,int b){
  /*Find out whether or not a and b appear consecutively.*/
  
  for(unsigned long i = 0; i < arr.size() - 1; ++i){
    if(arr[i] == a && arr[i + 1] == b){
      return true;
    }else if(arr[i] == b && arr[i + 1] == a){
      return true;
    }
  }
  return false;
}