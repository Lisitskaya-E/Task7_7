#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
#include <locale.h>
int main() {
    char t[N];
    setlocale(LC_ALL,"Rus");
    puts("¬ведите строку");
    gets(t);
    int k = strlen(t)-1;
    int s=1;
    for (int i=0; i<=k/2; i++){
        if (t[i] != t[k-i]){
            s=0;
            break;
        }
    }if (s) printf("yes");
    else (printf("no"));

    return 0;
}
