



#include<stdio.h>

int i;

void WaitingTime(int process[], int n,

int bt[], int wt[])

{

wt[0] = 0;

for ( i = 1; i < n ; i++ )

wt[i] = bt[i-1] + wt[i-1];

}

void TurnAroundTime( int process[], int n,

int bt[], int wt[], int tat[])

{

for ( i = 0; i < n ; i++)

tat[i] = bt[i] + wt[i];

}

void avgTime( int process[], int n, int bt[], int at[])

{  

int wt[n], tat[n], total_wt = 0, total_tat = 0;

WaitingTime(process, n, bt, wt);

TurnAroundTime(process, n, bt, wt, tat);

printf("ProcessID Burst time Arrival Time Waiting time Turn around time\n");

for ( i=0; i<n; i++)

{

total_wt = total_wt + wt[i];



total_tat = total_tat + tat[i];

printf(" %d\t ",(i+1));

printf("\t %d\t ", bt[i]);

printf(" \t%d\t", at[i]);

printf(" %d\t",wt[i]);

printf("\t%d\t\n",tat[i] );

}

int s=(float)total_wt / (float)n;

int t=(float)total_tat / (float)n;

printf("Average waiting time = %d",s);

printf("\n");

printf("Average turn around time = %d ",t);

}

int main()

{

int process[] = { 1, 2, 3, 4, 5};

int n = sizeof process / sizeof process[0];

int burst_time[] = {6, 2, 8, 3, 4};

int arrival_time[] = {2, 5, 1, 0, 4};

avgTime(process, n, burst_time,arrival_time);  

return 0;

}  
