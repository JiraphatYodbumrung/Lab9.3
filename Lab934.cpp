#include <stdio.h>
#define MAX 50

int countVowel(char []);

int main() {
    char text[MAX];
    int cVowel;

    printf("Enter text : ");
    scanf("%s", text);

    cVowel = countVowel(text);

    printf("Text : [%s] has %d vowels\n", text, cVowel);
}

int countVowel(char t[]) {
    int v = 0;
    int count = 0;
    int a=0, e=0, i=0, o=0, u=0;   

    while (v < MAX && t[v] != '\0') {

        if (t[v]=='A' || t[v]=='a') {
            a++; count++;
        }
        else if (t[v]=='E' || t[v]=='e') {
            e++; count++;
        }
        else if (t[v]=='I' || t[v]=='i') {
            i++; count++;
        }
        else if (t[v]=='O' || t[v]=='o') {
            o++; count++;
        }
        else if (t[v]=='U' || t[v]=='u') {
            u++; count++;
        }

        v++;
    }

    printf("\nVowel details:\n");
    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i);
    printf("O = %d\n", o);
    printf("U = %d\n", u);

    return count;
}
