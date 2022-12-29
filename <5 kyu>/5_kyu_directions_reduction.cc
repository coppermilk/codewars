// [Kata] https://www.codewars.com/kata/550f22f4d758534c1100025a/train/cpp
// [User] https://www.codewars.com/users/coppermilk

class DirReduction
{
 public:
  static std::vector<std::string> dirReduc(std::vector<std::string> arr){
    for(unsigned long i = 0; i < arr.size(); ++i){
      std::cout<< std::endl;
      unsigned long i_next;
      if(i < arr.size() - 1){
        i_next = i + 1;
      }
      if((arr[i] == "EAST" && arr[i_next] == "WEST") || (arr[i] == "WEST" && arr[i_next] == "EAST")){
        arr.erase(arr.begin() + i);
        arr.erase(arr.begin() + i_next - 1);
        i = -1;
      }else if((arr[i] == "NORTH" && arr[i_next] == "SOUTH") || (arr[i] == "SOUTH" && arr[i_next] == "NORTH")){
        arr.erase(arr.begin() + i);
        arr.erase(arr.begin() + i_next - 1);
        i = -1;
      }
    }
    return arr;
  }
};