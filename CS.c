#includeconio.h
#includestdio.h
int max1(int a, int b) to find the maximum timestamp between two events 
{
if (ab)
return a;
else return b;
}
int main()
{
int i,j,k,p1[20],p2[20],e1,e2,dep[20][20];
printf(enter the no. of events for process p1 and p2 );
scanf(%d %d,&e1,&e2);
for(i=0;ie1;i++) p1[i]=i+1;
for(i=0;ie2;i++) p2[i]=i+1;
printf(enter the dependency matrixn);
printf(t Happened before relationship  n enter 1 if e1 -- e2 nt enter -1, if e2 -- e1 nt else enter 0 nn);
for(i=0;ie2;i++)
printf(te2%d,i+1);
for(i=0;ie1;i++)
{
printf(n e1%d t,i+1);
for(j=0;je2;j++)
 scanf(%d,&dep[i][j]);
}
for(i=0;ie1;i++)
{
for(j=0;je2;j++)
{
if(dep[i][j]==1) change the timestamp if dependency exist
{
p2[j]=max1(p2[j],p1[i]+1);
for(k=j;ke2;k++)
p2[k+1]=p2[k]+1;
}
if(dep[i][j]==-1) change the timestamp if dependency exist
{
p1[i]=max1(p1[i],p2[j]+1);
for(k=i;ke1;k++)
p2[k+1]=p1[k]+1;
}
}
}
printf(P1  ); to print the outcome of Lamport Logical Clock
for(i=0;ie1;i++)
{
printf(%d,p1[i]);
}
printf(n P2  );
for(j=0;je2;j++)
printf(%d,p2[j]);
getch();
return 0 ;
}
