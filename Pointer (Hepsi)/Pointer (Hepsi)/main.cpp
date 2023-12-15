
#include <iostream>
using namespace std;

int uçağınyönbilgilerinihesapla(int x_){
    
         // Yoğun hesaplamalar en az 2000 satır
    x_ = 34;
    return x_;
}

void uçağınyönbilgilerinihesapla2(int *p){
    // Yoğun hesaplamaları *p kullanarak yap
    *p = 34;
}


int main(){
                                        // pointer memoryde değişkenlerin adresini tutar.
    
    
    int x = 7;
    int *ptr;
    ptr = &x;         // Adress of .......       ( Bu kodda x'in adresi anlamına geliyo)
    
    cout << x << endl;
    cout << *ptr << endl << endl;
    
    cout << ptr<< endl;
                                    // soldaki iki kod da aynı anlama geliyor
    cout << &x << endl;
    
    *ptr = 8;
    cout << "x'in yeni değeri:" << x;
    
    x = uçağınyönbilgilerinihesapla(x);
    
    
    uçağınyönbilgilerinihesapla2(ptr);
    
    cout << "x'in yeni değeri:" << x;
    
    
    
    
    // eğer ekrana sadece ptr yazarsak ptr nin adresini yazıcak ama başına yıldız(*) koyarsak (ptr = &..) & dan sonra neyi atadıysak onun adresini ekrana yazıcak
    
    
    cout << endl;
    return 0;
}
