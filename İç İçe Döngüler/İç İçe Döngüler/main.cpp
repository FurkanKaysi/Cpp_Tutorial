#include <iostream>
using namespace std;
int main(){
    
    //C++ Sorusu
    //Kullanıcının girdiği sayıya göre ekrana aşağıdaki şekilde çıktı veren programı yazınız.
    //
    //
    // Lütfen bir sayı giriniz :
    // 4
    //
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    
    
    int sayı;
    cout << " Lütfen bir sayı giriniz : ";
    cin >> sayı;
    
    for(int j=1;j<=sayı;j++){
        
        for(int i=1;i<=j;i++){
            cout << j<< " ";
        }
        
        
        

        cout<< endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    cout<< endl;
    return 0;
    
}
