#include <stdio.h>
int main() 
{
    int ID, password;
    printf("Enter ID and password:");
    scanf("%d %d", &ID, &password);
    if (ID != 101)
        printf("User not found");
    else if (password == 4321)
        printf("Login successful");
    else
        printf("Incorrect password");
}
