#include <iostream>
using namespace std;
int main (){
    
    //Kullanıcının konsoldan girdiği saynın faktöriyelini hesaplayan bir C++ programı yazınız
    
    int sayı;
    cout << " Lütfen sayıyı giriniz : (Çıkmak İçin -1 i girin)" << endl;
    cin >> sayı;
    
    int sonuç = 1;   // Kullanıcının girdiği sayının faktöriyeli
    
    while (sayı != -1){
        int sonuç = 1; 
        
        for (int i=1; i<= sayı; i++){        // 1 den girilen sayıya çarparak gider
            sonuç = sonuç * i;
            
            
            
        }
        cout << " Sonuç : " << sonuç << endl;
        cout << " Lütfen sayıyı giriniz : " << endl;
        cin >> sayı;
    }
        
        
    
    /*
    for(int i=sayı;i>0;i--)   // girilen sayıdan 1 e kadar çarparak gider
        sonuç=sonuç * i;
    */
    
    
    
        
        
        
    
    cout << endl;
    return 0;
}
