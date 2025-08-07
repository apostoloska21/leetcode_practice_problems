//print 17 numbers, then sum the even and not odd numbers of those 17 nums

#include <iostream>
using namespace std;
int main() {
    int sum_even=0, sum_odd=0;
    int niza[17];
    for(int i=0; i<=17; i++){
        cin>>niza[i];
        if(niza[i]%2==0)
            sum_even+=niza[i];
        else
            sum_odd+=niza[i];
    }
    cout<<"Sum of evens: "<<sum_even<<endl;
    cout<<"Sum of odd:"<<sum_odd<<endl;

    return 0;
}
