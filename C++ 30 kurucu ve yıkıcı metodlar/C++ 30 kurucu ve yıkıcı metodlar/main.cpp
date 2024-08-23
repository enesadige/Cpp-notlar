// C++ DİLİNDE KURUCU VE YIKICI METODLAR

// constructor : kurucu demek, destructor : yıkıcı metodu demektir
// kurucu metod sınıftan bir nesne yaratıldığında otomatik çağırılan bir metoddur
// yıkıcı metod ise nesne yok edildiği zaman çalışan bir metoddur
// biz oluşturmazsak derleyici otomatik oluşturu oluşturursak müdahele etmez

#include <iostream>
#include <string>

//----------------------------------------------------------------------
class Payment
{
    public:
    float tutar;
    std::string paraBirimi;
    std::string hasCode;
//--------------------------------------------------------------------------------------------------
//YAPICI METODLAR
    //------------------------------------------------------------
    //yapıcı metoddur nesne oluşturulunca otomatik çağırılır
    //bunun içine bir değişken tanımlarsak parantez içine parametre göndermek içindir
    //bunu yaptığımızda hata almamak için default bir yapıcı metodda oluşturmamız lazım
    //bi altına da default yapıcı metod tanımladık parametre almayan
    //birden çok yapıcı metod oluşturabiliriz
    
    Payment(bool f,std::string a)
    {
        tutar = 1.2;            //hiç bir değer girilmezse diye varsayılan değer
        paraBirimi = "tl";      //varsayılan değer olarak oluşturduk
        std::cout<<"yapıldı"<<'\n';
    }
    //------------------------------------------------------------
    //burada şunu yapıyoruz sadece boolean parametre gönderilirse bu metod çalışsın
    //bool ve string parametre gönderilirse üstteki hiç gönderilmezse alttaki çalışsın diyoruz
    
    
    Payment(bool f)
    {
        tutar = 1.2;            //hiç bir değer girilmezse diye varsayılan değer
        paraBirimi = "tl";      //varsayılan değer olarak oluşturduk
        std::cout<<"başladı"<<'\n';
    }
    
    //------------------------------------------------------------
    
    //default yapıcı metod burası
    Payment() {}
    
    //------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//YIKICI METODLAR
    //------------------------------------------------------------
    //sınıflar aynı isimde olacak tek bir farkı var "~" önünde şu işaret olmalı
    //bu işlem stackte oluşturuluyo
    //yani işler bitince main fonk içinde bunlar kaldırılır
    //biz main içinde pay ile oluşturduğumuz nesne ile ilgili şeyleri süslü parantez içine alırsak;
    //süslü parantez bitince nesne çoktan kaldırılmış olur devamında
    //biz kaldırılmasını istemezske dinamik bellek kullanmamız lazım
    //yani sınıftan bir nesne tanımlarken önüne "new" eklemeliyiz ör;
    //Payment new pay(true, "merhaba); gibi
    
    ~Payment()
    {
        std::cout<<"bitti"<<'\n';
    }
    
//--------------------------------------------------------------------------------------------------

    void pay()
    {
        std::cout<<"Ödeme alındı"<<'\n';
    }
    //------------------------------------------------------------
};
//----------------------------------------------------------------------

int main() {
    
    {
        Payment pay(true, "merhaba");
        pay.tutar = 10.20;
        pay.paraBirimi = "tl";
        //pay.hasCode = "3658796";
        pay.pay();
    }
    
    
    
}

