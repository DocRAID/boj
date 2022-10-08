#include <stdio.h>
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    int tab[K],avail=0;
    for(int i=0;i<K;i++)
    {
        scanf("%d",&tab[i]);
        if(tab[i]%2==0)
            avail+=tab[i]/2;
        else
            avail+=tab[i]/2+1;
    }
    if(avail>=N)
        printf("YES");
    else
        printf("NO");
    return 0;
}