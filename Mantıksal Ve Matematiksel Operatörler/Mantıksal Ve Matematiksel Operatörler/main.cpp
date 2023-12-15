

#include <iostream>

using namespace std ;



int main() {
    int sayı1 , sayı2;
    
    cout << "1.Sayıyı Giriniz = ";
    cin >> sayı1;
    cout << "2. Sayıyı Giriniz =";
    cin >> sayı2;
    
    if (sayı1 >0 and sayı2 > 0)
    {
        cout << " Her iki sayınız da pozitiftir.";
    }
    else if (sayı1 < 0 and sayı2 < 0)
    {
        cout << " Her iki sayınız da negatiftir.";
    }
    else if (sayı1 < 0 or sayı2 <0)
    {
        cout << " Sayılarınızdan biri negatiftir .";
    }
        
    
    
    
    
    
    
    
    return 0;
}

