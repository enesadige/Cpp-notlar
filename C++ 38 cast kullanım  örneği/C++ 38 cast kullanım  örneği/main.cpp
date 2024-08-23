// C++ DİLİNDE CAST KULLANIM ÖRNEĞİ

// bir cast örneği


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
// silahların ismini ekrana yazdırmak için fonksiyon
// fakat biz her ayrı silah için ayrı fonksiyon yazarsak hamallık olur
// örneğin void goster(Ak47* ak47Ptr) {...} şeklinde yazmak bizi uğraştıracaktır
// bunun yerine biz silah türünde bir input isteyen bir fonksiyon yazarsak daha mantıklı olur

void goster(Silah* silahPtr)
{
    std::cout<<silahPtr->isim<<'\n';
}

//---------------------------------------------------------------------------------
// burada aslında silah türünde bir input isteyen bir fonksiyona biz başka classlardan gönderdik
// bu bir upcastingdir

int main()
{
    Ak47 ak47;
    ak47.isim = "Ak47";
    goster(&ak47);
    
    Pistol pistol;
    pistol.isim = "Pistol";
    goster(&pistol);
    
    M1 m1;
    m1.isim = "M1";
    goster(&m1);
    
}

