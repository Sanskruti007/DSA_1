#include<stdio.h>
struct cricket_player
{
    char player_name[20];
    char team_name[20];
    float average;
    int highest_score;
    int Centuries;
    int ODI_rank;
};

struct cricket_player read(struct cricket_player);
void display(struct cricket_player);
main()
{
    struct cricket_player P1;
    P1=read(P1);
    display(P1);
}

struct cricket_player read(struct cricket_player P1)
{
    scanf("%s",P1.player_name);
    scanf("%s",P1.team_name);
    scanf("%f",&P1.average);
    scanf("%d",&P1.highest_score);
    scanf("%d",&P1.Centuries);
    scanf("%d",&P1.ODI_rank);
    return P1;
}

void display(struct cricket_player P1)
{
    printf("%s,%s,%f,%d,%d,%d",P1.player_name,P1.team_name,P1.average,P1.highest_score,P1.Centuries,P1.ODI_rank);
}
