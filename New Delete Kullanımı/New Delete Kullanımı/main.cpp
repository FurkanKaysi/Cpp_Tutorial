#include <iostream>
using namespace std;






int main(){
    
    int *p = new int;
    *p = 7;
    cout << p << endl;
    
    cout << *p << endl;
    
    delete p;
    
    cout << p;
    
    
// new int bellekte yer erezerve eder delete siler
    
    
    
    
    cout << endl;
    return 0;
}
