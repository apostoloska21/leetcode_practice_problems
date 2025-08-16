#include <iostream>
using namespace std;

int main() {
    string line;
    string longest_line="";
    int maxLength=0;
    while(getline(cin, line) && line!="0"){
        int digitCount=0;
        for (char c: line){
            if(isdigit(c)){
                digitCount++;
            }
        }
        if(!longest_line.empty()){
            int firstDigitPosition=-1;
            for(int i=0; i< longest_line.length(); i++){
                if(isdigit(longest_line[i])){
                    firstDigitPosition=i;
                    break;
                }
            }
            int lastDigitPosition=-1;
        }
    }
    return 0;
}
