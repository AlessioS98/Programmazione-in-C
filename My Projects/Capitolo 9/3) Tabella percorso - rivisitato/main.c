#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10])
{
    int i, j;
    int numcas;
    char ascii;
    int r, c;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            walk[i][j]='.';
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
            walk[0][0]=ascii;
        }else{
            numcas=rand()%4;
            if(numcas==0)
            {
                r--;
                if(r<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                {
                    r++;
                    c++;
                    if(c>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                    {
                        c--;
                        c--;
                        if(c<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                        {
                            c++;
                            r++;
                            if(r>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                            {
                                goto fine;
                            }else{
                                walk[r][c]=ascii+i;
                            }
                        }else{
                            walk[r][c]=ascii+i;
                        }
                    }else{
                        walk[r][c]=ascii+i;
                    }
                }else{
                    walk[r][c]=ascii+i;
                }
            }else{
                if(numcas==1)
                {
                    r++;
                    if(r>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                    {
                        r--;
                        r--;
                        if(r<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                        {
                            r++;
                            c++;
                            if(c>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                            {
                                c--;
                                c--;
                                if(c<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                {
                                    goto fine;
                                }else{
                                    walk[r][c]=ascii+i;
                                }
                            }else{
                                walk[r][c]=ascii+i;
                            }
                        }else{
                            walk[r][c]=ascii+i;
                        }
                    }else{
                        walk[r][c]=ascii+i;
                    }
                }else{
                    if(numcas==2)
                    {
                        c--;
                        if(c<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                        {
                            c++;
                            c++;
                            if(c>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                            {
                                c--;
                                r--;
                                if(r<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                {
                                    r++;
                                    r++;
                                    if(r>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                    {
                                        goto fine;
                                    }else{
                                        walk[r][c]=ascii+i;
                                    }
                                }else{
                                    walk[r][c]=ascii+i;
                                }
                            }else{
                                walk[r][c]=ascii+i;
                            }
                        }else{
                            walk[r][c]=ascii+i;
                        }
                    }else{
                        if(numcas==3)
                        {
                            c++;
                            if(c>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                            {
                                c--;
                                r--;
                                if(r<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                {
                                    r++;
                                    c--;
                                    if(c<0 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                    {
                                        c++;
                                        r++;
                                        if(r>=10 || (walk[r][c]>='A' && walk[r][c]<='Z'))
                                        {
                                            goto fine;
                                        }else{
                                            walk[r][c]=ascii+i;
                                        }
                                    }else{
                                        walk[r][c]=ascii+i;
                                    }
                                }else{
                                    walk[r][c]=ascii+i;
                                }
                            }else{
                                walk[r][c]=ascii+i;
                            }
                        }
                    }
                }
            }
        }
    }
    fine:
    return;
}

void printf_array(char walk[10][10])
{
    int i, j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%c ", walk[i][j]);
            if(j==9)
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    char matrice[10][10];
    generate_random_walk(matrice);
    printf_array(matrice);
    return 0;
}
