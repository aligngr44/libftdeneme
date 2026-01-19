#include <unistd.h>
// verilen karakteri verilen yere yaz
// fd nereye yazacağımız c yazılan sondaki da kac byte olduğu
/*bize verilen fonskiyon içerisinde char c de pointer işareti olmama
nedni tek karakter yazdırıyo olmamız 1 byte tek değer adres tutmaya
gerek yok ama yazarken write içerisinde & koyarak adresini üretiyoruz 
orda*/
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* fd file descriptor demek
0 = stdin (klavye) 1 = stdout (terminal) 2 = stderr (hata çıkışı)*/

/* write yapısı buymus
 ssize_t write(int fd, const void *buf, size_t count);
char, string, struct, binary herşey gelebilir 

void olma nedenide birden fazla türü alabilir

not : bilgisayar git bana A yı getir demez 0x1000 adresine git ordaki
bir byte'ı al der böylelikle adres üzerinden A ya ulasır

& işareti olması onun adresi olduğunu gösterir write adresi gordu okey
o adresdeki veriye gitti isini halletti ama oraya direkt değer verirsen
A diyelim mesela 65 e gider 65 de 0x41 falan cok sacma bi yere ulasmıs
olur

örnek üzerinden olacaklar (A)
 write(1, &c, 1); (c nin adresini al demek 0x100)
 write(fd=1, buf=0x1000, count=1); (0x1000 adresinden 1 byte oku)
 okunan byte = 65  → 'A' çıktı = A

 & işareti olmazsa (A)
 write(1, c, 1); (c nin değerini alır 65)
 write(fd=1, buf=65, count=1);  cpu bunu soyle anlar buf = 0x41 
 0x41 adresinden 1 byte oku
 sonuc ya istenmeyen sacma bi karakter ya undefined yada segfault


*/
#include <stdio.h>
int main()
{
    ft_putchar_fd('a', 3);
}