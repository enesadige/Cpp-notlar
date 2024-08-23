// C++ DİLİNDE WHİLE DÖNGÜSÜ

// yine c dilindekine benzer kullanımı vardır
// for döngüsüne benzer fakat belli ayrımları vardır
// while'ın dikkat edilmesi gereken kısmı kısır döngüye girmesi dah olasıdır
// for döngüsüne nazaran daha kolay kısır döngüye girilebilir hatalar yapılır
// while kullanımı şöyledir:
// while(şart) {ifadeler};


#include <iostream>

int main() {
    
    int a=0,b=0;
    char islem = '+';
    
    while(islem != 'e')
    {
        
        std::cout<<"birinci sayıyı giriniz :";
        std::cin>>a;
        std::cout<<"ikinci sayıyı giriniz :";
        std::cin>>b;
        std::cout<<"işlemi giriniz (+ - / *) :";
        std::cin>>islem;
        std::cout<<'\n';
        
        switch(islem)
        {
            case '+':
                std::cout<<"sonuç ="<<a+b;
                break;
            case '-':
                std::cout<<"sonuç ="<<a-b;
                break;
            case '/':
                std::cout<<"sonuç ="<<(float)a/b;
                break;
            case '*':
                std::cout<<"sonuç ="<<a*b;
                break;
            default:
                std::cout<<"hatalı işlem";
                break;
        }
        std::cout<<'\n'<<'\n';
    }
    
    
    
    
    
    
    
    
    
}
