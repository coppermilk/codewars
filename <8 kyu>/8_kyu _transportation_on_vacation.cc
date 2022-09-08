#include <iostream>
#include <iomanip>

int rental_car_cost(int d){
    const int every_day_cost = 40;
    const int first_discount = 20;
    const int second_discount = 50;
    const int days_for_first_discount = 3;
    const int days_for_second_discount = 7;

    int total_cost = d * every_day_cost;

    if(d >= days_for_first_discount && d < days_for_second_discount){
        total_cost -= first_discount;
    }
    else if(d >= days_for_second_discount){
        total_cost -= second_discount;
    }
    return total_cost;
}

int main(){
    for(int i = 1; i <= 20; ++i){
        std::cout << std::right << std::setfill(' ') << std::setw(2) << i << " day";
        std::cout << std::right << std::setfill(' ') << std::setw(4) << rental_car_cost(i) << std::endl;
    }
}