// C++ DİLİNDE NESNE BELİRTEÇLERİ NELERDİR ?

// c++ dilinde erişim belirteçleri üç tanedir : public, private, protected
// bunların amacı aslında güvenliktir mesela private ile değişkeni gizleriz
// ve biz githuba yükleyeceksek örneğin her şeye müdahele edilmemesi için kullanabiliriz
// ve bu şekilde kodları kullanan kişi ona bıraktığımız alan kadarını kullanabilir
// aslında yazılımın ana kısmı bize görev olarak verilmiş olsun geri kalanı da başkaları devam etsin
// detaylar için başkası çalışırken yanlışlıkla kodlarınız değiştirilmesin diye ya da
// diğer kısmı yapanlara güvenli alan sunmak içindir

// public herkese açık demektir, private ise sınıfa özel, gizli demektir
// protected miras alma demektir ama şu an onla işimiz yok
// aşağıda örnekleri verilmiştir

#include <iostream>
#include <string>

//---------------------------------------------------------------------
class Payment
{

protected: // bu dışardan erişilemez değişkenler demektir
    std::string hasCode = "123456789";
    void sorgula ()
    {
        std::cout <<
          "veriler bankara gönderiliyor. \nparabirimi : " + this->paraBirimi
        + "\nTutar :" + this->tutar
        + "\nkod :" + this->hasCode<< '\n';
    }

public: // bu dışardan erişilebilir değişkenler demektir
    std::string paraBirimi = "tl";      //std::string, string değişkeni tanımlamak için
    std::string tutar = "0.0";
    
    void pay()
    {
        sorgula();
    }
};

//---------------------------------------------------------------------
// protected örneği aşağıdadır yani test sınıfı payment sınıfından miras alıyor
// yani daha önceki sınıfta protected cinsli değişkenler erişebilir
// ama main içinde erişilemez yani denetimli private gibidir

class Test:public Payment
{
public:
    void merhaba()
    {
        Test::hasCode = "22290078";
    }
};

//---------------------------------------------------------------------

int main() {
    
    Payment payment;
    payment.paraBirimi = "tl";
    payment.tutar = "50.6";
    payment.pay();
    
}
