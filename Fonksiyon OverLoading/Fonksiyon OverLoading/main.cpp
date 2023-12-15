#include <iostream>
using namespace std;


void ekranahatamesajıver() {
    cout << " Hata Oluştu ! " << endl;
}
void ekranahatamesajıver(string mesaj){
    cout << mesaj << endl;
}
void ekranahatamesajıver(int hatakodu){
    cout << hatakodu << endl;
}







int main(){
    
    
    
    ekranahatamesajıver();
    ekranahatamesajıver("ozel");
    ekranahatamesajıver(404);
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;
}
