
//şimdiki konumuz ise "OVERRIDE"
//aslında biz bunu daha önce kullandık
//aralarında miras ilişkisi bulunan sınıflar bir üst sınıfın metodunu ezebilir
//yani ben kendi içimdekini yapıcam demesidir miras alan sınıfın
//aslında baktığımızda alt sınıflar kendi içindekini çalıştırdı silah sınıfındaki çalışmadı

//ikisini de kullanmak istersek diyelim yani hem üst hem alt sınıftaki çalışsın dersek
//alt sınıftaki çağırılan metodun süslü parantezleri içine şu ifadeyi yazarız >> Sİlah::ates();
//bunu da şunun için kullanırız şimdi biz silah sınıfındaki ates() metodu içine 100 satır kod yazdığımızı düşünelim
//onu ezince o 100 satır kod aslında çöp olmuş olucak gidip ak47 sınıfı içindeki metoda bu kodları tekrar yazmamak için kullanırız
//zaten object orientedda ki mantıkda budur az kod yazdırmak üzerinedir tüm mantıklar

//fakat aşağıdaki gibi bir fonksiyon yazıp ona da pointer olarak bir parametre girersek
//ve gönderdiğimiz pointer cinsini silah sınıfından gibi yazarsak
//biz fonksiyon içine ak47 nesnesi pointerı da göndersek sadece silah sınıfındaki ates(); çalışacaktır
//çünkü derleyici o fonksiyonda bir silah nesnesi aldığını zannediyo
//bunu engellemek içinde silah sınıfındaki ates(); fonksiyonu önüne "virtual" yazdık
//böyle yapınca override gibi çalıştı geri yani her ikisini de yazdı


#include <iostream>
#include <string>
using namespace std;
//---------------------------------------------------------------------------------
class Silah
{
protected:
    int deger;
    
public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;
    
    virtual void ates() //tam buraya "virtual" yazdık
    {
        cout<<"tak tak \n";
    }
    
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
      
       cout<<"bom bom "<<'\n';
    }
};
//---------------------------------------------------------------------------------
class Pistol : public Silah
{
    public:
    int kurmaKoluDeseni;
    
    void ates()
    {
        
        cout<<"bam bam "<<'\n';
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
        Silah::ates();
        cout<<"bum bum "<<'\n';
    }
};
//---------------------------------------------------------------------------------

void atesEt(Silah* silahPtr)
{
    silahPtr->ates();
}

//---------------------------------------------------------------------------------

int main() {
    
    Ak47 ak47;
    Pistol pistol;
    M1 m1;
    
    ak47.ates();
    m1.ates();
    pistol.ates();
    
    atesEt(&ak47);
    
}




