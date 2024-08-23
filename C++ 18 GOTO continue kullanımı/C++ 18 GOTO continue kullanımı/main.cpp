// C++ DİLİNDE GOTO CONTİNUE KULLANIMI

// continue kullanımı break e benzerdir aslında bu da atla demektir
// continue çalıştığı anda altındaki bloktaki tüm ifadeleri atlar
// goto ifadesi de zıplama işine yarar
// burada goto ifade; deriz ve ifadeye gider
// biz aşağıda stopa git dedik ve stopu tanımladık en altta




#include <iostream>

int main() {
    
    int a=0,b=0;
    char islem='+';
    
    while(true)
    {
        //---------------------------------------------
        std::cout<<"birinci sayıyı giriniz :";
        std::cin>>a;
        std::cout<<"ikinci sayıyı giriniz :";
        std::cin>>b;
        std::cout<<"işlemi giriniz (+ - / *) :";
        std::cin>>islem;
        //---------------------------------------------
        if(islem == 'e')
        {
            goto stop;
        }
        //---------------------------------------------
        switch(islem)
        {
            case '+':
                std::cout<<"sonuç = "<<a+b;
                break;
            case '-':
                std::cout<<"sonuç = "<<a-b;
                break;
            case '/':
                std::cout<<"sonuç = "<<(float)a/b;
                break;
            case '*':
                std::cout<<"sonuç = "<<a*b;
                break;
            default:
                break;
        }
        //----------------------------------------------
    }

    //burada ifin içinde goto ifadesinin geldiği yeri yazdık
    stop:
    std::cout<<"durdu"<<'\n';
    
}
