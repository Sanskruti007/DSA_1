# include<stdio.h>
typedef struct cricket_player{
char player_name[20];
char team_name[20];
int ODI_rank;
}PLR;
PLR p[100];
void read(PLR p[100],int n);
void display(PLR p[100],int n);
void ODI(PLR p[100],int n);
void sort(PLR p[100],int n);
main()
{
    PLR p[100];
    int n;
    printf("Enter number of players");
    scanf("%d",&n);
read(p,n);
display(p,n);
sort(p,n);

}
void read(PLR p,int n)s
{int i;
for(i=0;i<n;i++)
{
printf("\nEnter player name");
scanf("%s",p[i].player_name);
printf("\nenter team_name");
scanf("%s",p[i].team_name);
printf("\nenter ODI _rank");
scanf("%d",&p[i].ODI_rank);
}

}
void display(PLR p1)
{
printf("Player name:%s\n",p1.player_name);
    printf("Team name:%s\n",p1.team_name);
    printf("ODI rank:%d\n",p1.ODI_rank);
}

void sort(PLR p[100],int n)
{
    int i,j;
    PLR swap;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(p[j].ODI_rank>p[j+1].ODI_rank)
            {
                swap=p[j];
                p[j]=p[j+1];
                p[j+1]=p[j];
            }
        }

    }

display(p);
}


