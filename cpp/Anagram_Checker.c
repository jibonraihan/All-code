#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char s1[100],s2[100];
    
        scanf("%s %s", &s1,&s2);

        if(strlen(s1)!=strlen(s2)) 
        {
            printf("No");
            return 0;
        }

        for(int i=0; i<strlen(s1)-1; i++)
        {
            for(int j=i+1; j<strlen(s1); j++)
            {
                if(s1[i]>s1[j])
                {
                    char temp=s1[i];
                    s1[i]=s1[j];
                    s1[j]=temp;
                }
            }
        }

        for (int i = 0; i < strlen(s2) - 1; i++)
        {
            for (int j = i + 1; j < strlen(s2); j++)
            {
                if (s2[i] > s2[j])
                {
                    char temp = s2[i];
                    s2[i] = s2[j];
                    s2[j] = temp;
                }
            }
        }

        // printf("%s %s ", s1,s2);

        bool b=false;
        for(int i=0, j=0; i<strlen(s1), j<strlen(s2); i++, j++)
        {
            if(s1[i]==s2[j])
            {
                b=true;
            }
        }

        if(b) 
    {
        printf("Yes");
    }
    else printf("No");

    return 0;
}