#include <iostream>

using namespace std;

bool samoglaska(char c){
    c= tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string line;
    int total=0;
    while(getline(cin, line)){
        if(line=="#") break;
        for(size_t i=0; i+1<line.size(); ++i){
            char a= tolower(line[i]);
            char b= tolower(line[i+1]);
            if(samoglaska(a) && samoglaska(b)){
                cout<<a<<b<<endl;
                total++;
            }
        }
    }
    cout<<total<<endl;
    return 0;
}
