// C++ DİLİNDE NESNE REFERANSI VE İŞARETLEME

// biz ak47 adında bir nesne oluşturduğumuzda biliyoruzki bu nesne silah sınıfından miras alır
// yani aslında ak47 nesnesi yaratılınca bir tane de silah nesnesi yaratılır
// peki burda oluşturduğumuz ak47 pointerına;
// silah için bellekte ayrılan adreslerin ilki atanır
// burada silahtan miras aldığı için Ak47 sınıfı nesnesi için ayrılan belleğin;
// ilk kısmı aslında silah sınıfı için oluşturulmuştur

//BELLEK İÇİN
//AŞAĞIDAKİ ŞEKİLDE BİR TABLO OLUŞUR
//Ak47 *ak47ptr = &ak47 YAZDIĞIMIZDA ADRESİ SIFIR "0" OLAN DEĞER ATANIR

//İSİM      ALT İSİM        ADRES       DEĞER
//Ak47      Silah           0           std::string isim;
//Ak47      Silah           1           int mermiKapasitesi;
//Ak47      Silah           2           std::string renk;
//Ak47                      3           bool seriTek;
//Ak47                      4           int kayisUzunlugu;
//Ak47                      5           bool durbun;



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
    //
    Silah() { std::cout<<"silah oluştu"<<'\n'; }
    
    ~Silah() { std::cout<<"silah oluşumu bitti"<<'\n';}
    //
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
    
    //----------------------------------------------------
    //ek bir bilgi referans için
    //biz burada denemeyi sayi1 e referans atadık aslında iki ismi olan değişken gibi
    //yani biz burada sayi1, deneme, deneme2 ye ne işlem yaparsak üçüne de geçerli olur
    //bu durum sınıflar içinde böyle
    int sayi1 = 10;
    int &deneme = sayi1;
    int &deneme2 = sayi1;
    deneme = 5;
    std::cout<<"referans için örnekte üçünün yeni değeri :"<<deneme<<'\n';
    sayi1 = 50;
    std::cout<<"referans için örnekte üçünün yeni değeri :"<<deneme<<'\n'<<'\n';
    //----------------------------------------------------
    
    Ak47 ak47;
    ak47.isim = "ilk isim";
    std::cout<<"ak47'nin ilk ismi :"<<ak47.isim<<'\n';
    
    Ak47 *ak47Ptr = &ak47;  //int *ak47Ptr desekte olur fakat bu kullanım ilkeldir
    std::cout<< "nesnenin bellek adresi :" << ak47Ptr <<'\n';
    
    Ak47 &ak47Ref = ak47;   //burada ak47 başına gelenler ak47ref içinde geçerli olacak
    ak47Ref.isim = "ikinci isim";
    std::cout<<"ak47'nin ikinci ismi :"<<ak47.isim<<'\n';
    
}
