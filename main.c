#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. DEĞİŞKENLERİ TANIMLA
    void            *ptr;
    unsigned char   *str;
    size_t          i;
    size_t          n_eleman = 5;
    size_t          eleman_boyutu = sizeof(int);

    // 2. FONKSİYONU ÇAĞIR
    ptr = malloc(n_eleman * eleman_boyutu);

    // 3. NULL KONTROLÜ YAP (malloc başarısız olabilir)
    if (!ptr)
    {
        printf("Bellek ayirma basarisiz!\n");
        return (1);
    }

    // 4. VOID POINTER'I BYTE-BY-BYTE OKUMAK İÇİN CAST ET
    str = (unsigned char *)ptr;
    i = 0;

    // 5. WHILE DÖNGÜSÜ İLE İÇERİĞİ KONTROL ET
    printf("Dönen Adres: %p\n", ptr);
    printf("Bellek icerigi: ");
    while (i < (n_eleman * eleman_boyutu))
    {
        // Her bir baytı sayısal olarak yazdır (0 görmeyi bekliyoruz)
        printf("%d ", str[i]);
        i++;
    }
    printf("\n");

    // 6. BELLEĞİ SERBEST BIRAK (Memory Leak önlemek için)
    free(ptr);

    return (0);
}