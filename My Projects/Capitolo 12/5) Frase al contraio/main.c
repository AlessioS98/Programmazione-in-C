void reverse(char *carattere, int numero, char terminal)
{
    char reverse[50], ch;
    int j, k, indice, i;
    int cont;
    indice=0;
    cont=0;
    for(j=numero-1; j>=0; j--)
    {
        if(*(carattere+j)!=' ' && j!=0)
        {
            cont++;
            continue;
        }else{
            if(j==0)
            {
                for(k=j; indice<=cont; k++)
                {
                    reverse[indice]=*(carattere+k);
                    indice++;
                }
            }
            for(k=j+1; indice<cont; k++)
            {
                reverse[indice]=*(carattere+k);
                indice++;
            }
            if(j==0)
            {
                indice++;
                cont++;
            }else{
                reverse[indice]=' ';
                indice++;
                cont++;
            }
        }
    }
    for(i=0; i<numero; i++)
    {
        printf("%c", reverse[i]);
    }
    printf("%c", terminal);
}

int main()
{
    char frase[50], ch, terminazione;
    int i;
    printf("Inserisci una frase: ");
    ch=getchar();
    i=0;
    while(ch!='\n')
    {
        if(ch=='.' || ch=='?' || ch=='!')
        {
            terminazione=ch;
            ch=getchar();
        }else{
            frase[i]=ch;
            i++;
            ch=getchar();
        }
    }
    reverse(frase, i, terminazione);
    printf("\n");
    return 0;
}
