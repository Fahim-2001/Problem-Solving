
#include <stdio.h>
int main()
{
    char name1[30], name2[30], name3[30];
    scanf("%[^\n]%*c", &name1);
    scanf("%[^\n]%*c", &name2);
    scanf("%[^\n]%*c", &name3);
    if (name1 == "vertebrado")
    {
        if (name2 == "ave" && name3 == "carnivoro")
        {
            printf("aguia");
        }
        if (name2 == "ave" && name3 == "onivoro")
        {
            printf("pomba");
        }
    }
    return 0;
}