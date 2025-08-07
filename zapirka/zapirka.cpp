#include <iostream>
using namespace std;

int main() {
    int niza[17];
    int br = 0;

    while (br < 17 && cin >> niza[br])
        br++;

    for (int i = 0; i < br; i++) {
        cout << niza[i];
        if (i != br-1)
            cout << ", ";
    }
    cout << endl;
    return 0;
}
