// [Kata] https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu L1: Set Alarm.

bool set_alarm(const bool& employed,const bool& vacation){
    /*The function should return true if you are employed and not on vacation.*/

    return employed && !vacation;
}

int main(){
    /*Tests.*/

    set_alarm(true, false);
    return 0;
}