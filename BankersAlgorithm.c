#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
int avasV1=0,n,x=0,n2,np,na,r=0,counter=0,count=0,avasRG=0,avasRGG=0,xx=1,tr,Ucount=0,Uflag=0;
int avas[10][10][10],avasAvail[10],avasAvail2[10],avasState[10],avasFormat[1][10][10],avasRR[1][0][10];
void avasUI();
void avas1();
void avas2();
void avas3();
void avas4();
void avasRReq();
void avasMRReq();
void avasTHF();
void avasTHI();
void avasTHUI();
void *avasTH1();
void *avasTH2();
void *avasTH3();
int  avasCheck();
int  avasCheck1();
void avasDef();
void avasDone();
void avasBOTTOM();
void avasULTIMATE();
void avasTotalRecall();
pthread_mutex_t lock;
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
printf("\t\tINPUT : ");
scanf("%d",&n);
switch(n)
{
case 1:
avasUI();
break;
default:
printf("\n\t\tplease PRESS valid option\n");
}
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasUI()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_____________________________________________\n");
printf("\t\t---------------------------------------------\n");
printf("\n\t\tPRESS (1) to SIMULATE for THREADS\n");
printf("\t\tPRESS (2) to SIMULATE for PROCESS\n");
printf("\t\tPRESS (3) to SIMULATE for DEFAULT\n");
printf("\n\t\t--------------------------------------------\n");
printf("\t\tLOVELY PROFESSIONAL UNIVERSITY || avas 2019\n");
printf("\t\t_____________________________________________\n");
printf("\t\t---------------------------------------------\n");
printf("\t\tINPUT:");
scanf("%d",&tr);
switch(tr)
{
case 1:
avasTHI();
break;
case 2:
avas1();
break;
case 3:
avasDef();
break;
default:
printf("\n\t\tplease PRESS valid option\n");
}
}
void avas1()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t---------------------------------------\n");
printf("\n\t\tEnter number of RESOURSES types\n");
printf("\t\tINPUT:");
scanf("%d",&np);
printf("\n\t\tEnter number of PROCESSES\n");
printf("\t\tINPUT:");
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
}
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to check SAFE-STATE\n");
printf("\t\tPRESS (2) to grant RESOURCES\n");
printf("\t\tPRESS (3) to request RESOURCES\n");
printf("\n\t\tEnter The  Number : ");
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
avasFormat[0][r][i]=avas[2][r][i];
}
r++;
}
avas3();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
int avasCheck1()
{
r=0;
int zz=0;
for(int j=0;j<n;j++)
{
for(int i=0;i<np;i++)
{
if(avas[1][r][i]<=avas[0][r][i])
zz=1;
else
zz=0;
}
r++;
}
if(zz==1)
{
Uflag=1;
return 0;
}
else
{
Uflag=0;
return 1;
}
}

