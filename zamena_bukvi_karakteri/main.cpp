#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string max_niza;
    for(int i=0; i<n; i++){
        string niza;
        cin>>niza;
        if(i==0 || niza>max_niza){
            max_niza=niza;
        }
    }
    string result;
    for(char  c: max_niza){
        if(c == 's'){
            result+='$';
        }
        else if(c =='m'){
            result+="**";
        }else{
            result+=c;
        }
    }
    cout<<result<<endl;
    return 0;
}
