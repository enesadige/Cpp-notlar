// C++ DİLİNDE KAPSÜLLEME

// eccapsulationu  yani kapsüllemeyi göreceğiz
// örneğin öğrenciyiz öğrenci belgesine ihtiyacımız var diyelim
// yetkiliye gideriz söyleriz istediğimizi yetkili kendi bilgileriyle giriş yapar sisteme
// ve belgeyi çıkartır size verir bu bir kapsülleme örneğidir
// burada kapsülleme yetkilinin kendisidir yani aracı var arada aracı olmasa kapsülleme gerçeli olma

//

#include <iostream>

//-------------------------------------------------------------------------------------
class Payment
{
private:
    
    public:
    float tutar;
    std::string paraBirimi;
    
    //yetkili kişi görevi gören giriş katmanı
    void setTutar(float t)
    {
       if(t >= 0) { tutar = t; }
       else { tutar = 0.1; }
    }
    
    void pay()  {  std::cout << tutar << " ödeme alındı"<< '\n';    }
};

//-------------------------------------------------------------------------------------
// burada tutar kısmı ve para biriminin kullanıcı tarafından doğrudan doldurulması tehlikeli olabili
// kullanıcı yanlış bir değer gönderebilir bunu kapsülleme ile önleyebiliriz
// bunu bu yüzden public değil private değer yapmalıyız
// bundan sonra da kullanıcı girişi için giriş katmanı sağlamamız lazım yani yetkili kişi

int main()
{
    int miktar;
    std::cout<<"para miktarını giriniz :";
    std::cin>>miktar;
    
    
    Payment pay;
    pay.setTutar(50.40);
    pay.paraBirimi = "tl";
    pay.pay();
    
}

