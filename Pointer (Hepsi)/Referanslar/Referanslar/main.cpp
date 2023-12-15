#include <iostream>
using namespace std;


void fonks1(int &y){
    y = y * 2;
    cout <<" fonks1 içindeki : "<< y << endl;;
}
                                                // fonksiyon içinde "&" kullandığında adresi alır




int main(){
    
    
    int x = 5;
    fonks1(x);
    cout << "main içindeki  : " << x;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
