#include <iostream>
using namespace std;

void fonksiyon1 (){
    static int sayaç=0;         // static hafızada atanılan değeri tutuyor silmiyor kod boyunca değeri koruyor
    sayaç++;
    cout <<"fonksiyon1 sayaç :" << sayaç << endl;
    
}
void fonksiyon2 (){
    static int sayaç=0;
    sayaç++;
    cout <<"fonksiyon2 sayaç :" << sayaç << endl;
    
}



int main(){
    
    
    
    fonksiyon1();
    fonksiyon1();
    fonksiyon1();
    cout << endl;
    fonksiyon2();
    cout << endl;
    fonksiyon1();
    
    
    /*
    const float pi = 3.14;                  // const kod içinde sabit değer ataması
    cout << pi;
    */
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
