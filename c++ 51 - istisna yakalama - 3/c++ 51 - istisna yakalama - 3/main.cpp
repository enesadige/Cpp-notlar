//burada yani bu kısımda aslında fonksiyon ya da class ile kullanımını gösterdik
//burada yazılı olmayan şu var bir de bu yazdığımız try ya da catch bloklarını main içinde de kullanabiliriz

//----------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------------------------------
class Ex
{
private:
    string message;
    
public:
    
    Ex(const string msg) : message( msg ) {} //gelen stringi atama
    
    //--__--__--__--__--__--__--__--__--__--__--__--__--__--__--
    string yaz()
    {
        return this->message;
    }
    
};

//----------------------------------------------------------------------------

string hata(string err)
{
    return err;
}
//----------------------------------------------------------------------------
double bolme(int a, int b)
{
    try
    {
        if(b==0)
        {
            throw -1;
        }
        if(a==0)
        {
            throw Ex("a sayısından kaynaklı hata...");
        }
        if((a==1) && (b==1))
        {
            throw hata("aynı sayı hatası...");
        }
        return a/b;
    }//----------------------------------------------------------------------------
    catch(int err)
    {
        cout<<"hata kodu : "<<err<<" >> bir sayı sıfıra bölünemez\n";
        return 0;
    }
    catch(Ex err)
    {
        cout<<err.yaz()<<endl;
        return 0;
    }
    catch(string err)
    {
        cout<<err<<" >> son yazılan bloğun sağladığı hata kodu...\n";
        return 0;
    }
    //----------------------------------------------------------------------------
}


//----------------------------------------------------------------------------
int main()
{
    int a,b;
    cout<<"lütfen a ve b değerlerini giriniz :";
    cin>>a>>b;
    cout<<bolme(a,b)<<endl;
}

