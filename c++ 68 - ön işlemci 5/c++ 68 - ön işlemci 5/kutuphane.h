#pragma once

//sınıfı buraya yazdık fakat içindeki topla fonksiyonunu boş bıraktık
//topla fonksiyonunu da kutuphane.cpp dosyası içine yazıyoruz
//oraya git bak orda başka tanımlama var

class Mat
{
private:
    int a{};
    int b{};
    
public:
    int topla();
    Mat(int a, int b);
};




int topla(int a, int b);
