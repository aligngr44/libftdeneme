*This project has been created as part of the 42 curriculum by <login>.*

# Libft

Libft, 42 müfredatı kapsamında geliştirilen, standart C kütüphanesindeki temel fonksiyonların yeniden yazımını ve sık kullanılan yardımcı fonksiyonları içeren bir statik kütüphanedir.  
Bu proje; C dilinde bellek yönetimi, pointer kullanımı ve temiz kod yazma becerilerini geliştirmeyi amaçlar.

---

## Ne İşe Yarar?

Bu kütüphane, gelecekteki 42 projelerinde tekrar tekrar kullanılmak üzere:
- String işlemleri
- Bellek işlemleri
- Sayı dönüştürmeleri
- Dosya tanımlayıcıları (file descriptor)
- (Bonus) Linked list yapıları

için güvenilir ve kurallara uygun fonksiyonlar sunar.

---

## Nasıl Derlenir ve Kullanılır?

### Derleme
```bash
make

make clean    # object dosyalarını siler
make fclean   # object dosyaları + libft.a silinir
make re       # her şeyi baştan derler

