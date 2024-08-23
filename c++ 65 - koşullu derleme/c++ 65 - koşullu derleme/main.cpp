//C++ DİLİNDE ÖN İŞLEMCİ - KOŞULLU DERLEME

//burada şu var biz #define ile bir şey tanımladık
//daha sonra #ifdef komutu şuna bakar: yanında yazılı şey tanımlıysa altındakilari çalıştır
//değilse çalıştırma
//ve daha sonra #endif ise o kısmın bittiğini gösteriyo yani bi nevi #endif >> } görevi görüyo

//#if komutu da normal if e benzer yanına bir koşul ya da tnaım koyabiliriz
//fakat tnaım koyarsak ona değer ataması olmuş olmalı

//--------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//--------------------------------------------------------------------
#define TANİM
#define TANİM_İKİ true

//--------------------------------------------------------------------
int main()
{

    //DEBUG diye bir şey tanımlandıysa çalıştır anlamında aşağısı
    #ifdef TANİM
        cout<<"Dev mesajları\n";
    #endif //durdurdu
    
    //bir de #if var
    #if TANİM_İKİ
        cout<<"tanımlı if çalıştı\n";
    #endif
    
    //koşullu if
    #if 5<10
        cout<<"koşullu if çalıştı\n";
    #endif
    
}
