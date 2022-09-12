// [Kata] https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu What is between?


void between(int a, int b, int *integers) {
    /*Return an array of all integers between the input parameters, including them.*/

    for(int i = a; i <=b; ++i){
        *integers++ = i;
    }
}

int main(){
    /*Tests.*/

    int arr[100];
    between(-6, 6, arr);
}