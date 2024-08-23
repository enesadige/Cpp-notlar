// C++ DİLİNDE AKIŞ KONTROLLERİ

// cpu programı yukarıdan aşağıya doğru yürütür buna akış deriz
// yürütülen belirli ifade dizisine executin path ya da path deriz

// kullandığımız akış kontrollerinden en meşhurları aşağıdadır
// conditional statemens yani koşullu ifadeler : if, switch...
// jumps yani atlamalar : goto, break, continue...
// function calls yani fonksiyon çağırma : return, funciton calls...
// loop yani döngüler : do-while, while, for...
// halts yani programa çalışmayı bıraktırır : srd::exit(), std::abort()...
// exceptions yani istisnalar, hata işleme içindir : try, throw, catch...


#include <iostream>

int main() {
    
    int a = 0, b = 0;
    char islem = '+';
    float sonuc = 0;
    
    //---------------------------------------------------------------
    std::cout << "birinci sayıyı giriniz :" << '\n';
    std::cin >> a; //c dilindeki scanf gibidir kullanıcıdan veri alır
    std::cout << "ikinci sayıyı giriniz :" << '\n';
    std::cin >> b; //c dilindeki scanf gibidir kullanıcıdan veri alır
    
    std::cout << "İşlem giriniz (+ - / * ) : " << '\n';
    std::cin >> islem;
    //---------------------------------------------------------------
    
    if (islem == '+') {
        sonuc = a+b;
    } else if(islem == '-') {
        sonuc = a-b;
    } else if(islem == '/') {
        sonuc = a/b;
    } else if(islem == '*') {
        sonuc = a*b;
    }
    
    std::cout << "sonuç = " << sonuc << '\n';
    
    //---------------------------------------------------------------
    
}
