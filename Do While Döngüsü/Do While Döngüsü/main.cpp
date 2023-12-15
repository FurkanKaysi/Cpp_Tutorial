#include <iostream>

using namespace std;
int main(){
    
    string şifre = "1234";
    string girilendeğer;
    
    do {
        cout << "Lütfen Şifreyi Giriniz : ";
        cin >> girilendeğer;
    } while (şifre != girilendeğer);
    
    cout << "Hoşgeldiniz...";
    cout << endl;
    
    
    
    
    
    return 0;
}
