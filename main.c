#include <stdio.h>
#include <stdlib.h>

int main()
{
       int ch,i,j,as;
       int arr[10];
       for(int zzc=0;zzc<11;zzc++){
        int s=0;
        arr[zzc]=s;
       }

 printf("_____|_____|_____\n_____|_____|_____\n     |     |     \n");
 int game[3][3];
 game[0][0]=10;
 game[0][1]=20;
 game[0][2]=30;
 game[1][0]=40;
 game[1][1]=50;
 game[1][2]=60;
 game[2][0]=70;
 game[2][1]=80;
 game[2][2]=90;

 printf("Player 1 plays with 'x'\nPlayer 2 plays with 'O'\n");
 printf("Enter any number to start\n");
 int trash;
 scanf("%d",&trash);
 system("cls");
 for(int z=0;z<9;z++){
  if((z%2)==0){
    as=1;
  }
  else{
    as=2;
  }
   printf("Where do you want to place your variable?\n");
 here:printf("1).LUC\n2).LMC\n3).LLC\n4).UM\n5).M\n6).LM\n7).RUC\n8).RMC\n9).RLC\n");
 scanf("%d",&ch);
 int y;
 for(y=0;y<10;y++){
    if(arr[y]==ch){
        printf("This place is already been taken choose another one\n");

        goto here;
    }

 }
 arr[z]=ch;

 switch(ch){
case(1):
     i=0;
     j=0;
     break;
case(2):
     i=1;
     j=0;
     break;
case(3):
     i=2;
     j=0;
     break;
case(4):
     i=0;
     j=1;
     break;
case(5):
     i=1;
     j=1;
     break;
case(6):
     i=2;
     j=1;
     break;
case(7):
     i=0;
     j=2;
     break;
case(8):
     i=1;
     j=2;
     break;
 case(9):
     i=2;
     j=2;
     break;
  }
     game[i][j]=as;
   if(as==1){
        system("cls");
        for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(game[i][j]==1){
            printf("__X__|");

        }
        else{
            if(game[i][j]==2){
                 printf("__O__|");
            }
            else{
                printf("_____|");
            }
        }


      }
printf("\n");

    }

   }
   else{
        system("cls");
     for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(game[i][j]==2){
            printf("__O__|");

        }
        else{
            if(game[i][j]==1){
                 printf("__X__|");
            }
            else{
                printf("_____|");
            }
        }


      }
printf("\n");

    }
   }
   int  e=0;
   int zxz=0;
   switch(zxz){
   case(0):
       if(game[0][0]==game[0][1]&&game[0][0]==game[0][2]){
        printf("Match over player%d won ",game[0][0]);

        exit(0);
       }


   case(1):
       if(game[1][0]==game[1][1]&&game[1][0]==game[1][2]){
         printf("Match over player%d won ",game[1][0]);

        exit(0);

       }

   case(2):
       if(game[2][0]==game[2][1]&&game[2][0]==game[2][2]){
        printf("Match over player%d won ",game[2][0]);

        exit(0);
       }

   case(3):
       if(game[0][2]==game[1][1]&&game[0][2]==game[2][0
          ]){
        printf("Match over player%d won ",game[0][2]);

        exit(0);
       }

  case(4):
       if(game[0][0]==game[1][0]&&game[0][0]==game[2][0]){
        printf("Match over player%d won ",game[0][0]);

        exit(0);
       }

    case(5):
       if(game[0][1]==game[1][1]&&game[0][1]==game[2][1]){
        printf("Match over player%d won ",game[0][1]);

        exit(0);
       }


    case(6):
       if(game[0][2]==game[1][2]&&game[0][2]==game[2][2]){
        printf("Match over player%d won ",game[0][2]);

        exit(0);
       }


    case(7):
       if(game[0][0]==game[1][1]&&game[0][0]==game[2][2]){
        printf("Match over player%d won ",game[0][0]);

        exit(0);
       }


       }
       if(e>=9){
        printf("NO moves left");
       exit(0);
       }



    }
   }



