//
// Created by zvgdb on 19.09.22.
//
#include <tuple>

std::tuple<int, int, int> racePodium(int blocks) {
    int block = blocks / 3;
    if (blocks % 10 == 0) {
        return std::make_tuple(block + 1, block + 2, block - 2);
    }else if(blocks % 10 == 1) {
        return std::make_tuple(block + 1, block + 2, block - 1);
    }else if(blocks % 10 == 2) {
        return std::make_tuple(block -2, block - 2, block - 1);
    }else if(blocks % 10 == 6) {
        return std::make_tuple(block, block +1 , block -1);
    }else if(blocks % 10 == 7) {
        return std::make_tuple(block, block +2  , block -1);
    }else{
        return std::make_tuple(block + 1, block + 2, block - 1);
    }

}

int main() {
    racePodium(10000);
}