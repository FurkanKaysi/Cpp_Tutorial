#include <iostream>
using namespace std;
int main(){                                  // Programlamada sıralar 0 dan başlar 1 den değil
    
    int dizi[2][3] = { {21 ,33, 43},
        {22 ,35, 47} };
    
   // cout<<dizi[0][2];                       // dizi    []     []    kodunda
                                              //      (satır) (sütun) olarak adlandırılır.
    
    
    // dizinin hepsini ekrana yazdımak için
    
     for (int i=0;i<2;i++) {
           for (int j=0;j<3;j++){
           cout << dizi[i][j] << "  ";
           }
         cout << endl;
    }
    
    
   
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
 
