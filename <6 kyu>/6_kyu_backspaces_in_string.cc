#include <string>
#include <iostream>
#include <algorithm>

std::string cleanString(std::string s) {
    /* Process a string with "#" symbols (like a backspace.)*/
    std::string ans;
    int skip = 0;
    for(int i = (int)s.size() - 1; i >= 0; --i){
        if(s[i] == '#'){
            skip++;
        }else{
            if(skip){
                --skip;
                continue;
            }else{
                ans += s[i];
            }
        }
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    std::cout << cleanString("abc#d##c");
}