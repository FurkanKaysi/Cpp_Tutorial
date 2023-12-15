#include <iostream>
using namespace std;


int alanHesapla (int x ,int y){
    int alan = x * y;
    return alan;
}

void yasgöster(int doğumyılı){
    int yaş = 2023 - doğumyılı;
    cout << " Yaşınız :" << yaş;
}

                           // Fonksiyonlar int main() in üstüne yazılır.
int main (){
    
    
    /*
    int sonuç;
    int sonuç2;
    sonuç = alanHesapla(1,2);
    sonuç2 = alanHesapla(10, 3);
    cout << "İlk Dikdörtgenin Alanı :" << sonuç << endl ;
    cout << "İkinci Dikdörtgenin Alanı :" << sonuç2 ;
    */
    
    
    yasgöster(2002);
    
    
    
    cout << endl;
    return 0;
}
