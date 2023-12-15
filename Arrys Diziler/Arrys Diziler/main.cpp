#include <iostream>
using namespace std;
int main (){
    
    //Arrays - Diziler
    
    int arr[5];
    arr[0] = 20;
    arr[1] = 33;                        // Sadece int olarak değil float olarak da kullanılabilir
    arr[2] = 42;
    arr[3] = 39;
    arr[4] = 55;
    
    
    /*
    cout <<" arrayın ilk değerini giriniz : ";
    cin >> arr[0];
    */
    
    
    
    /*
     int dizi[] = { 23 , 37, 76 };
     
                                        // Bu şekilde de kullanılabilir 
    for(int i=0; i<3; i++){
        cout<<dizi[i]<<endl;
    
    
    */
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
    
    
    
    
    
    
    
    return 0;
}
