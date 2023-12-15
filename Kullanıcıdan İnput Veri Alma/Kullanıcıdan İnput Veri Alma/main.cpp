    #include <iostream>

    using namespace std;
    int main() {
    
        cout << "Merhaba" << endl;
    
        int en, boy, alan ;
        
        cout << " Lütfen Diktördgenin Enini Giriniz : ";
        cin >> en ;
        cout << endl;
    
        cout << " Lütfen Diktördgenin Boyunu Giriniz : ";
        cin >> boy ;
        cout << endl;
        
        
        cin >> en >> boy;
        
        alan = en * boy ;
        cout << "Dikdötgenin Alanı = " << alan << " metrekaredir." << endl;
        
    return 0;
}
