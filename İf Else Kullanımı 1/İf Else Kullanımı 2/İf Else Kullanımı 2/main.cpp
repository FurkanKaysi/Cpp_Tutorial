
#include <iostream>

// İf else kullanımı işlem örneği




using namespace std;
int main(){
    
    int sayı1 , sayı2 , seçilenişlem , sonuç ;
    sonuç = -1;
    
    cout << "Lütfen 1. Sayıyı Giriniz : ";
    cin >> sayı1;
    cout << "Lütfen 1. Sayıyı Giriniz : ";
    cin >> sayı2;
    
    cout << " Lütfen İşleminizi Seçiniz (1 = +) (2 = -) (3 = *) (4 = /): ";
    cin >> seçilenişlem ;
    cout << endl;
    
    if (seçilenişlem == 1 )
    {
        sonuç = sayı1 + sayı2;
    }
    else if (seçilenişlem == 2)
    {
        sonuç = sayı1 - sayı2;
    }
    else if (seçilenişlem == 3)
    {
        sonuç = sayı1 * sayı2;
    }
    else if (seçilenişlem == 4)
    {
        sonuç = sayı1 / sayı2;
    }
    else
    {
        cout << "Lütfen 1-4 Arasında Sayı Giriniz ...." << endl;
    }
    
    if (sonuç != -1)
    
    {
        cout << "İşleminizin Sonucu : " << sonuç;
    }
    cout << endl << endl ;
    return 0;
}
