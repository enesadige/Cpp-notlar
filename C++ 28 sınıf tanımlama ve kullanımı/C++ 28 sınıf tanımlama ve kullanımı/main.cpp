// C++ DİLİNDE SINIF OLUŞTURMA

//

#include <iostream>

//---------------------------------------------------------------------
class Hesapla
{
public: // değişkenlere erişim için belirteç amacıyla kullanılır
    int genislik, yukseklik, alan;
    
    void giris()
    {
        std::cout<<"yükseklik değerini giriniz :";
        std::cin>>yukseklik;
        std::cout<<"genişlik değerini giriniz :";
        std::cin>>genislik;
    }
    
    void hesapla()
    {
        alan = yukseklik*genislik;
        std::cout<<"alan = "<< alan << '\n';
    }
};
//---------------------------------------------------------------------

int main() {
    
    Hesapla hesap;      //bu bildiğimiz sınıftan bir değişken tanımlamadır "int" gibi "Hesapla"
    
    hesap.giris();      //burada giriş fonksiyonunu çağırdık
    hesap.hesapla();    //burada da hesapla fonksiyonunu çağırdık
    
}