void avas3()
{
int kachra=0;
for(int z=0;z<n;z++)
{
r=0;
for(int j=0;j<n;j++)
{
for(int i=0;i<np;i++)
{
if((avas[2][r][i]>=0)&&(avas[2][r][i]<=avasAvail[i]))
{x=1;}
else
{x=0;}
}
if(x==1)
{
avasState[kachra]=(r+1);
kachra++;
for(int k=0;k<np;k++)
{
avasAvail[k]+=avas[1][r][k];
avas[2][r][k]=100;
}
}
r++;
}
}

for(int i=0;i<n;i++)
{
if(avasCheck1() || avasState[i]==0)
{
xx=0;
}
else
avasRG=1;
}
avasTotalRecall();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasTotalRecall()
{
if(tr==1)
{
Ucount++;
avasTHUI();
}
if(tr==2)
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
printf("\t\t-----------------------------------------\n");
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
}
printf("\n");
r++;
}
printf("\n\t\t****************************************\n");
if(xx==1)
{
printf("\t\tSAFE-STATE is : < ");
for(int i=0;i<n;i++)
{
printf("P%d ",avasState[i]);
}
printf(">\n");
}
if(xx==0)
{
printf("\t\tSAFE-STATE does't EXIST \n");
}
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to go on MAIN-MENU\n");
printf("\t\tPRESS (2) to EXIT\n");
int non;
printf("\t\tINPUT : ");
scanf("%d",&non);
switch(non)
{
case 1:
avasUI();
break;
case 2:
exit(0);
default:
printf("\n\t\tplease PRESS valid option\n");
}
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasRReq()
{
r=0;
counter=0;
count=0;
printf("\t\tEnter RESOURCE REQUEST for:\n");
for(int i=0;i<n;i++)
{
printf("\t\t\tTHREADS %d :",(++counter));
printf("\n");
for(int j=0;j<np;j++)
{
printf("\t\t\tR%d :",(++count));
scanf("%d",&n2);
avasRR[0][r][j]=n2;
}
r++;
count=0;
printf("\n");
}
pthread_mutex_init(&lock,NULL);
pthread_t a,b,c;
if(n==1)
{
pthread_create(&a,NULL,avasTH1,NULL);
pthread_join(a,NULL);
}
if(n==2)
{
pthread_create(&a,NULL,avasTH1,NULL);
pthread_create(&b,NULL,avasTH2,NULL);
pthread_join(a,NULL);
pthread_join(b,NULL);
}
if(n==3)
{
pthread_create(&a,NULL,avasTH1,NULL);
pthread_create(&b,NULL,avasTH2,NULL);
pthread_create(&c,NULL,avasTH3,NULL);
pthread_join(a,NULL);
pthread_join(b,NULL);
pthread_join(c,NULL);
}
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
int avasCheck(int wow)
{
int zz=0;
for(int i=0;i<np;i++)
{
if(avasRR[0][wow][i]<=avas[0][wow][i])
zz=1;
else
zz=0;
}
if(zz==1)
return 1;
else
return 0;
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasMRReq(int wow)
{
avasRGG=1;
for(int j=0;j<np;j++)
{
avas[1][wow][j]+=avasRR[0][wow][j];
}
for(int j=0;j<np;j++)
{
avasAvail[j]=avasAvail2[j];
}
for(int j=0;j<np;j++)
{
avasAvail[j]-=avasRR[0][wow][j];
}
if(avasCheck(wow))
{
Uflag=1;
avas2();
}
else
avasTHF();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void *avasTH1()
{
pthread_mutex_lock(&lock);
avasMRReq(0);
pthread_mutex_unlock(&lock);
}

void *avasTH2()
{
pthread_mutex_lock(&lock);
avasMRReq(1);
pthread_mutex_unlock(&lock);
}

void *avasTH3()
{
pthread_mutex_lock(&lock);
avasMRReq(2);
pthread_mutex_unlock(&lock);
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasTHI()
{
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\n\t\tEnter number of RESOURSES types\n");
printf("\t\tINPUT : ");
scanf("%d",&np);
printf("\n\t\tEnter number of THREADS to create (MAX : 3)\n");
printf("\t\tINPUT : ");
scanf("%d",&n);
if(n<=3)
{
printf("\t\t-----------------------------------------\n");
printf("\t\t\tfor each THREADS (TH1,TH2,...)\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tEnter MAXIMUM resources required by :\n");
for(int i=0;i<n;i++)
{
printf("\t\t\tTHREADS %d :",(++counter));
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
printf("\t\t\tTHREADS %d :",(++counter));
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
avasAvail2[i]=na;
}
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to check SAFE-STATE\n");
printf("\t\tPRESS (2) to request RESOURCES\n");
printf("\n\t\tEnter The  Number : ");
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
}
else
printf("\t\t!!! OVERFLOW !!! cannot create more than 3 THREADS\n");
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasDone()
{
//if(Ucount==1)
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
}
void avasTHUI()
{
r=0;
system("clear");
if(Ucount==1)
system("clear");
avasDone();
printf("\t\t****************************************\n");
printf("\t\tPROCESS\t MAX \t ALLOCATED \tNEED\n");
for(int i=0;i<n;i++)
{
printf("\t\t  TH%d",(i+1));
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
}
printf("\n");
r++;
}
printf("\n\t\t****************************************\n");
if(xx==1)
{
printf("\t\tSAFE-STATE is : < ");
for(int i=0;i<n;i++)
{
printf("TH%d ",avasState[i]);
}
printf(">\n");
}
if(xx==0)
{
printf("\t\tSAFE STATE doesn't EXIST \n");
}
avasULTIMATE();
if(avasRGG!=1)
avasBOTTOM();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasTHF()
{
r=0;
system("clear");
printf("\n\t\t\tBanker's_Algorithm\n");
printf("\t\t\tCSE-316 Project\n");
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\t****************************************\n");
printf("\t\tPROCESS\t MAX \t ALLOCATED \tNEED\n");
for(int i=0;i<n;i++)
{
printf("\t\t  TH%d",(i+1));
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
}
printf("\n");
r++;
}
printf("\n\t\t****************************************\n");
printf("\t\tSAFE STATE doesn't EXIST \n");
if(avasRGG!=1)
avasBOTTOM();
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasBOTTOM()
{
printf("\t\t_________________________________________\n");
printf("\t\t-----------------------------------------\n");
printf("\t\tPRESS (1) to REQUEST RESOURCES\n");
printf("\t\tPRESS (2) to EXIT\n");
int m;
scanf("%d",&m);
switch(m)
{
case 1:
avasRReq();
break;
default:
printf("Please enter VALID option\n");
}
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasULTIMATE()
{
if(avasRG==1 && avasRGG==1 && Uflag==1)
printf("\t\tREQUEST granted SUCCESSFULLY\n");
if(avasRG==0 && avasRGG==1)
printf("\t\tREQUEST cannot be granted\n");
}
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////avas 2019//////////////////////////////////////////////////////////////////
void avasDef()
{
n=3;
np=3;
avas[0][0][0]=5;
avas[0][0][1]=5;
avas[0][0][2]=6;

avas[0][1][0]=6;
avas[0][1][1]=6;
avas[0][1][2]=2;

avas[0][2][0]=8;
avas[0][2][1]=8;
avas[0][2][2]=7;


avas[1][0][0]=1;
avas[1][0][1]=1;
avas[1][0][2]=4;

avas[1][1][0]=1;
avas[1][1][1]=1;
avas[1][1][2]=0;

avas[1][2][0]=7;
avas[1][2][1]=7;
avas[1][2][2]=6;

avasAvail[0]=1;
avasAvail[1]=1;
avasAvail[2]=1;
tr=2;
avas2();

}
