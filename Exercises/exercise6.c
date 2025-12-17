#include <stdio.h>
#include <string.h> //This will declare library of string func
int main()
{
    char str1[50], str2[50];
    int i, j, n, m, l;
    printf("Enter the String:\n");
    // gets(str1) //get input value
    scanf(" %49[^\n]", str1);
    printf("Enter the position of the required charachter:\n");
    scanf("%d", &n); // value of position and store in n
    printf("Enter the number of the charachter to be exracted:\n");
    scanf("%d", &m);
    // store lenght of user string in l variable using func srtlen
    l = strlen(str1);
    if (m + n - 1 < l) 
    {
        for (i = n - 1, j = 0; i < m + n - 1; i++, j++)
        str2[j] = str1[i];
        str2[j] = '\0'; //terminate string counting   
        printf("The exracted string is : %s", str2);
    }
    else
        printf("The string exraction is not possible.");
    return 0;
}