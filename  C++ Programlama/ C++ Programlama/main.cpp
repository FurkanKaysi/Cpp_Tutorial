

#include <iostream>
using namespace std;
int main(){
    
    
    //Kullanıcından 3 tane tam sayı alınız.
    //Bu 3 tam sayının en büyüğünü bulup ekrana yazdırınız
    //Bunları yaparken en az sayıda kod kullanarak yapmaya çalışınız
    
    int sayı1, sayı2, sayı3, sonuç;
    
    cout << " Lütfen 3 sayı giriniz : ";
    cin >> sayı1 >> sayı2 >> sayı3;
    cout << endl;
    
    if(sayı1 >= sayı2 and sayı1 >= sayı3)
    {
        sonuç = sayı1;
    }
else if(sayı2 >= sayı1 and sayı2 >= sayı3)
{
    sonuç = sayı2;
}
else
{
    sonuç = sayı3;
}
    cout << " Girilen en büyük sayı :" << sonuç ;
    cout << endl;

    return 0;
}
