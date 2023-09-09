#include <stdio.h>
#include <string.h>

void BufferPassword() {

    char password[8] = "senha";
    char input[8];
    char password_buffer[8];

    printf("Enter password: \n");
    scanf("%s", input);
    strcpy(password_buffer, input);

    if(strncmp(password, password_buffer, 8) == 0) {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf(" Access Granted.\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    } else {
        printf("\nAccess Denied.\n");
    }
}

int main() {
    BufferPassword();
}