#include <vector>
#include <iostream>
#include <algorithm>

int josephusSurvivor(int n, int k) {
    std::vector<size_t> v;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }

    for(int i = 0; i < 100; ++i){
        if(i && i % k == 0){
            v[i] = 0;
        }
    }

}

int v_shifted(std::vector<int> v, int shift){

    std::vector<int> ans;
    for(int i = shift; i < v.size() + shift; i++){
        ans.push_back(v[i % v.size()]);
    }
    ans.erase(ans.end() - 1);
    if(ans.size() == 2){
        return ans[ans.size()-1];
    }else{
        v_shifted(ans, shift);
    }

}
int main() {
    std::vector<int> v;
    for(int i = 1; i <= 7; i++){
        v.push_back(i);
    }
    std::cout << v_shifted(v, 3) << std::endl;
  //  josephusSurvivor(18, 6);
    return 0;
}
