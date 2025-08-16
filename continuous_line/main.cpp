#include <iostream>
#include <vector>
using namespace std;

double neprekinata_dropka(const vector<int> &v,int  a) {
    if (a == v.size() - 1) {
        return v[a];
    }
    return v[a] + 1.0 / neprekinata_dropka(v, a+1);
}

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<neprekinata_dropka(v, 0);
    return 0;
}




/*example input:
 * 50 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1

 output expected: 50.1246
*/