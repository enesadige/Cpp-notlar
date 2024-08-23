// C++ DİLİNDE TÜREMİŞLER ARASI DÖNÜŞÜM

// sağdan sola dönüşümde mümkündür fakat çok risklidir
// C++ dilinde mümkün değildir derler fakat bu dilde her şey mümkündür ama yanlıştır

// biz burada bir void fonksiyon tanımlayıp parametre olarak ak47 pointer istedik
// fakat bir pistol türü pointerını parametre olarak yolladık diyelim
// biz derleyiciye bana karışma dersek uyarı verdiğinde burda sağdan sola cast yapmış olıuruz
// daha sonra fonksiyona gidilince fonksiyon bir ak47 nesnesi sandığından işleme başlar
// ve burada hata alırız çünkü pistolda fonk içindeki istenilen değer yok
// aslında ak47 içinde 5.adresteki değer altıncı değer yani dürbün
// fonk gidicek (6dan başlıyo) 11.adresteki değer neyse onu okuyacak ve bu değer başka bir şeyin
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
void test(Ak47 *ak47ptr)
{
    std::cout<<ak47ptr->durbun<<'\n';
}

//---------------------------------------------------------------------------------
//program çalışınca hata vermese de hatalı değer yazdıracaktır

int main() {
    
    Pistol pistol;
    
    Ak47 *ak47ptr = (Ak47*) &pistol;
    
    test((Ak47*)&pistol);
    
}

