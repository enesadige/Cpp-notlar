// C++ DİLİNDE REFERANS VE POİNTERIN SINIFLARDA KULLANIMI

// notlar main fonksiyonu içinde

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
    
    Silah() { std::cout<<"silah oluştu"<<'\n'; }
    
    ~Silah() { std::cout<<"silah oluşumu bitti"<<'\n';}
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
//referans ve pointerı göndermek için oluşturuldu
//parantez içini gördüğümüzde bilmeliyizki bu bizden referans isteyecektir
//burada referansta göndersek ak47 nesnesinin kendisini de göndersek hata almayız
//fakat bir de pointer bekliyorsa burada sadece nesneyi yollayarak halledemeyiz
//mecburen pointer göndermek zorundayız

void test(Ak47 &ak47, Ak47 *ak47ptr)
{
    
};

//---------------------------------------------------------------------------------

//yani sonuç olarak pointerlarla erişmek istersek "." yerine "->" kullanırız
//fonksiyona referans ya da pointerı göndermek için önce void adında bir test fonk. oluşturduk


int main() {
    
    Ak47 ak47;
    ak47.isim = "test";
    
    Ak47 *ak47ptr = &ak47;      //burada biz bir pointer tanımladık
    std::cout<<ak47ptr<<'\n';   //burada da yazdırmak için yine -> kullandık
    
    ak47ptr->isim;              //burada normaldeki gibi nokta kullanmak yerine "->" kullanıcaz
    std::cout<<ak47ptr->isim<<'\n';
    
    ak47ptr->atesEt();          //aynı şekilde fonksiyonu çağırmak için "->"kullanırız
    
    Ak47& ak47Ref = ak47;       //burada da referans oluşturduk
    ak47Ref.isim = "test2";
    std::cout<<ak47.isim<<'\n'; //testin başarıyla çalıştığını gösterir
    
    test(ak47, &ak47);
    
    
}
