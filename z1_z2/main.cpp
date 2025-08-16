#include <iostream>
using namespace std;

int main() {
    string z1, z2;
    cin>>z1>>z2;
    cin.ignore();

    string line;
    while(getline(cin, line)){
        if(line == "#") break;

        size_t start = line.find(z1);
        size_t end = line.find(z2);

        if(start!=string::npos && end!= string::npos && end>start+1){
            cout<<line.substr(start+1, end-start-1)<<endl;
        }

    }
    return 0;
}


/*
 * example input:
0 9
nfjskdz0nvjkfdmnlks9bvfkjmcdz,
bfhjdskvfdkl0fvkdzddjmje k dmkldz kdfds!%mlacsd9
0fbnrjkdn9
fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka

 output:
 nvjkfdmnlks
fvkdzddjmje k dmkldz kdfds!%mlacsd
fbnrjkdn
jdfkfmjndksfjd;sj sad;jm
#*/