int main()
{
    int choice,player=1,i;
    char mark;
    do{
        creating_board();
        player= (player % 2) ? 1: 2;

        printf("Player %d, enter a number: ",player);       //
        scanf("%d",&choice);

        mark = (player==1) ? 'X' : 'O';
        marking_board(choice,mark);

        i=check_for_win();
        player++;

    }while(i == -1);

    creating_board();

    if(i==1)
        printf("Player %d  you have won the game",--player);
    else
        printf("<-------Draw------>");


    return 0;
}