#include <stdio.h>
#include <string.h>
 
void encrypt(char password[],int key,char enc[])
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        enc[i] = password[i] - key - i;
    }
}
 
void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key + i;
    }
}
int main()
{
    char password[100] ;
    char enc[100];
    printf("Enter the text: \n ");
    scanf("%s",password);
    printf("Text     = %s\n",password);
    char a[100];
    printf("Enter the key ");
    scanf("%s",a);
    int j,b=0;
    for(j=0;j<strlen(password);j++)
    b=(b+a[j])%255;
    encrypt(password,b,enc);
    printf("Encrypted value = %s\n",enc);
    decrypt(password,b);
    printf("Decrypted value = %s\n",password);
    return 0;
}
