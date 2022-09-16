#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Inserisci un numero telefonico alfabetico: ");
    ch=getchar();
    while(ch!='\n')
    {
        if(ch=='a' || ch=='b' || ch=='c' || ch=='A' || ch=='B' || ch=='C')
        {
            printf("2");
        }else{
            if(ch=='d' || ch=='e' || ch=='f' || ch=='D' || ch=='E' || ch=='F')
            {
                printf("3");
            }else{
                if(ch=='g' || ch=='h' || ch=='i' || ch=='G' || ch=='H' || ch=='I')
                {
                    printf("4");
                }else{
                    if(ch=='j' || ch=='k' || ch=='l' || ch=='J' || ch=='K' || ch=='L')
                    {
                        printf("5");
                    }else{
                        if(ch=='m' || ch=='n' || ch=='o' || ch=='M' || ch=='N' || ch=='O')
                        {
                            printf("6");
                        }else{
                            if(ch=='p' || ch=='r' || ch=='s' || ch=='P' || ch=='R' || ch=='S')
                            {
                                printf("7");
                            }else{
                                if(ch=='t' || ch=='u' || ch=='v' || ch=='T' || ch=='U' || ch=='V')
                                {
                                    printf("8");
                                }else{
                                    if(ch=='W' || ch=='X' || ch=='Z' || ch=='w' || ch=='x' || ch=='z')
                                    {
                                        printf("9");
                                    }else{
                                        putchar(ch);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        ch=getchar();
    }
    return 0;
}
