//C++ DİLİNDE ÖN İŞLEMCİ - MAKROLAR

//basit bir örnek şunu düşün : cout<<1+1; satırını 500 kere yazdığını sonra 1 yerine 2 ler getirmen gerektiğini
//biz aşağıda makro tanımlayarak bu sorunu çözmüş oluyoruz
//aslında tek tek yazmak yerine toplu mesaj atmak gibi bir şey
//burada main içinde sayi = ... gibi yeni bir değer atayamayız

//aynı mantıklar bir fonksiyonda tanımlayabiliriz


//----------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------------
//makro tanımı
#define bir "enes."
#define iki "adige"
#define sayi 10

//makro fonk tanımı
#define topla(a,b) (string(a)+string(b))
#define topla_iki(a,b) (a+b)

//----------------------------------------------------------------------
int main()
{
    
    for(int i=0;i<sayi;i++)
    {
        cout<<topla(bir,iki)<<endl;
    }
    
    cout<<topla_iki(sayi,sayi)<<endl;
    
    
}
