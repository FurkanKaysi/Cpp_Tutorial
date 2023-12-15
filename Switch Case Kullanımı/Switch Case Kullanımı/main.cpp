#include <iostream>
using namespace std;
int main(){
    
    int sayı;
    cout<<"Lütfen 1 ile 5 arasında sayı giriniz : ";
    cin >> sayı;
    switch (sayı) {
        case 1:
            cout << "Seçiminiz 1" << endl;
            break;
        case 2:
            cout << "Seçiminiz 2" << endl;
            break;
        case 3:
            cout << "Seçiminiz 3" << endl;
            break;
        case 4:
            cout << "Seçiminiz 4" << endl;
            break;
        case 5:
            cout << "Seçiminiz 5" << endl;
            break;
        default:
            cout<<"1 ile 5 arasında bir sayı girmediniz ! ";
            break;
    }
    
    
    
    // Birden fazla seçimlerde if else yerine kullanılabilir kod fazlalaığı oluşturmamak için 
    
    
    
    return 0;
}
