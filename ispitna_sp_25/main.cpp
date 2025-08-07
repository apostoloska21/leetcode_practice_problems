#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <vector>
#include <valarray>

using namespace std;
void pozitivni(int n){
    if(n==0)
        return;
    int digit=n%10;
    pozitivni(n/10);
    if(digit%2!=0)
        cout<<digit<<" ";
}
void printParniPozitivni(int n){
    if(n==0)
        return;
    int digit=n/(int)pow(10, (int)log10(n));
    if(digit%2==0)
        cout<<digit<<" ";
    int pow10=(int)pow(10, (int)log10(n));
    if(n%pow10!=n)
        printParniPozitivni(n%pow10);
}
int sumNeparniPozitivni(int n){
    if(n==0)
        return 0;
    int digit=n%10;
    int sum_rest= sumNeparniPozitivni(n/10);
    if(digit%2!=0)
        return sum_rest+digit;
    return sum_rest;

}

int main(){
  int n;
  while(cin>>n){
      if(n<0)
          break;
      cout<<"digits:";

      int temp=n;
      bool first=true;
      while(temp>0){
          int d=temp%10;
          if(d%2!=0){
              if(!first) cout<<" ";
              cout<<d;
              first=false;
          }
          temp/=10;
      }
      cout<<"\n";
      cout<<"ednakvi broevi: ";
      string s= to_string(n);
      first=true;
      for(char c:s){
          int digit=c-'0';
          if(digit%2==0){
              if(!first) cout<<" ";
              cout<<digit;
              first=false;
          }
      }
      cout<<"\n";
      cout<<"Suma na neparni: "<<sumNeparniPozitivni(n)<<"\n\n";
  }
    return 0;
}