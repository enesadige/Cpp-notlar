// C++ DİLİNDE KALITIM

// kalıtım yani miras almadır
// örneğin bir oyun geliştirirken farklı silahlar yapacak olalım
// üç farklı silah için isim ve mermi kapasitesi adında iki ortak özellik olsun
// durum böyle olunca her sınıfta tekrar tekrar eklememek için kullanırız

// örneğin silah adında bir sınıf oluşturup içine isim ve silah kapasitesi eklersek.;
// ve tüm yaptığımız yeni silahlarda bu sınıfı içine dahil ederek kullanabiliriz

// silah adındaki bir sınıf ve altına üç çeşit silah sınıfı olsun
// bunlar silah sınıfından miras almış olur yukarıda yaptığımız işlemi yaparsak
// silah burada temel sınıf yani base class olur
// altındaki silahların sınıfları ise türetilmiş sınıf yani derived class olur
// aşağıda örnek var

// KALITIM VE RAM İLİŞLKİSİ
//  

#include <iostream>
#include <string>

//---------------------------------------------------------------------------------
//biz  aşağıda üç silahta da ortak kullancılacak özellikler için bunu tanımlıyoruz
//bunu diğerleri içine eklemek için aşağıdaki sınıfta sınıf isminden sonra;
// iki nokta koyar ve miras almak istediğimiz sınıfı yazarız, ör:
//class Ak47 : public Silah...

class Silah
{
    public:
    std::string isim;
    int mermiKapasitesi;
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

int main() {
    
    Ak47 ak47;      //ak47 sınıfından bir nesne üretildi
    ak47.isim = "Ak47 yeni dizayn";
    
    M1 m1;          //m1 sınıfından bir nesne üretildi
    m1.isim = "m1 çöl dizaynı";
    
    
    
}
