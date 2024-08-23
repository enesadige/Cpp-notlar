//C++ DİLİNDE BELLEK YÖNETİMİ - 3

//normalde stackte dizi oluşturursak dizinin boyutunu tanımlarken değişken koyamayız
//yani bir int değişkeni yazacaksak boyutuna int değişkeni const ile oluşturmalıydık
//bunu const olmadan yapabilmek için heap alanında oluşturabiliriz
//aşağıda yazdığımız şekilde const şeklinde olmayan bir değişkeni dizi boyutuna atayabildik
//sonuç olarak heapde pointerlarla çalışmayı unutmadan çoğu şeyi stackten farklı olarak yapabiliriz

//------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//------------------------------------------------------------------------------------------------
class Silah
{
public:
    Silah(){cout<<"silah oluşturuldu\n";}
    ~Silah(){cout<<"silah kaldırıldı\n\n";}
};

//------------------------------------------------------------------------------------------------
int main()
{
    int boyut=0;
    cout<<"lütfen dizi boyutunu giriniz :";
    cin>>boyut;
    
    //heap alanında diziyi oluşturma
    int* dizi = new int[boyut];
    
    //daha sonra heapta ayrılan bellek adreslerine dizi terimlerini yerleştirme
    for(int i=0; i<boyut; i++)
    {
        cout<<i<<". elemanı giriniz : ";
        cin>>dizi[i];
    }
    
    for(int i=0; i<boyut; i++)
    {
        cout<<i<<". eleman = "<<dizi[i]<<endl;
    }
    
    //diziyi silmek için
    delete[] dizi;
    
    
}
//------------------------------------------------------------------------------------------------
