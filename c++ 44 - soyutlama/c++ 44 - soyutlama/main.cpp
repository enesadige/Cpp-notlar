//"ABSTRACTION" yani soyutlama
//bu sınıfların kısaca kendisinden miras alan sınıfların içerisine bir metodu yazmak zorunda bırakmadır
//ama amaç sadece bu değil biraz daha soyutlamaktır

//biz şimdi kedi köpek gibi sınıflar tanımladık içine de fonksiyon yazdık hepsinin ama başına public mi private mi ne olduğunu yazmadık
//yazmayınca derleyici onu direkt private gibi algılar

//fakat biz hepsine bu şekilde tek tek yazmak istemiyoruz diyelim biz az yazsakta kopek.sescal(); gibi
//bunlar yerine örneğin 100 satır kod olabilirdi ve biz main içinin böyle karmaşık durmasını istemeyiz
//fakat burda da parametre yollamamız gerektiğinden  her sınıf için ayrı mı tumsescal() fonksiyonu yazıcaz >> hayır
//bunun içinde bir base class oluşturup diğer hayvan sınıflarının bu sınıftan miras almasını sağlamalıyız
//bunun içinde aslında bir upcasting işlemi yapacağız
//şimdi base class içindeki fonksiyonu da "virtual" şekle çevirmeliyiz

//fakat şimdi yeni bir miras alan sınıf oluşturup onun içine de sesCal(); yazılması gerekirken unutulursa...
//bunun içinde base class içindeki metoda {..ifadeler..} yazmak yerine viod fonk.adı() = 0; yazmalıyız
//bunu yazar yazmaz base classımız bir soyut sınıf olur
//artık biz herhangi bir miras alan class içine base içinde virtual yaptığımız fonksiyonu yazmazsak hata alırız
//yani ben fare classı içine eğer sesCal() adlı bir fonksiyon tanımlamazsam hata verir çalışmaz
//biz burda soyutlama yaptık yani void tumSesCal() fonksiyonunu diğer classlardan soyutladık
//buradaki örnek çok basit fakat geniş ve büyük perogramlarda bu işin değerini daha net bir şekilde görebiliriz

//eğer bir sınıf abstract bir sınıftan miras aldıysa ve bu miras alma neticesinde
//miras aldığı sınıfını içerisinde doldurulması gerekli olan virtual metodu override etmezse yani ezmezse;
//eğer ezmezse o miras alan sınıfta bir soyut sınıfa dönüşür
//ve bu soyut sınıflardan bir nesne oluşturamayız derleyici izin vermez hata alırız
//zaten soyut sınıfların amacı nesne oluşturmak değil diğer sınıfları yönetmektir
//soyut sınıflarda sadece metodlar değil değişkenlerde yer alabilir tanımlanabilir
//fakat soyut sınıf olması için içinde kesinlikle bir virtual fonk yazılıp "=0" yapılmalı

//bir de interfaceler vardır bunlarla soyut sınıflar birbirine çok yakındır aralarında küçük bir fark vardır:
//soyut sınıflarda değişken tanımlanabilir ama içerisinde hiç bir değişken yoksa o bir "interface" dir arasındaki fark budur






//--------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//--------------------------------------------------------------------------------------------------------
class Hayvan
{
public:
    virtual void sesCal() = 0;
};
//--------------------------------------------------------------------------------------------------------
class Kopek : public Hayvan
{
public: //yazmazsak varsayılan değer gibi hiç bir şey yazılmayınca burada gizli bir "private:" ifadesi olur
    void sesCal()
    {
        cout<<"hav hav\n";
    }
};
//--------------------------------------------------------------------------------------------------------
class Kedi : public Hayvan
{
public:
    void sesCal()
    {
        cout<<"miyav\n";
    }
};
//--------------------------------------------------------------------------------------------------------
class Ordek : public Hayvan
{
public:
    void sesCal()
    {
        cout<<"vak vak\n";
    }
};
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
class Fare : public Hayvan
{
public:
    void sesCal()
    {
        cout<<"pis pis\n";
    }
    
};
//--------------------------------------------------------------------------------------------------------
void tumSesCal(Hayvan* hPtr)
{
    hPtr->sesCal();
}
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
int main()
{
    Kopek kopek;
    Kedi kedi;
    Ordek ordek;
    Fare fare;
    cout<<"\nclasslar içindeki ses fonksiyonları ayrı ayrı çağırılıyo\n\n";
    kopek.sesCal();
    kedi.sesCal();
    ordek.sesCal();
    cout<<"\nbase class ile tumsescal() fonksiyonu kullanılıyo\n\n";
    tumSesCal(&kopek);
    tumSesCal(&kedi);
    tumSesCal(&kedi);
    tumSesCal(&fare);
    
    
}
