// C++ DİLİNDE GİZLİ THİS PARAMETRESİ

// biz her nesne için bir tane fonksiyon, method kod hafızasına yerleştirilmez demiştik
// bunun yerine o sınıf için bir tane method sınıf adresine yerleşir tüm nesneler kullanır demiştik
// bu methodların çağırılmasına bakarsak aşağıdaki tablolarda;
// alttaki tablo "stack" kısmı üstteki tablo ise "kod hafızası" kısmı
// bunların ikiside aslında ramin bölümleri
// biz önce Ak47 türünde bir nesne oluşturusak ikinci tabloda adreslerde Ak47 türünde nesne oluşur
// bir işlem daha yapılıcak bunda da gidiyo birinci tablodaki ikinci adrese metod ekliyo
// çalışabilmesi için nesne ile herhangi bir şeyin
// biz bir sınıf tanımladıysak fakat nesne oluşturmazsak birinci tabloya eklenmez
// yani nesnelenmezsek kod hafızasında metodları oluşmuyacaktır

// peki kod hafızasındaki satırda ates(Ak47* This); dediğinde nolacak
// hangi metodu çağıracağını biliyo
// çünkü kod hafızasında metodu oluşturduğunu derleyici bilecek
// oraya gittiğinde görecek ki bu metod bir parametre bekliyo this adında
// bunu görünce geri gidicek bu nesneye adresine bakıcak bakıcak 0.adres
// bunu alıcak götürücek ve kod hafızasında this yerine koyacak
// bundan sonra da this parametresini kod içinde kullanınca ak47 nesnesini kullanıcaj
// başka bir nesneyi daha aynı sınıftan oluştursaydık onun bellek adresine bakıp onu getireckti
// ne zaman ak47.ates dersek o zaman gidip ak47 bellek adresini this parametresi yerine koyacaktı
// örneği aşağıda kodlarda mevcut

// KOD HAFIZASI
// ADRES            DEĞER
// X0f0             ates(pistol* This);
// X0f01            ates(Ak47* This);
// X0f02            ates(M1* This);
//...

// SINIF        ALT SINIF       ADRES       DEĞER
// AK47         SİLAH           0           std::string isim;
// AK47         SİLAH           1           int mermiKapasitesi;
// AK47         SİLAH           2           std::string renk;
// AK47                         3           bool seriTek;
// AK47                         4           int kayisUzunlugu;
// AK47                         5           bool durbun;
//...

//------------------------------------------------------------------------------------------

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
    
    void atesEt(std::string isim)  // burada gizli parantez içinde "Ak47* This" var
    {
        this->isim = isim;
    }
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
// burada biz görmesekte ak47 sınıfında örneğin void ates et fonksiyonunda;
// ates() parantezi içinde gizli bir "Ak47* this" adında bir parametre var
// bizim oluşturmamıza izin vermez çünkü kendi oluşturucak
// fonk içinde bir şey atarken this yazabiliriz ismi yerine ör: this->isim = "deneme"; gibi

// şöyle olsun bir örnek daha verelim
// biz void fonksiyonuna isim adında parametre isteyelim
// bir de silah sınıfından gelen isim değişkeni var
//biz fonk içine isim = isim; yazarsak sınıftan gelene mi inputu atayacak tersini mi
// kafa karışıklığı olur bunu kaldırmak için ortadan input yerine this yazarız
// yani şöyle yazarız this->isim = isim;
//---------------------------------------------------------------------------------

int main() {
    
    Ak47 ak47;
    ak47.atesEt("deneme");
    std::cout<<ak47.isim<<'\n'; // burada hatasız deneme ismini ak47 ismine atadı bu şekilde
    
}



