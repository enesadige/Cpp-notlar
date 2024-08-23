// C++ DİLİNDE NESNELERİ FARKLI TÜRDE ELE ALMA YANİ CAST İŞLEMİ

// cast işlemi bir türü başka bir türe dönüştürme işlemi
// biz buna neden ihtiyaç duyarız diye bakarsak;
// örneğin karakter değişkeni oluşturup içine "10" değerini yazalım
// bu string bir ifade olur ve biz bunla matematiksel işlem yapamayız int değerine dönüştürmeliyiz
// cast işlemi kısaca aralarında bir ilişki bulunan nesneler birbirine dönüşebilir
// burada ilişki dediğimiz şey aslında miras alma olarak da adlandırılabilir
// yani Ak47 Silaha, Silahda Ak47 nesnesine dönüşebilir

// iki türlü dönüşüm vardır birincisi upcasting yani yukarı doğru dönüşümdür
// ikincisi de downcasting yani aşağı doğru dönüşümdür
// burada Ak47 yi silaha dönüştürmek upcastingdir
// silahı Ak47 nesnesine dönüştürmek de downcastingdir
// upcasting çok tehlikeli değildir çoğu zaman hata almayız
// fakat downcasting baya risklidir
// mesela ak47 nesnesini pistol nesnesine çevirmek hata almamıza neden olur
// dönüşüm ifadesi yanlış bir ifadedir sadece derleyiciye bir şeyi farklı şekilde ele al deriz

// ram kısmına baktığımızda daha önce ele almıştık pointer oluşunca 0.adresi alırdı
// biz derleyiciye diyoruzki sana bir bellek adresi vericem bu bir Ak47 nesnesi adresi
// derleyici bu bellek adresine bakıp diyicekki bir bayt sonrasında mermi kapasitesi bilgisi alırım
// derleyici bu yol haritasını biliyor bunu verdiğimiz sınıfa göre biliyo
// derleyici şunu da biliyor 6. bellek adresinde de bir M1 nesnesi bilgileri başlıyor
// biz diyoruzki sana bir bellek adresi vericem bu adresi M1 türündeki nesnenin adresi
// bellekte buraya bakarak M1 nesnesinde nası bir yol haritası izleyeceğini öğrenir

// biz sana Ak47 türünde bellek adresi vericem deyip aslında farklı bir bellek adresi veriyoruz
// aslında cast dediğimiz işlem tam olarak bu zaten hatalar da tam bu noktada ortaya çıkıyo
// aşağıda örneği kodlarla yazılı kodlara bak...


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
//biz burada silah türünde bellek vericem diyip Ak47 türünde verdik
//burada ilk üç değer için silahtan gelme olduğundan bunları alır
//bunlara atama vesaire de yapabiliriz ilk üç mirastan gelen alana erişebiliriz
//fakat diğer değerlere erişemeyiz çünkü Silah sınıfında bu değerler yok
//yani silahPtr->seriTek = ...; satırı yazarsak hata alırız
//bu upcasting işlemidir

int main() {
    
    Ak47 ak47;
    ak47.isim = "ilk isim";
    
    Silah *silahPtr = &ak47;
    silahPtr->isim = "ikinci isim";
    
    std::cout<<ak47.isim<<'\n';     //isim "ikinci isim" olarak değiştirildi
    
}
