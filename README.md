*This project has been created as part of the 42 curriculum by algungor.*

# Libft

**Libft**, 42 müfredatı kapsamında geliştirilen ve C dilindeki standart kütüphane fonksiyonlarının yeniden yazımını içeren bir **statik kütüphane** projesidir.  
Bu proje, öğrencinin C diline hâkimiyetini; özellikle **bellek yönetimi**, **pointer kullanımı**, **string işlemleri** ve **temiz kod yazımı** konularında geliştirmeyi amaçlar.

Libft, ilerleyen 42 projelerinde tekrar tekrar kullanılacak temel bir altyapı kütüphanesi olarak tasarlanmıştır.

---

## Projenin Amacı

Bu proje ile amaçlanan:

- Standart C kütüphanesinin nasıl çalıştığını derinlemesine anlamak
- `malloc` / `free` ile bellek yönetimini doğru yapmak
- Pointer ve pointer-to-pointer kavramlarını kavramak
- Norm’a uygun, okunabilir ve güvenli kod yazmak
- Kendi statik kütüphaneni oluşturup kullanabilmek

---
## Kaynaklar

Linux Man Pages (man malloc, man free, man memset, man memmove, man strlen, man write)

Yapay Zekâ Destekli Çeviri: DeepL, Google Translate, ChatGPT (teknik İngilizce açıklamaları Türkçe anlamlandırmak için)

YouTube Aramaları:“malloc free C”, “linked list in C tutorial”, “memmove vs memcpy”, “42 norminette”

Valgrind – Bellek sızıntısı (memory leak) ve invalid read/write kontrolleri

42 Libft Tester Projeleri – Fonksiyon doğrulama ve edge-case testleri

## İçerik

Libft aşağıdaki fonksiyon gruplarını içerir:

### 🧵 String Fonksiyonları
`ft_strlen`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_split`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_striteri`

### 🧠 Bellek Fonksiyonları
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

### 🔢 Karakter ve Sayı Kontrolleri
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

### 🔄 Dönüşüm Fonksiyonları
`ft_atoi`, `ft_itoa`

### 📤 File Descriptor Fonksiyonları
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### ⭐ Bonus – Linked List
`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`,  
`ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## Nasıl Derlenir?

Proje kök dizininde aşağıdaki komutları kullanabilirsin:

```bash
make
