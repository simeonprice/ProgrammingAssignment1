#include <stdio.h>

int main() {
    char alphabet[25] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%s", alphabet);
    char word[100];
    printf("\nEnter your message here: ");
    scanf(" %[^\n]s", word);
    printf("%s\n", word);
    int key;
    printf("Enter the key here: ");
    scanf("%d", &key);
    printf("%d\n", key);
    
    return 0;
}
