#include <iostream>
using namespace std;
int main(){
    
    // 1 den kullanıcının girdiği sayıya kadar 7 nin katlarını ekrana yazdıran bir kod yazınız.
    
    
    
    
    int index = 1;
    int max;
    cout << " Lütfen max değerini giriniz : ";
    cin >> max;
    
    //koşul durumu doğru olduğu sürece parentez içiçndeki kod bloğu döngü şeklinde çalışır
    
    while (index <=max) {
        if(index %7 == 0){
            cout << index << " ";
        }
        index++;
    };



    return 0;
}
