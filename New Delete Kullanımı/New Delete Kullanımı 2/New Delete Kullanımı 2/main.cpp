#include <iostream>
using namespace std;






int main(){
    
    
    int x;
    cout << " Arrayin kaç tam sayı içereceğini giriniz";
    cin >> x;
    int *p = new int[x];
    for (int i=0; i<x; i++){
        cin >> p[i];
    }
    
    int sum =0;
    for (int i= 0;i < x;i++){
        sum = sum + p[i];
        
    }
    cout << " toplam : "<< sum << endl;
    
    
    delete[] p;
    
    
    
    
    
    
    cout << endl;
    return 0;
}
