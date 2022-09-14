// [Kata] https://www.codewars.com/kata/57e92e91b63b6cbac20001e5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Holiday VIII - Duty Free.

// First solution.
int duty_free(int price, int discount, int holiday_cost) {
    /*How many bottles of duty free whiskey you would have to buy such that the saving
      over the normal high street price would effectively cover the cost of your holiday.*/

    double holiday_price = double(price) * (100.0 - (double)discount) / 100.0;
    double save = price - holiday_price;
    return (double)holiday_cost/ save;
}

// Second solution.
int duty_free2(int price, int discount, int holiday_cost) {
    return holiday_cost * 100 /(price * discount);
}

int main(){
    /*Tests.*/

    duty_free(17, 10, 500);
    duty_free2(17, 10, 500);
}