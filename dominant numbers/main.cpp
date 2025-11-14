#include <iostream>
#include <string>
using namespace std;



int parni(int num){
    int parni_count=0;
    while(num>0){
        int cifri=num%10;
        if(cifri%2==0){
            parni_count++;
        }
        num/=10;
    }
    return parni_count;
}
int neparni(int num){
    int neparni_count=0;
    while(num>0){
        int cifri=num%10;
        if(cifri%2!=0){
            neparni_count++;
        }
        num/=10;
    }
    return neparni_count;
}
int proizvod(int num){
    int original=num;
    char prvata_cifra=0;
    while(num>0){
        prvata_cifra=num%10;
        num/=10;
    }
    int posledna_cifra=original%10;
    return prvata_cifra*posledna_cifra;
}

int main(){
    int num;
    int vkupno_balansirni = 0;
    int vkupno_provereni = 0;
    int zbir_proizvodi = 0;
    int zbir_parni=0;
    int zbir_neparni=0;
    while(cin >> num) {
        vkupno_provereni++;
        int par = parni(num);
        int nepar = neparni(num);
        int proizvodi = proizvod(num);
        int parni_zbir = 0, neparni_zbir = 0;

        zbir_proizvodi += proizvodi;
        int temp=num;
        while(temp>0){
            int cifra=temp%10;
            if(cifra%2==0){
                parni_zbir+=cifra;
            }
            else{
                neparni_zbir+=cifra;
            }
            temp/=10;
        }
        if(parni_zbir > neparni_zbir) {
            cout << num << ": DOMINANTEN (parni_zbir=" << parni_zbir
                 << ", neparni_zbir=" << neparni_zbir << ")" << endl;
            vkupno_balansirni++;
            zbir_proizvodi += num;
        } else {
            cout << num << ": ne e dominanten" << endl;
        }
        if (par == nepar) {
            cout << num << ": BALANSIRAN (parni=" << par << ", neparni=" << nepar
                 << ", proizvod=" << proizvodi << ")" << endl;
            vkupno_balansirni++;
        } else {
            cout << num << ": ne e balansiran (parni=" << par << ", neparni=" << nepar << ")" << endl;
        }

    }
    cout << "Vkupno balansirni: " << vkupno_balansirni << endl;
    cout << "Vkupno provereni: " << vkupno_provereni << endl;
    cout << "Zbir na proizvodi: " << zbir_proizvodi << endl;


    return 0;
}