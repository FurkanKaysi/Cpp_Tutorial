#include <iostream>
using namespace std;
int main(){
    
    // break : döngüyü sonlandırır(döngünün dışına çıkılır)
    // continue : continue'nun altında kalan kısım atlanır ve tekrar döngünün başına dönülür
    
    for(int i=0;i<20;i++){
        if(i == 10)
            continue;
        cout<< i << endl;
    }
    
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
