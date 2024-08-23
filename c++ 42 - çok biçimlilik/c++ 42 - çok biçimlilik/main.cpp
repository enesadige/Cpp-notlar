
//Bu videoda bahsedeceğimiz şey "polymorphism" yani çok biçimlilik
//Biz bir silah sınıfı altında da Ak47 sınıfı oluşturduk
//Ak47 sınıfı aynı zamanda bir silah sınıfı, silah sınıfı da aynı zamanda bir ak47 sınıfı bu çok biçimliliktir
//anlamak için : Babamız evde babamızdır işte bir çalışandır okula gittiğinde öğrencidir farklı yerlerde farklı aksiyonlardır
//Yani silah ak47 iken farklı pistol iken farklı farklı şeyler olabiliyor

//baktığımızda ates() fonksiyonu için biz silah sınıfı içine bir çıktı yazdık ve fonksiyona silah ptr parametresi ekledik fakat;
//ak47 gönderince nesne ak47 gibi davrandığından ak47 içindeki çıktıyı yazdı ekrana

//çok biçimlilik iki türdür ; bir tanesi derleme zamanı çok biçimlilik, diğeri de çalışma zamanı çok biçimlilik
//ikisi arasında iki fark var
//derleme zamanı çok biçimlilik : overloadinge benzer yani iki aynı isimde farklı parametreli fonksiyona benzer
//yani burada derleme zamanı hangi metodun kullanılacağına karar veriliyo
//çalışma zamanı çok biçimlilikte ise : baktığımızda ates() metodu silah ve ak47 sınıfı içerisinde var fakat derleyici;
//çalışmadan hangisi çağırılacak bilmiyo çalışmadan önce belli değil buna da çalışma zamanı çok biçimlilik denir

//bunun içinde yani çok biçimlilik içinde virtual fonksiyonu silah sınıfı içinde kullanmak zorundayız
//zaten o olmasa çok biçimlilik de olmaz

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
    
    virtual void ates()
    {
        cout<<"tak tak ";
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
    
    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);
}




