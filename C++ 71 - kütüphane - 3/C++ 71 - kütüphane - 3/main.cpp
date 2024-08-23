//C++ DİLİNDE KÜTÜPHANE 3 - FSTREAM KÜTÜPHANESİ

//bu kütüphanede aslında basit olarak dosya işlemleri gerçekleştirmede işimize yarıyo
//dosya oluşturan ilk komutumuz ofstream komutudur
//dosya açıldı mı kontrol etmek için boolean dönüş yapan "is_open" komutunu kullanırız
//daha sonra biz dosyaya yazı yazmak için bir string ifadesini şöyle yaparız >> dosya_adı << string_degiskeni;
//ama biz heapta çalıştığımızdan şöyle yaptık << *dosya << *yaz;
//daha sonra dosyayı kapatmak için >> dosya.close

//--------------------------------------
#include <iostream>
#include <string>
#include <fstream> //burda ekledik
using namespace std;

//--------------------------------------



//--------------------------------------
int main()
{
    
    string* yaz = new string(); //pointer ile string oluşturma
    
    //aşağı dosya oluşturma satırı biz bir de ek olarak pointerlar ile yapıcaz
    //burada en son parantez içine sadece "dosya.txt" yazarsak dosya adını koyarız
    //eğer aşağıda yazan gibi koyarsak konumunu da belirtmiş oluruz
    ofstream* dosya = new ofstream("/users/enesdasci/Desktop/dosya.txt");
    
    //dosya açıldı mı kontrol etmek için aşağıdaki satırı kullanırız, pointerla çalıştığımızı burada unutma
    if(dosya->is_open())
    {
        cout<<"dosya içine ne yazmak istersiniz :";
        getline(cin, *yaz);  //pointer olduğundan "*" koyduk
        *dosya << *yaz;
        dosya->close();  //daha sonra dosyayı işi bitirip kapatmak için, "->" ise pointer olduğundan
    }
    
    
    
    
}




//--------------------------------------
