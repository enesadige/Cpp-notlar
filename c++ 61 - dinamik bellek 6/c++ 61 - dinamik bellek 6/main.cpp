//C++ DİLİNDE DİNAMİK BELLEK YÖNETİMİ - 6

//burada öncelikle bellek sızıntısına örnek vereceğiz
//biz main içinde delete ile nesneyi silsekte a ve b olarak oluşturduğumuz nesnedeki değişkenler silinmiyor
//çünkü nesne farklı yerde içindeki değişkenler farklı yerde tutuluyo
//bunu çözmek için de yıkıcı metod içine yazıyoruz
//bu sayede yıkıcı metodun gerekli kullanımını görmüş olduk

//-----------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//-----------------------------------------------------------------------------------------------
class Silah
{
public:
    int* a = nullptr;
    int* b = nullptr;
    
    Silah(int birinci_sayi, int ikinci_sayi)
    {
        a = new int;
        b = new int;
        //artık yukarıdaki tanımladığımız a ve b girilen parametrelere işaret edecek
        *a = birinci_sayi;
        *b = ikinci_sayi;
        
        cout<<"oluşum başladı\n";
    }
    
    
    ~Silah()
    {
        //bellek sızıntısını önlemek için alttaki satırlar;
        delete a;
        delete b;
        
        cout<<"oluşum bitti\n\n";
    }
};

//-----------------------------------------------------------------------------------------------
int main()
{
    Silah* silah = new Silah(10,20);
    
    delete silah;
    
    
    
    
}

//-----------------------------------------------------------------------------------------------
