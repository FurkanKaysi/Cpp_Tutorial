#include <iostream>
using namespace std;







int main () {
/*
    int x = 5;
    int y = 8;
    int *p1;
    int *p2;
    
    p1 = &x;
    p2 = &y;
    y = y + 2;
    *p1 = *p1 *2;
    *p1 = *p2 * *p1;
    cout << *p1 << endl;
    cout << x;
    
    */
    
    int a = 5;
    int *p1 = &a;
    int **p2 =&p1;
    
    
    
    cout << " a = " << a << endl;
    cout << "*p1 = "<< *p1 << endl;
    cout << "**p2 = "<< **p2 << endl;
    
    
    
    
    **p2 = 10 ;
    cout << " a = "<< a << endl;
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
