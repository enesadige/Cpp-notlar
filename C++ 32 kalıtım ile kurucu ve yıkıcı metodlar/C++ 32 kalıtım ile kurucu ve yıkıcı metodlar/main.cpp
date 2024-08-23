// C++ DİLİNDE KALITIMLA BERABER KURUCU VE YIKICI METODLARIN KULLANIMI

// bizim burada silahlara silah sınıfı aracılığıyla renk değişkeni eklemek istersek
// biz normalde miras alma ile çalıişmasaydık hepsine tek tek eklememiz lazımdı
// silah sınıfı içine bir tane renk değişkeni ekleyerek otomatik hepsine yapabiliriz

// miras almalı yapıda kurucu metod için direkt içine normal yazıyoruz
// daha sonra diğer classlardan nesne oluşturulunca miras aldıkları için ana classın ;
// kurucu metodu da çalışır
// genelde miras alınan sınıfın içinde protected bir değişken tanımlayınca
// normal miras alındığında bu protected değişkende kullanılamaz
// fakat bu protected değişkene erişilebilir örneğin classlar içindeki void ateset fonkda;
// değer değişkenine erişebiliriz ve değer atıyabiliriz
// ama main içinde bu deger değişkenine ulaşıp ona bir değer atayamayız;
// main içinde ak47.deger = ...; yazarsak hata alırız
// ama diğer sınıflar kendi sınıfları içinde ulaşabilir ve kullanabilir
// miras alma durumunda yani miras alan sınıf kullanabilir fakat main fonk. kullanamaz


#include <iostream>
#include <string>

//---------------------------------------------------------------------------------
//miras alma için oluşturulan sınıf
class Silah
{
protected:
    int deger;

public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;       //yeni özellik tanımı
    
    Silah()
    {
        std::cout<<"silah oluştu"<<'\n';
    }
    
    ~Silah()
    {
        std::cout<<"silah oluşumu bitti"<<'\n';
    }
};

//---------------------------------------------------------------------------------
class Ak47 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    bool durbun;
    
    Ak47 ()
    {
        std::cout<<"ak47 oluşturuldu"<< '\n';
    }
    
    ~Ak47()
    {
        std::cout<<"ak47 oluşumu bitti"<<'\n';
    }
    
    void atesEt() 
    {
        deger = 20; //protected değişkene eriştilk
    }
};
//---------------------------------------------------------------------------------
class Pistol : public Silah
{
    public:
    int kurmaKoluDeseni;
    
    Pistol ()
    {
        std::cout<<"Pistol oluşturuldu"<< '\n';
    }
    
    ~Pistol()
    {
        std::cout<<"Pistol oluşumu bitti"<<'\n';
    }
    
    void atesEt() {}
};
//---------------------------------------------------------------------------------
class M1 : public Silah
{
    public:
    bool seriTek;
    int kayisUzunlugu;
    int KurmaPozisyonu;
    
    M1 ()
    {
        std::cout<<"M1 oluşturuldu"<< '\n';
    }
    
    ~M1()
    {
        std::cout<<"M1 oluşumu bitti"<<'\n';
    }
    
    void atesEt() {}
};

//---------------------------------------------------------------------------------
//burada sınıfların içine miras olarak "Silah" sınıfı eklediğimizden program başlayınca
//Silah sınıfındaki yapıcı metodda otomatik çalışacaktır
//çağırılmasa bile diğer miras alan sınıflar çağırıldığından dolayı çalışacaktır

int main() {
    
    {
        Ak47 ak47;
        ak47.isim = "Ak47 yeni dizayn";
        ak47.renk = "beyaz";            //yeni tanımlanan özelliğe erişebildik
    }
    std::cout<<'\n';
    {
        M1 m1;
        m1.isim = "m1 çöl dizaynı";
    }
    
    
}
