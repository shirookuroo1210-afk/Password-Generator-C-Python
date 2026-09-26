#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char kolam_karakter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int panjang_kolam = strlen(kolam_karakter);
    int panjang_password = 12;
    char password[13];   // 12 karakter + 1 slot '\0' di akhir
    
    srand(time(NULL));
    
    for (int i = 0; i < panjang_password; i++)
    {
        int index_acak = rand() % panjang_kolam;
        password[i] = kolam_karakter[index_acak];
    }
    
    password[panjang_password] = '\0';   // menutup string
    
    printf("Password: %s\n", password);
    
    return 0;
}
//code written by lyvo