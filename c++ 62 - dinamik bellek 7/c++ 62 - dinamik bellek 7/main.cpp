//C++ DİLİNDE DİNAMİK BELLEK - 7

//SHARED_PTR
//bugünki konumuz shared_ptr
//biz heapta nesne oluşturmak istersek başına new diyoduk ve nesne oluşuyodu ama burda iş bitmiyo
//bir de iş bitince nesneyi silmemiz gerekiyo buraya kadar bu bir problem takip edilmeli
//bir de üç dört tane pointer bir nesneyi işaret edince nesne silinince pointerlar boş alana işaret ediyodu

//biz bir nesne için birden çok pointera ihtiyaç duyduk diyelim
//pointerlardan biri kendini de nesneyi de sildi diyelim geriye kalan pointerlar bize ait olmayan bir alanı ifade eder
//bu durumda bu sorunu çözmek için shared_ptr kullanırız

//shraed_ptr her yaratılan nesne için bir tane kontrol bloğu oluşturuyo ramde
//ve bu kontrol bloğu içinde bu nesneyi işaret eden kaç tane işaretci olduğunu burda sayı ile ifade ediyyo
//kontrol bloğu içinde referans sayacı ve kaynağı gösteren işaretci kısımı vardır
//referans sayacı pointer sayısını tutarken, kaynağı gösteren pointer bu nesnesnin gerçek bellek adresini tutar
//diğer iki pointerda artık normal pointer değil share_ptr olur

//share_ptr içinde de bir tane kaynağı gösteren işaretci ve bloğunu gösteren işaretci vardır
//bunlardan bloğunu gösteren işaretci de aslonda kontrol bloğunun yerini gösterir

//biz nesneyi süslü parantez içinde oluşturursak süslü parantez bitince nesne kaldırılıyo ve işaretcilerde kaldırılıyo
//bu şekilde başıboş pointerlar kalmamış oluyo bu şekilde de bellek sızıntısı engellenmiş oluyo
//bu da aslında c++ dilindeki garbage_collection işini görmüş oluyo olmama sebebi c++ da; hızı düşürmesi

//aşağıda main içinde share_ptr tanımladık artık daha sonra delete dememize gerek yok
//artık delete demeden nesneyi kendisi sildi
//main içindeki açıklama satırlarını oku

//heapda çalışmak istiyorsak eğer shared_ptr yi tercih etmeliyiz

//-----------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//-----------------------------------------------------------------------------------------------
class Silah
{
public:
    int d{}; //süslü parantez eklenince varsayılan değer ataması yapar
    
    Silah(){cout<<"oluştu\n";}
    ~Silah(){cout<<"bitti\n\n";}
    
};

//-----------------------------------------------------------------------------------------------
int main()
{
    //share_ptr tanımlaması
    shared_ptr<Silah> ptr = make_shared<Silah>();
    shared_ptr<Silah> ptr_iki = ptr;
    
    cout<<ptr->d<<endl;
    
    //blok içindeki nesnenin gerçek bellek adresi
    cout<<ptr.get()<<endl;
    
    //kaç işaretcinin nesneyi işaret ettiğinin sayısını almak için
    cout<<ptr.use_count()<<endl;
    
    
    
    
}
