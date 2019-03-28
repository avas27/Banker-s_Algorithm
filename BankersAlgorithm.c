#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
int n,n2,np,na,r=0,counter=0,count=0;
int avas[10][10][10],avasAvail[10],avasState[10],avasFormat[1][10][10];
void avas1();
void avas2();
void avas3();
void avas4();
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
int main()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_____________________________________________\n");
printf("\t\t---------------------------------------------\n");
printf("\t\tCREATED BY ::\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\tAbhishek Verma\n");
printf("\t\tRegistration No: 11702561\n");
printf("\t\tRoll No: 63\n");
printf("\t\tSection: K17AP\n");
printf("\n\t\tASSIGNED BY ::\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~\n");
printf("\t\tMr. Baljit Singh Saini\n");
printf("\n\t\t--------------------------------------------\n");
printf("\t\tLOVELY PROFESSIONAL UNIVERSITY || avas 2019\n");
printf("\t\t_____________________________________________\n");
printf("\t\t---------------------------------------------\n");
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
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avas1()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t---------------------------------------\n");
printf("\n\t\tEnter number of RESOURSES types\n");
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
printf("\t\t\tPROCESS %d :",(++counter));
printf("\n");
for(int j=0;j<np;j++)
{
printf("\t\t\tR%d :",(++count));
scanf("%d",&n2);
avas[0][r][j]=n2;
}
r++;
count=0;
printf("\n");
}
r=0;
counter=0;
printf("\t\tEnter ALLOCATED no of resources to :\n");
for(int i=0;i<n;i++)
{
printf("\t\t\tPROCESS %d :",(++counter));
printf("\n");
for(int j=0;j<np;j++)
{
printf("\t\t\tR%d :",(++count));
scanf("%d",&n2);
avas[1][r][j]=n2;
}
r++;
count=0;
printf("\n");
}

printf("\t\tEnter AVAILABLE no of resources\n");
for(int i=0;i<np;i++)
{
printf("\t\tR%d : ",(++count));
scanf("%d",&na);
avasAvail[i]=na;
//avasFormat[1][i]=na;
}
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to check SAFE-STATE\n");
printf("\t\tPRESS (2) to grant RESOURCES\n");
printf("\t\tPRESS (3) to request RESOURCES\n");
printf("\t\t");
int m;
scanf("%d",&m);
switch(m)
{
case 1:
avas2();
break;
default:
printf("Please enter VALID option\n");
}
//for(int i=0;i<2;i++)
//{
//for(int j=0;j<np;j++)
//printf("%d\n",avasAvail[j]);
//}
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avas2()
{
r=0;
for(int j=0;j<n;j++)
{
for(int i=0;i<np;i++)
{
avas[2][r][i]=(avas[0][r][i]-avas[1][r][i]);
}
r++;
}
avas3();
/*
for(int i=0;i<2;i++)
printf("%d\n",avas[2][0][i]);
for(int i=0;i<2;i++)
printf("%d\n",avas[2][1][i]);
*/
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////

void avas3()
{
int x=0,kachra=0;
for(int z=0;z<n;z++)
{
r=0;
for(int j=0;j<n;j++)
{
for(int i=0;i<np;i++)
{
//printf("%d\n",avas[2][r][i]);
//printf("%d\n",avasAvail[i]);
if(avas[2][r][i]<=avasAvail[i])
{x=1;}
else
{x=0;}
}
//printf("ok %d\n",x);
if(x==1)
{
avasState[kachra]=(r+1);
kachra++;
for(int k=0;k<np;k++)
{
avasAvail[k]+=avas[1][r][k];
avasFormat[0][r][k]=avas[2][r][k];
avas[2][r][k]=100;
}
//printf("%d\n",avasAvail[0]);
//printf("%d\n",avasAvail[1]);
}
r++;
}

}
//int rr=sizeof(avasState)/sizeof(avasState[0]);
//printf("%d",rr);
/*printf("<");
for(int i=0;i<n;i++)
{printf("P%d ",avasState[i]);}
printf(">\n");
*/
avas4();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avas4()
{
r=0;
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t---------------------------------------\n");
printf("\t\t****************************************\n");
printf("\t\tPROCESS\t MAX \t ALLOCATED \tNEED\n");
for(int i=0;i<n;i++)
{
printf("\t\t  P%d",(i+1));
printf("\t");
for(int j=0;j<np;j++)
{
printf(" %d",avas[0][r][j]);
}
printf("\t");
for(int j=0;j<np;j++)
{
printf(" %d",avas[1][r][j]);
}
printf("\t\t");
for(int j=0;j<np;j++)
{
printf(" %d",avasFormat[0][r][j]);
}/*
printf("\t");
for(int j=0;j<np;j++)
{
printf(" %d",avasFormat[j][1]);
}*/
printf("\n");
r++;
}
printf("\n\t\t****************************************\n");
printf("\t\tSAFE-STATE is : < ");
for(int i=0;i<n;i++)
{
printf("P%d ",avasState[i]);
}
printf(">\n");
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to go on MAIN-MENU\n");
printf("\t\tPRESS (2) to EXIT\n");
}
