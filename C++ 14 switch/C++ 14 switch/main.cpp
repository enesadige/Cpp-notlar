// C++ DİLİNDE SWİTCH

// switch yapısı if yapısına benzerdir ama tam olarak aynı çalışmazlar


#include <iostream>

int main() {
    
    int a=0, b=0;
    char islem;
    float sonuc=0;
    
    std::cout<<"birinci sayıyı giriniz :";
    std::cin>>a;
    std::cout<<"ikinci sayıyı giriniz :";
    std::cin>>b;
    std::cout<<"işlemi giriniz (+ - / * ) :";
    std::cin>>islem;
    
    //buradaki switch kullanımı c dilindekiyle aynıdır
    //burada da break ve continue kullanımı vardır
    //burada da yine bölme işleminden önce işlem önüne (float) yazmalıyız
    switch(islem)
    {
            
        case '+':
            sonuc = a+b;
            std::cout<<"sonuç = "<<sonuc;
            break;
        case '-':
            sonuc = a-b;
            std::cout<<"sonuç = "<<sonuc;
            break;
        case '/':
            sonuc = (float)a/b;
            std::cout<<"sonuç = "<<sonuc;
            break;
        case '*':
            sonuc = a*b;
            std::cout<<"sonuç = "<<sonuc;
            break;
        default :
            std::cout<<"hatalı işlem girdiniz.";
            break;
    }
    
    
    
    
    
    
}
