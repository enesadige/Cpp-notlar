//C++ DİLİNDE DİNAMİK BELLEK YÖNETİMİ - 4

//unutma !! c dilindeki malloc ve free sınıf nesneleri üzerinde çalışmaz o yüzden new ve delete kullan

//-------------

//YIĞIN TAŞMASI / STACK OVERFLOW

//burada şu an yığın taşması yani "stack overlow" konusunu ele alıcaz
//stack sınırlı bir alana sahip olduğundan bu kadar küçük alan çabuk dolar
//yani çok fazla bilgi stack kısmına yüklenmeye çalışılırsa overflow meydana gelir

//biz normal bir stack şeklinde dizi oluşlturmak isteyip boyutuna aşağıdakini yazarsak;
//dizi[1000000000]; bunu ayıramaz hata verir çünkü stackte bu kadar alan yok
//bu hatayı almamak için böyle büyük bir boyutla oluşturmak istersek heapte oluştururuz

//-------------

//BELLEK SIZINTISI / MEMORY LEAK
//heap alanında oluşturulan bir değer görevini tamamladıktan sonra silmezsek bellekte kalmaya devam eder
//buna da memory leak denir

//-------------

//DANGLİNG POİNTER
//aynı alanı gösteren birden fazla işaretciden herhangi biri silindiğinde;
//kalan işaretciler olmayan veriyi göstermeye devam eder
//aşağıdaki örneğine baktığınızda bir a değişkeni için yer ayırdık
//sonra ab pointerını da oraya işaretledik fakat biz ondan sonra delete ile a yı sildiğimiz halde
//ab pointerı o bize artık tahsis edilmemiş alanı göstermeye devam etti
//derleyici burada hata vermez ama hatalı bir işlem yaptık



//--------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
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
   
    //danling pointer örneği
    int* a = new int;
    *a = 10;
    int* ab = new int;
    delete a;
    
   
    
    
    
    
}
