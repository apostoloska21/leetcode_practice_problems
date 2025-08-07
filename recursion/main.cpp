#include <iostream>
using namespace std;

void printPattern(int n){
    if(n==0)
        return;
    for(int i=1; i<=n; i++){
        cout<<i;
    }
    for(int i=n-1; i>=1; i--){
        cout<<i--;
    }
    cout<<endl;

    printPattern(n-1);
}


int main() {

    int n;
    cin>>n;
    printPattern(n);
    return 0;
}
/*5

1234542
123431
1232
121
1*/