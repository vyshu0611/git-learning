#include<stdio.h>
#include<ctype.h>
void main()
{
FILE *fp1,*fp2;
char sfile[50],dfile[50],c;
printf("Enter source file : ");
scanf("%s",sfile);
printf("Enter destination file : ");
scanf("%s",dfile);
fp1=fopen(sfile,"r");
if(fp1==NULL)
printf("File dosenot exist");
else
{
fp2=fopen(dfile,"w");
while((c=fgetc(fp1))!=EOF)
{
if(islower(c))
c=toupper(c);
fputc(c,fp2);
fputc(c,fp2);
}
fclose(fp2);
}
}


/*root123@root123:~/12A9$ gcc file2.c
[3]+  Done                    gedit empty.c
root123@root123:~/12A9$ ./a.out gnits.c
Enter source file : gnits.c
Enter destination file : empty.c
root123@root123:~/12A9$ cat empty.c
HHIIIIII */

