// C++ DİLİNDE DİZİLERLE FOR DÖNGÜSÜ KULLANIMI

// burada c dilinde kullandığımız kullanıma benzer şekilde beraber kullanıyoruz
// dizinin terimlerini yazdırmak dizinin terimlerine atamak için vesaire


#include <iostream>
#include <iterator> //for std::size

int main() {
    
    int puanlar[3] = {10,20,30};
    
    //----------------------------------------------------
    //dizinin terimlerini yazdırmak için
    for(int i = 0; i <= 2; i++)
    {
        std::cout<<puanlar[i]<<'\n';
    }
    //----------------------------------------------------
    
    
}
