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

void display(struct cricket_player);
main()
{
    struct cricket_player P1={"Virat","INDIA",59.13,183,39,1};
    display(P1);
}

void display(struct cricket_player P1)
{
    printf("%s,%s,%f,%d,%d,%d",P1.player_name,P1.team_name,P1.average,P1.highest_score,P1.Centuries,P1.ODI_rank);
}
