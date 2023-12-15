
#include <iostream>

using namespace std;


int main() {
    
    
    // şifre belirleme
    int sifre ;
    cout << "Lütfen Bir Şifre Belirleyiniz : ";
    cin >> sifre;
    cout << "Şifreniz Belirlendi.." << endl;
    
    // şifre sorma
    
    int kullanıcışifredenemesi;
    cout << "Lütfen Şifreyi Giriniz : ";
    cin >> kullanıcışifredenemesi;
    
    if (kullanıcışifredenemesi == sifre)
    {
        cout << " Şifre Doğru..."<< endl;
    }
    else if (kullanıcışifredenemesi != sifre)
    {
        cout << " Şifre Yanlış..."<< endl;
    }
    
    
    
    
}
