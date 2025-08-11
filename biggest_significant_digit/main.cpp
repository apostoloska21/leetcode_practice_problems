#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int mostSignificantDigit(int n){
    string s = to_string(n);
    return s[0]-'0';
}

int main() {
    int n;
    while(cin>>n && n!=0){
        vector<int>numbers(n);
        for(int i=0; i<n; i++){
            cin>>numbers[i];
        }
        int maxDigit= mostSignificantDigit(numbers[0]);
        for(int i=0; i<n; i++){
            if(mostSignificantDigit(numbers[i]) > maxDigit){
                maxDigit=mostSignificantDigit(numbers[i]);
            }
        }
        int result = numbers[0];
        for(int i=0; i<n; i++){
            if(mostSignificantDigit(numbers[i]) == maxDigit){
                result=numbers[i];
                break;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
