#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
void avas1();
int main()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t---------------------------------------\n");
printf("\t\tCREATED BY ::\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\tAbhishek Verma\n");
printf("\t\tRegistration No: 11702561\n");
printf("\t\tRoll No: 63\n");
printf("\t\tSection: K17AP\n");
printf("\t\tASSIGNED BY ::\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\tMr. Balgit Singh Saini\n");
printf("\n\t\t-----------------------------------------\n");
printf("\t\tLOVELY PROFESSIONAL UNIVERSITY\t||avas 2019\n");
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to CONTINUE\n");
int n;
printf("\t\t");
scanf("%d",&n);
switch(n)
{
case 1:
avas1();
break;
default:
printf("\n\t\tplease PRESS valid option\n");
}
}

/////////////////////////////////////////////////////////////avas 2019///////////////////////////////////////////////////////////////
void avas1()
{
int n,n2,np,na,counter=0,count=0;

system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t---------------------------------------\n");
printf("\n\t\tEnter number of RESOURSES types available\n");
printf("\t\t");
scanf("%d",&np);
printf("\n\t\tEnter number of PROCESSES\n");
printf("\t\t");
scanf("%d",&n);
printf("\t\t-----------------------------------------\n");
printf("\t\t\tfor each PROCESS (P1,P2,...)\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tEnter MAXIMUM resources required by :\n");
for(int i=0;i<n;i++)
{
printf("\t\t\tPROCESS%d :",(++counter));
printf("\n");
for(int j=0;j<np;j++)
{

printf("\t\t\tR%d :",(++count));
scanf("%d",&n2);
}
count=0;
printf("\n");
}
counter=0;
printf("\t\tEnter ALLOCATED no of resources to :\n");
for(int i=0;i<n;i++)
{
printf("\t\t\tPROCESS%d :",(++counter));
printf("\n");
for(int j=0;j<np;j++)
{
printf("\t\t\tR%d :",(++count));
scanf("%d",&n2);
}
count=0;
printf("\n");
}
printf("\t\tEnter AVAILABLE no of resources\n");
for(int i=0;i<np;i++)
{
printf("\t\tR%d : ",(++count));
scanf("%d",&na);
}
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to check SAFE-STATE\n");
printf("\t\tPRESS (2) to grant RESOURCES\n");
printf("\t\tPRESS (3) to request RESOURCES\n");
}


