//istisnayı yerleştirmenin birinci adımı bir "try" bloğu yerleştirmektir
//daha sonra try bloğu içine bir throw bloğu yazarız
//daha sonra try altına catch bloğu açarız
//ve catch içine throwda döndürülen hatanın türünü yazarız
//daha sonra hata durumunda return edilecek değeri catch içine yazarız
//ek olarak hata durumunda bir mesaj vermek istersek yine catch içine yazarız

//try içine if else yapısı ile farklı durumlar için farklı throwlar koyabilir
//daha sonra ise catch içine yine if else bloğu ile throwun farklı fırlattığı hatalar için;
//farklı mesajlar output edebilirdik

//ya da farklı şekilde yazmak istersek ikinci bir catch bloğu açabiliriz

//----------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------------------------------

double bolme(int a, int b)
{
    //try bloğu hata var mı kontrol etmek için
    try
    {
        if(b==0)
        {
            throw -1; //burası bir hata fırlatıcak
        }
        if(a==0)
        {
            throw"a";
        }
        //----------------------------------------------------------------------------
        return a/b;
    }
    catch(int err)
    {
        cout<<"hata kodu : "<<err<<" >> bir sayı 0'a bölünemez\n";
        return 0;
    }
    catch(const char* err)
    {
        cout<<"hata kodu : "<<err<<" >> 0 sayısı bölünemez\n";
        return 0;
    }
}

//----------------------------------------------------------------------------
int main()
{
   
    int a,b;
    cout<<"lütfen a ve b değerlerini giriniz :";
    cin>>a>>b;
    cout<<bolme(a,b)<<endl;
   
}
