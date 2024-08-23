//C++ DİLİNDE DİNAMİK BELLEK YÖNETİMİ - 5

//bu bölümde aslında c dilindeki malloc gibi komutların normalde çalışıp;
//sınıf nesneleri üzerinde sıkıntı yaratmasını ele alıcaz

//ek bir bilgi typedefinition nedir main içinde açıkladım



//--------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//--------------------------------------------------------------------------------------------
class Silah
{
public:
    Silah(){cout<<"oluştu\n";}
    ~Silah(){cout<<"kaldırıldı";}
};

//--------------------------------------------------------------------------------------------
int main()
{
    //new'e benzer malloc kullanımı heap tarafında
    //türünü malloc önüne parantezle belirttik
    //malloc içine sizeof(int) yazma sebebimiz : int farklı sistemlerde farklı boyutta
    int* a = (int*)malloc(sizeof(int));
    
    //değer atamak için
    *a = 10;
    
    //silmek için
    free(a);
    
    //----------------------------
    
    //bir pointerı sadece tanımlarsak başı boş olmaması için şunu yaparız
    //bu sen boş bir yeri göster demektir
    int* b = NULL;
    
    //sonradan yine normal tanımlama yapabiliriz
    b = new int;
    
    //değer atama
    *b = 20;
    
    //----------------------------
    
    //typedef nedir ?
    //biz aslında bir veri türünü başka isimde de kullanmak için yaparız
    //typedef yazarız sonra türü yazarız sonra ismi yaparız
    //aşağıdaki satır sayesinde artık isim demek int demek gibi oldu
    typedef int isim;
    
    isim c = 10;
    
}

