//başka karşımıza çıkan yerler de vardır örneğin parametre olarak kullanılabilir
//fakat bu gelen parametre üzerinde hiç bir değişiklik yapılmasını istemiyorsak parametre tanımında başa const demeliyiz

//bir görebileceğimiz yer daha vardır
//bunda da biz parametre olarak yollarken başa değil de ortaya const yazarız
//böyle yapınca biz parametrenin değeriyle değişiklik yapabiliriz fakat
//bu pointer olarak yollanan parametreye başka bir nesnesin pointerı haline getiremeyiz

//sonuç olarak yazılabileceği her yere bi alt satırda örnek vericem
//const int const * get(const Silah* const ptr) const {......}
//bu yerlere yazılabilir

//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;
//---------------------------------------------------------------------------------------------------------

class Silah
{
private:
    int deger = 10;

public:
    
    int* get(const Silah* ptr)
    {
        // ptr->deger = 50; yazamayız çünkü const olarak geldi
        return &deger;
    }
    
    int* get_diger(Silah* const ptr)
    {
        Silah sl;
        // ptr = &sl; yazamayız çünkü adres const lu
        return &deger;
    }
   
    int getOku()
    {
        return deger;
    }
    
};
//---------------------------------------------------------------------------------------------------------
int main()
{
    Silah silah;
    silah.get(&silah);
    
    cout<<silah.getOku()<<endl;
}
