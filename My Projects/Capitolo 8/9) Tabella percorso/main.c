#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    int numcas;
    char ascii;
    int r, c;
    char matrice[10][10];
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            matrice[i][j]='.';
        }
    }
    ascii=65;
    j=0;
    r=0;
    c=0;
    srand(time(NULL));
    for(i=0; i<26; i++)
    {
        if(i==0)
        {
            matrice[0][0]=ascii;
        }else{
            numcas=rand()%4;
            if(numcas==0)
            {
                r--;
                if(r<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                {
                    r++;
                    c++;
                    if(c>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                    {
                        c--;
                        c--;
                        if(c<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                        {
                            c++;
                            r++;
                            if(r>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                            {
                                goto fine;
                            }else{
                                matrice[r][c]=ascii+i;
                            }
                        }else{
                            matrice[r][c]=ascii+i;
                        }
                    }else{
                        matrice[r][c]=ascii+i;
                    }
                }else{
                    matrice[r][c]=ascii+i;
                }
            }else{
                if(numcas==1)
                {
                    r++;
                    if(r>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                    {
                        r--;
                        r--;
                        if(r<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                        {
                            r++;
                            c++;
                            if(c>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                            {
                                c--;
                                c--;
                                if(c<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                {
                                    goto fine;
                                }else{
                                    matrice[r][c]=ascii+i;
                                }
                            }else{
                                matrice[r][c]=ascii+i;
                            }
                        }else{
                            matrice[r][c]=ascii+i;
                        }
                    }else{
                        matrice[r][c]=ascii+i;
                    }
                }else{
                    if(numcas==2)
                    {
                        c--;
                        if(c<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                        {
                            c++;
                            c++;
                            if(c>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                            {
                                c--;
                                r--;
                                if(r<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                {
                                    r++;
                                    r++;
                                    if(r>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                    {
                                        goto fine;
                                    }else{
                                        matrice[r][c]=ascii+i;
                                    }
                                }else{
                                    matrice[r][c]=ascii+i;
                                }
                            }else{
                                matrice[r][c]=ascii+i;
                            }
                        }else{
                            matrice[r][c]=ascii+i;
                        }
                    }else{
                        if(numcas==3)
                        {
                            c++;
                            if(c>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                            {
                                c--;
                                r--;
                                if(r<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                {
                                    r++;
                                    c--;
                                    if(c<0 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                    {
                                        c++;
                                        r++;
                                        if(r>=10 || (matrice[r][c]>='A' && matrice[r][c]<='Z'))
                                        {
                                            goto fine;
                                        }else{
                                            matrice[r][c]=ascii+i;
                                        }
                                    }else{
                                        matrice[r][c]=ascii+i;
                                    }
                                }else{
                                    matrice[r][c]=ascii+i;
                                }
                            }else{
                                matrice[r][c]=ascii+i;
                            }
                        }
                    }
                }
            }
        }
    }
    fine:
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%c ", matrice[i][j]);
            if(j==9)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}
