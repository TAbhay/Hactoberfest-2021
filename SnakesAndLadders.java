/* This is an automated game of Snakes and Ladders */

/* 4 Players compete on a 2-D array board

with 0 representing absense of snakes or Ladders

1 --> Snake!

2 --> Ladder!

No. of positions to be forward of backward are stored
in another 2-D array which works in the background */ 




import java.util.*;
class SnakesAndLadders
{
    int A[][], B[][], n;
    snek(int n)
    {
        this.n = n;
        A = new int[n][n];
        B = new int[n][n];

    }
    public static void main(String args[])
      {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of board");
        int x = sc.nextInt();

        SnakesAndLadders obj = new SnakesAndLadders(x);

        obj.getdata();
        obj.winna();

  }

  void winna()
  {
      int winner = 0;
        int pos[] = {0,0,0,0};
        int turn[] = {0,0,0,0};
        int i,j;
        while(true)
        {
          for(i=0; i<4; i++)
          {
            if(turn[i]<0) turn[i]=0;
            turn[i]+= random();

            if(turn[i]>=n*n) break;

            pos[i] = A[turn[i]%n][turn[i]/n];

            while(pos[i]!=0)
            {
              if(pos[i]==2)
              {
                turn[i]+=B[turn[i]%n][turn[i]/n];
                if(turn[i]<0||turn[i]>=n*n) break;
                pos[i] = A[turn[i]%n][turn[i]/n];
              }
              if(pos[i]==1)
              {
                turn[i]-=B[turn[i]%n][turn[i]/n];
                if(turn[i]<0||turn[i]>=n*n) break;
                pos[i] = A[turn[i]%n][turn[i]/n];
              }
              if(pos[i]==0) break;
            }
          }
          for(j=0; j<4; j++)
            if(turn[j]>=n*n)
            {
                winner = j;
                break;
            }
        if(winner!=0)
        break;
    }

    System.out.println("Winner is Player "+winner);
  }

  void getdata()
  {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter 0,1 and 2");
        for(int i=0; i<n; i++)
          for(int j=0; j<n; j++)
            A[i][j] = sc.nextInt();
        System.out.println("\n");
        System.out.println("Enter steps forw or back");
        for(int k=0; k<n; k++)
          for(int l=0; l<n; l++)
            B[k][l] = sc.nextInt();
  }
  int random()
      {
        Random random = new Random();
        int a = 0;
        while (true)
        {
            a = random.nextInt(7);
            if(a !=0)
            break;
        }
        return a;
      }

}
