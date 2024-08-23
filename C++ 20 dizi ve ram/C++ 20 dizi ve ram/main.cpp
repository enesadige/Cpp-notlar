// C++ DİLİNDE DİZİLER VE RAM İLİŞKİSİ

// biz eğer bir dizinin ismini direkt std::cout içine yazıp yazdırırsak;
// dizinin ilk elemanının adres numarasını görürüz
// eğer yazdırırken dizi ismi önüne "*" koyarsak da ilk elemanını görürüz
// tıpkı pointer çalışması mantığına benzer


#include <iostream>

int main() {
    
    int puanlar[5] = {10,20,30,40,50};
    
    std::cout<<puanlar<<'\n';
    std::cout<<*puanlar<<'\n';
    
    
    
    
    
}
