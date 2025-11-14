#include <iostream>
#include <string>
using namespace std;

int sum(int num){
    int cifri=0;
    while(num>0) {
        cifri += num % 10;
        num /= 10;
    }
    return cifri;
}

int deliteli(int num){
    int counter=0;
    int suma= sum(num);
    for(int i=1; i<=9; i++){
        if(suma%i==0){
            counter++;
        }
    }
    return counter;
}

//int proizvnod(int num){
//    int prva_cifra=num;
//    int counter=0;
//
//    while(num>0){
//        prva_cifra=num%10;
//        num/=10;
//    }
//   int posledna_cifra=counter%10;
//    return prva_cifra*posledna_cifra;
//}
int max_cifra(int num){
    int max=0;
    int cifra=num%10;
    while(num>0){
        if(cifra>max){
            max=cifra;
        }
        num/=10;
    }
    return max;
}
int min_cifra(int num){
    int min=9;
    int cifra=num%10;
    while (num>0){
        if(cifra<min){
            min=cifra;
        }
        num/=10;
    }
    return min;
}

int proizvod(int num) {
    int max_cifri = max_cifra(num);
    int min_cifri = min_cifra(num);
    return max_cifri* min_cifri;
}

int main(){
    int num;
    int vkupno_magicni=0;
    int vkupno_provereni=0;
    int proizvodi= proizvod(num);
    int zbir_suma=0;

    while(cin>>num) {
        vkupno_provereni++;
        int suma = sum(num);
        int delitel = deliteli(num);
        int max_c = max_cifra(num);
        zbir_suma += suma;

        if (suma % max_c == 0 && proizvodi % 2 == 0) {
            cout << num << ": MAGICEN (suma=" << suma << ", broj_deliteli="
                 << delitel << ", proizvod=" << proizvodi << ")" << endl;
            vkupno_magicni++;
        } else {
            cout << num << ": ne e magicen" << endl;
        }
        cout << "Vkupno magicni: " << vkupno_magicni << endl;
        cout << "Vkupno provereni: " << vkupno_provereni << endl;
        if (vkupno_provereni > 0) {
            cout << "Prosek suma: " << (zbir_suma / vkupno_provereni) << endl;
        }
    }
        return 0;
    }