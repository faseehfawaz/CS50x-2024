#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char encrypt_char(char plain_char, int key)
{
    if (isalpha(plain_char))
    {
        char base = isupper(plain_char) ? 'A' : 'a';
        return (plain_char - base + key) % 26 + base;
    }
    else
    {
        return plain_char;
    }
}

void caesar_cipher(string plaintext, int key)
{
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char encrypted_char = encrypt_char(plaintext[i], key);
        printf("%c", encrypted_char);
    }
    printf("\n");
}

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    caesar_cipher(plaintext, key);

    return 0;
}
