//
// Created by Martina on 8/5/2025.
//
#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <vector>
#include <valarray>

using namespace std;
int main(){
    for(int i=9998; i>=1000; i--){
        if(i%127==0 && i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
