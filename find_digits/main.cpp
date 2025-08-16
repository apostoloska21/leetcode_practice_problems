#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;

    while(getline(cin, line)){
        if(line=="#") break;
        vector<char>digits;
        for(char c:line){
            if(isdigit(c)){
                digits.push_back(c);
            }
        }
        sort(digits.begin(), digits.end());

        cout<<digits.size()<<":";
        for(char d:digits) cout<<d;

        cout<<endl;
    }
    return 0;
}
