// C++ DİLİNDE SANAL METOTLAR

// burada biz silahlara ses eklemek istiyoruz diyelim
// zaten sınıfların içindeki voidatesEt fonksiyonu içine aşağıda ses ekledik
// fakat biz bunları tek tek eklemek yerine bir fonksiyonla halletmek isteriz daha kısa diye
// biz burada upcasting yaptığımızdan silah sınıfı olarak nesneyi göndereceğinden ;
// fonksiyon nesnenin sınıfındakini değil de Silah sınıfındaki fonksiyonu çağırır hep
// bunu düzeltmenin yollarından biri de sanal metotlardır

// bunun için de Silah sınıfındaki fonk. önüne "virtual" yazarız
// bunu yapınca ates() yanındaki süslü parantezleri silmemiz gerekiyor içi boş olmalu
// daha sonrasında = 0 deriz >> virtual void ates() = 0; gibi

// biz main fonk içinde ak47 türünde bir nesne de göndersek upcasting işlemi yaptık
// yani silah sınıfından bir nesne gibi yolladık
// ve derleyici hemen gidicek ve silah sınıfındaki void fonksiyonu çağıracak
// biz bunu istemiyoruz gitsin ak47 içindeki void fonk çalışsın istiyoduk ak47 gönderince
// bunun içinde "virtual method" yaptık
// biz silah sınıfına giripte ates() başına virtual yazdığımız anda;
// silah nesnesi içinde _vPtr adında bir tablo oluşturuluyo bu bir tablo aslında
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
    
    virtual void ates() = 0; //******* tam bu kısım konumuzdaki

};
//---------------------------------------------------------------------------------
class Ak47 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    bool durbun;
    
    void ates()
    {
        std::cout<<"bom bom "<<'\n';
    }
};
//---------------------------------------------------------------------------------
class Pistol : public Silah
{
    public:
    int kurmaKoluDeseni;
    
    void ates()
    {
        std::cout<<"bam bam "<<'\n';
    }
};
//---------------------------------------------------------------------------------
class M1 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    int KurmaPozisyonu;
    
    void ates()
    {
        std::cout<<"bum bum "<<'\n';
    }
};
//---------------------------------------------------------------------------------
// ateş sesi için
//öncelikle parametreyi upcasting işlemi ile silah sınıfından bekleyelim
void atesEt(Silah* silahPtr)
{
    silahPtr->ates();
    
}

//---------------------------------------------------------------------------------

int main() {
    
    Ak47 ak47;
    Pistol pistol;
    M1 m1;
    
    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);
}



