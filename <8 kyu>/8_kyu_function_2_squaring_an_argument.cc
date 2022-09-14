// [Kata] https://www.codewars.com/kata/523b623152af8a30c6000027/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Function 2 - squaring an argument

template<typename T>
T square(T x){
    /*Squaring an argument.*/

    return x * x;
}

int main(){
    /*Tests.*/

    square(42.0);
    square(42);
}