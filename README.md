*This project has been created as part of the 42 curriculum by algungor.*

## Description
**Libft**, C programlama dilinde standart olarak sunulan bazı libc fonksiyonlarının ve ek yardımcı fonksiyonların sıfırdan yazıldığı bir kütüphane projesidir.  
Bu proje, 42 eğitiminin ilk ve en temel adımıdır.

Projenin amacı; standart C kütüphanesindeki fonksiyonların çalışma mantığını derinlemesine anlamak ve ilerideki C projelerinde kullanılabilecek güvenilir bir temel kütüphane oluşturmaktır.  
Libft projesi bellek yönetimi, string işlemleri, dosya tanımlayıcıları ve temel veri yapıları gibi kritik konuları kapsar.

## The Library
Bu proje sonucunda **libft.a** adlı statik bir kütüphane oluşturulur.  
Kütüphane aşağıdaki fonksiyon gruplarını içerir:

### 1. Libc Functions
Standart C kütüphanesinden yeniden yazılan temel fonksiyonlar:

**Memory Functions**
- ft_memset  
- ft_bzero  
- ft_memcpy  
- ft_memmove  
- ft_memchr  
- ft_memcmp  
- ft_calloc  

**Character Checks**
- ft_isalpha  
- ft_isdigit  
- ft_isalnum  
- ft_isascii  
- ft_isprint  
- ft_toupper  
- ft_tolower  

**String Functions**
- ft_strlen  
- ft_strlcpy  
- ft_strlcat  
- ft_strchr  
- ft_strrchr  
- ft_strncmp  
- ft_strnstr  
- ft_strdup  

**Conversion**
- ft_atoi  

### 2. Additional Functions
42 müfredatı tarafından istenen ek string ve dosya tanımlayıcı fonksiyonları:

- ft_substr  
- ft_strjoin  
- ft_strtrim  
- ft_split  
- ft_itoa  
- ft_strmapi  
- ft_striteri  

**File Descriptor Output**
- ft_putchar_fd  
- ft_putstr_fd  
- ft_putendl_fd  
- ft_putnbr_fd  

### 3. Linked List Functions
Bağlı liste (linked list) yapısı için geliştirilen bonus fonksiyonlar:

- ft_lstnew  
- ft_lstadd_front  
- ft_lstsize  
- ft_lstlast  
- ft_lstadd_back  
- ft_lstdelone  
- ft_lstclear  
- ft_lstiter  
- ft_lstmap  

## Instructions

### Compilation
Kütüphaneyi derlemek için:
```bash
make
```
Temizleme
```
make clean = .o dosyalarını siler
make fclean = .a ve .o dosyalarını siler
make re = Her şeyi temizleyip yeniden derler
```
## Resources
YouTube Eğitim Listesi

Libft ve C fonksiyonları anlatım serisi:
https://www.youtube.com/watch?v=xtNJvT6GIjI&list=PLzmB302RFLdM6w8iyptjmMFy3pVVmig1k

Man Sayfaları (Resmî Dokümantasyon)

ChatGPT – Kavram açıklamaları ve örnekler

DeepL – Teknik metin çevirileri
### AI Usage
Bu projede yapay zeka araçları aşağıdaki amaçlarla kullanılmıştır:
- libc fonksiyonlarının davranışlarını ve uç durumlarını anlamak.
- Hata ayıklama sürecinde mantık kontrolü yapmak.
- Kodun 42 Norminette kurallarına uygunluğunu gözden geçirmek.

Tüm fonksiyon implementasyonları proje sahibi tarafından yazılmıştır.  
Yapay zeka, harici kaynak kod üretimi veya kopyalama amacıyla kullanılmamıştır.
