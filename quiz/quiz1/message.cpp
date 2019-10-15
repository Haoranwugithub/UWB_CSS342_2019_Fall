#include<iostream>
char *sendMessage() {
    char msg[20];
    strcpy(msg,"Hello World!");
    return(msg);
}
int main() {
    printf("%s", sendMessage());
}
