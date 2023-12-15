#include <iostream>
using namespace std;
int main(){
    
    // 1 den 20 ye kadar olan tüm sayıları ekrana yazdıran bi for loop
    
   /*
    for (int i = 1; i<=20; i++){
        cout << i << endl;
    }
    */
    // 1 den 20 ye kadar olan 2 ye bölünebilen tüm sayıları ekrana yazdıran bir for loop'u
    for (int i = 1; i <= 20; i++){
        
        if (i%2 ==0)
            
            cout << i << endl;
    }
    
    
    
    
    // while
    
    
    /*
    int j = 1;
    while(j<= 20){
        cout << j << endl;
        j++;
    }
    */
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}

