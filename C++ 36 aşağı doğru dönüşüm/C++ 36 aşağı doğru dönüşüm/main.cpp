// C++ DİLİNDE NESNELERİ FARKLI TÜRDE ELE ALMA DA DOWNCASTİNG

// göreceğimiz şey burada downcasting işlemidir
//

#include <iostream>
#include <string>

//---------------------------------------------------------------------------------
class Silah
{
protected:
    int deger;
    
public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;

};
//---------------------------------------------------------------------------------
class Ak47 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    bool durbun;
    
    void atesEt() {}
    
};
//---------------------------------------------------------------------------------
class Pistol : public Silah
{
    public:
    int kurmaKoluDeseni;
    
    void atesEt() {}
};
//---------------------------------------------------------------------------------
class M1 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    int KurmaPozisyonu;
    
    void atesEt() {}
};
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------

//aşağıda yaptığımız işlem downcasting işlemidir
//burada değer 500 olduğu halde 204 yazdırdı ekrana ve bu bizi hataya götürür
//tehlikeli kısmı burada çalışırken derleyici hata vermedi direkt hatalı değeri yazdırdı
//biz bunu program yazarken bu hatayı yaparsak tüm program bile çökebilir
//biz burda parantez içine (Ak47*)yazarak dereleyiciye kontrol bende deriz
//doğru kullanımı için önce Ak47 türünde ak47 oluştururuz
//daha sonra silah içinde olmayıp Ak47 içinde olan özellikleri atarsak doğru kullanım olur
//bu şekilde kullanınca gerçek değerini almış oluruz doğru kullanımı bu şekildedir


int main() {
    
    //doğru kullanım için
    Ak47 ak47;
    ak47.seriTek = 1;
    ak47.isim = "123";
    
    //upcasting işlemi
    Silah *silahPtr = &ak47;
    
    
    //biz burda parantez içine (Ak47*)yazarak dereleyiciye kontrol bende deriz
    //downcasting işlemi
    Ak47 *ak47Ptr = (Ak47*)silahPtr;
    std::cout << ak47Ptr->seriTek<<'\n';
}

