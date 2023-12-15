#include <iostream>
using namespace std;








int main (){
    
    int arr[] = {34,47,85};
    
    int *p;
    p = arr;
    cout<<p<< endl;
    cout << arr;
    
    cout << endl << endl;
    cout <<*p<< endl;                     // dizideki 2. sayı için *(p+1) 3. sayı için *(p+2)
    // ( cout << p[2]; )
    
    
    
    
    
    
    
    
    
    
    cout<< endl;
    return 0;
}
