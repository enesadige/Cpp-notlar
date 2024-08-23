// C++ DİLİNDE DİZİ VE POİNTER BAĞLANTISI

//

#include <iostream>
#include <iterator> // for std::size

int main() {
    
    int puanlar[3]{10,20,30};
    
    int *ptr = puanlar;
    int *ptr2 = puanlar + 1;     //dizinin ikinci teriminin bellek adresini atadık
    
    std::cout<<ptr<<'\n';        //yine dizinin ilk terimini görmemiz gerekiyor
    std::cout<<*ptr2<<'\n';      //dizinin ikinci terimini görmemiz lazım
    std::cout<<puanlar<<'\n';    //dizinin ilk teriminin bellek adresi
    std::cout<<*puanlar<<'\n';   //dizinin ilk terimi
    
    //peki biz diziyi 3 terimli yazdığımızda en büyük indis 2 oluyo
    //biz pointer atarken şöyle yazarsak : int *ptr = puanlar+3;
    //bu durumda biz pointer atamasak da direkt dizinin terimini yazdırsak orda da saçma sayı yazar
    //bu şu demek bize ait olmayan bir belleğe erişmeye çalışıyoruz
    
    //ör:
    std::cout<<puanlar[3]<<'\n';
}
