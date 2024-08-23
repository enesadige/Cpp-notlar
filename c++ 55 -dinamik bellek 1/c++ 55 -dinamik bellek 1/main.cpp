//DİNAMİK BELLEK YÖNETİMİ - 1

//programcı kullanılmayan atıl veriyi kendisi bellekten kaldırmak zorunda
//bunu yapmazsak problemler meydana gelebilir
//bellek dediğimiz şey aslında tekdüzeden çok karmaşık bir alandır

//bir bellek genel olarak 5 alana bölünür
//1 : Stack, 2 : Dynamic(heap), 3 : Uninitialized Data(BBS), 4 : Initialized Data, 5 : Text

//bizim kullandığımız alan eğitimdeki hep stack kısmıydı yani >> int a = ... deyince stackde oluştu
//stackdeki verilerin kaldırılması için bir komut yok stack kendi kendini yönetiyor
//stack ve heap arasındaki önemli farklardan biri: stackte memory son giren ilk çıkar mantığındadır
//heapda ise veriler dağınıktır bu yüzden stack biraz daha hızlıdır heap a göre

//Heap üzerinden yer ayırmak istersek "new" kelimesini kullanırız
//heap üzerinden kaldırmak için ise "delete" kelimesini kullanırız
//biz böyle diyerek aslında heapde oluştur alanı ben kendim yöneticem diyoruz
//heap üzerinde alan ayırma işlemine "dynamic memory allocation" yani dinamik bellek tahsisi denir
//heapi ne zaman kullanıcaz : stack alanı küçüktür 1-2 mb gibi bir alandır
//sonuç olarak stack alanı kısıtlıdır burada her şeyi tutamayız o yüzden heap de saklarız
//çünkü heap alanı daha geniştir


//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
