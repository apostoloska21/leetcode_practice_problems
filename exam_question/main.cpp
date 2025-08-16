#include <iostream>
using namespace std;


int samoglaski(string line) {
    int count = 0;
    for (char c: line) {
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            cout<<c<<" ";
            count++;
        }
    }return count;
}

int main() {
    string line;
    while (getline(cin, line)) {
        if (line == "#") break;
        cout<<samoglaski(line)<<endl;

    }
    return 0;

}