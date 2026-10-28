#include <stdio.h>

int main()
{
    int xw=0, ow=0, dw=0;

    do {
        int t,d;
        char n[10]= {"0123456789"};
        for(t=0; t<=9; t++)
        {
            system("cls");
            printf("!!Classic Tic Tac Toe Game!!\n");
            printf("     |     |     \n");
            printf("  %c  |  %c  |  %c  \n",n[1],n[2],n[3]);
            printf("     |     |    \n");
            printf("-----+-----+-----\n");
            printf("     |     |     \n");
            printf("  %c  |  %c  |  %c  \n",n[4],n[5],n[6]);
            printf("     |     |    \n");
            printf("-----+-----+-----\n");
            printf("     |     |     \n");
            printf("  %c  |  %c  |  %c  \n",n[7],n[8],n[9]);
            printf("     |     |    \n");


            if ((n[1]==n[2] && n[2]==n[3] && n[3]=='o') ||
                (n[4]==n[5] && n[5]==n[6] && n[6]=='o') ||
                (n[7]==n[8] && n[8]==n[9] && n[9]=='o') ||
                (n[1]==n[5] && n[5]==n[9] && n[9]=='o') ||
                (n[3]==n[5] && n[5]==n[7] && n[7]=='o') ||
                (n[1]==n[4] && n[4]==n[7] && n[7]=='o') ||
                (n[2]==n[5] && n[5]==n[8] && n[8]=='o') ||
                (n[3]==n[6] && n[6]==n[9] && n[9]=='o'))

            {
                printf("Congratulations Player (O) Win the Match!!\n", on);
                ow = ow + 1;
                break;
            }


            
            if ((n[1]==n[2] && n[2]==n[3] && n[3]=='x') ||
                (n[4]==n[5] && n[5]==n[6] && n[6]=='x') ||
                (n[7]==n[8] && n[8]==n[9] && n[9]=='x') ||
                (n[1]==n[5] && n[5]==n[9] && n[9]=='x') ||
                (n[3]==n[5] && n[5]==n[7] && n[7]=='x') ||
                (n[1]==n[4] && n[4]==n[7] && n[7]=='x') ||
                (n[2]==n[5] && n[5]==n[8] && n[8]=='x') ||
                (n[3]==n[6] && n[6]==n[9] && n[9]=='x'))

                {
                   printf("Congratulations Player (X) Win the Match!!\n", xn);
                xw = xw + 1;
                break;
                }
                else if (t==9)
                {
                    printf("The Match is Draw!\n");
                    dw=dw+1;
                    break;
                
        }






    }










}








