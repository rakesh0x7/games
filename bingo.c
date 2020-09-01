#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
//----------------------------------------------------------------------
void display(int p[],int u)                          //function to print
{
int z,l,j,k,value,v;
gotoxy(42,7);
printf("WHAT TO DO?");
gotoxy(38,9);
//setcolor(RED);
printf("1. ENTER THE VALUE YOU WANT TO CUT");
gotoxy(38,11);
printf("2.ENTER EACH VALUES ONLY ONCE");
gotoxy(40,12);
printf("i.e. Dont cut the same value twice");
gotoxy(1,6);
//printf("  B    I    N     G    O");
gotoxy(1 ,7);
printf(" ____ ____ ____ ____ ____ ");
gotoxy(1,8);
for(l=0;l<5;l++)
   {
    printf("|    |    |    |    |    |\n");
    printf("|____|____|____|____|____|\n");
   }
z = 0;
for(k=8;k<17;k=k+2)
   {
     for(j=2;j<25;j=j+5)
	{
	 gotoxy(j,k);
	 printf("%d",p[z]);
	 z++;
	}
    }
if(u==1)
  {
   gotoxy(3,6);
   printf("B");
  }
if(u==2)
  {
   gotoxy(3,6);
   printf("B    I");
  }
if(u==3)
  {
   gotoxy(3,6);
   printf("B    I    N");
  }
if(u==4)
  {
   gotoxy(3,6);
   printf("B    I    N    G ");
  }
if(u==5)
  {
   gotoxy(3,6);
   printf("B    I    N    G    O");
   delay(500);
  }
}						   //end of that function
//------------------------------------------------------------------------                                                                                     ------------------------------------------------------------
void main()                                                 //main starts
{
int l,n,j,k,a[25],z,s,exit,value,b[12]={0,0,0,0,0,0,0,0,0,0,0,0},v=0;
int gd=DETECT,gm,i,x,y;
clrscr();
gotoxy(28,4);
printf("GETTING BORED????");
gotoxy(30,6);
printf("DON'T WORRY...");
gotoxy(28,10);
printf("GET READY TO PLAY");
for(i=26;i<46;i=i+2)
   {
     gotoxy(i,11);
     delay(100);
     printf(" _");
   }
for(i=46;i>26;i=i-2)
   {
    gotoxy(i,15);
    delay(100);
    printf("_");
   }
gotoxy(28,13);
delay(150);
printf("  B");
delay(150);
printf("  I");
delay(150);
printf("  N");
delay(150);
printf("  G");
delay(150);
printf("  O");
for(l=26;l<50;l=l+20)
   {
     for(j=12;j<16;j=j+1)
	{
	 gotoxy(l,j);
	 delay(150);
	 printf("|");
	}
   }
gotoxy(24,18);
delay(200);
printf("press");
delay(150);
printf(" E");
delay(100);
printf("N");
delay(100);
printf("T");
delay(100);
printf("E");
delay(100);
printf("R");
delay(150);
printf(" to");
delay(150);
printf(" continue:");
	       //page1 complete						  //page 1 ends
//---------------------------------------------------------------------
getch();
clrscr();
gotoxy(40,6);
//delay(400);
printf(" IMPORTANT INSTRUCTIONS:");
gotoxy(35,8);
//delay(350);
printf("1.YOU'RE ALMOST READY TO PLAY");
gotoxy(35,10);
//delay(300);
printf("2.PRESS ENTER AFTER ENTERING EACH VALUE");
gotoxy(35,12);
//delay(250);
printf("3.PLEASE DO NOT PRESS ENTER TWICE");
gotoxy(35,14);
//delay(200);
printf("4.ENTER ONLY VALUES FROM 1 TO 25");
gotoxy(38,15);
//delay(150);
printf("i.e. 1,2,3..............24,25");
gotoxy(1,4);
gotoxy(1,6);
printf("  B    I    N     G    O");
gotoxy(1 ,7);
printf(" ____ ____ ____ ____ ____ ");
gotoxy(1,8);
for(l=0;l<5;l++)
   {delay(250);
    printf("|    |    |    |    |    |\n");
    printf("|____|____|____|____|____|\n");
   }
z = 0;
for(k=8;k<17;k=k+2)
   {
     for(j=2;j<25;j=j+5)
	{
	  gotoxy(j,k);
	  scanf("%d",&a[z]);
	  if(a[z]>25||a[z]==0)
	    {
	     gotoxy(10,20);
	     printf("Please Read The INSTRUCTIONS Carefully");
	     delay(2000);
	     gotoxy(10,20);
	     printf("                                      ");
	     j=j-5;
	    }
	    else
	      z++;
    }
}
clrscr();
for(s=0;s<25;s++)
   {
    display(a,v);
    if(v==5)
      {
       //getch();
       break;
      }
    gotoxy(10,22);
    printf("Enter the value you want to cut:");
    scanf("%d",&value);
    if(value<26)
      {
       for(k=0;k<26;k++)
	  {
	    if(value==a[k])
	      {
		a[k]=0;
	      }
	  }
      }
     else
     {
      gotoxy(11,24);
      printf("Please Read The INSTRUCTIONS Carefully");
      delay(2000);
      gotoxy(11,24);
      printf("                                       ");
     }
    clrscr();//confusion
    if(b[0]==0)
      {
       if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)
	 {
	  v++;
	  b[0]=1;
	 }
       }
     if(b[1]==0)
      {
       if(a[5]==0&&a[6]==0&&a[7]==0&&a[8]==0&&a[9]==0)
	 {
	  v++;
	  b[1]=1;
	 }
       }
      if(b[2]==0)
      {
       if(a[10]==0&&a[11]==0&&a[12]==0&&a[13]==0&&a[14]==0)
	 {
	  v++;
	  b[2]=1;
	 }
       }
      if(b[3]==0)
      {
       if(a[15]==0&&a[16]==0&&a[17]==0&&a[18]==0&&a[19]==0)
	 {
	  v++;
	  b[3]=1;
	 }
       }
      if(b[4]==0)
      {
       if(a[20]==0&&a[21]==0&&a[22]==0&&a[23]==0&&a[24]==0)
	 {
	  v++;
	  b[4]=1;
	 }
       }
      if(b[5]==0)
      {
       if(a[0]==0&&a[5]==0&&a[10]==0&&a[15]==0&&a[20]==0)
	 {
	  v++;
	  b[5]=1;
	 }
       }
      if(b[6]==0)
      {
       if(a[1]==0&&a[6]==0&&a[11]==0&&a[16]==0&&a[21]==0)
	 {
	  v++;
	  b[6]=1;
	 }
       }
       if(b[7]==0)
      {
       if(a[2]==0&&a[7]==0&&a[12]==0&&a[17]==0&&a[22]==0)
	 {
	  v++;
	  b[7]=1;
	 }
       }
      if(b[8]==0)
      {
       if(a[3]==0&&a[8]==0&&a[13]==0&&a[18]==0&&a[23]==0)
	 {
	  v++;
	  b[8]=1;
	 }
       }
      if(b[9]==0)
      {
       if(a[4]==0&&a[9]==0&&a[14]==0&&a[19]==0&&a[24]==0)
	 {
	  v++;
	  b[9]=1;
	 }
       }
      if(b[10]==0)
      {
       if(a[0]==0&&a[6]==0&&a[12]==0&&a[18]==0&&a[24]==0)
	 {
	  v++;
	  b[10]=1;
	 }
       }
      if(b[11]==0)
      {
       if(a[4]==0&&a[8]==0&&a[12]==0&&a[16]==0&&a[20]==0)
	 {
	  v++;
	  b[11]=1;
	 }
       }
}
clrscr();
gotoxy(19,8);
printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
gotoxy(19,12);
printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
gotoxy(19,10);
printf("    C O N G R A T U L A T I O N S");
for(i=19;i<70;i=i+40)
   {
     for(j=9;j<13;j=j+1)
	{
	 gotoxy(i,j);
	 printf("|");
	}
   }
gotoxy(31,16);
printf("  B I N G O !!!!");
gotoxy(13,6);
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
gotoxy(13,19);
printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
getch();
/*clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 while(!kbhit())
      {
       for(i=0;i<=500;i++)
	  {
	   x=rand()%getmaxx();
	   y=rand()%getmaxy();
	   putpixel(x,y,15);
	   }
	delay(500);
	cleardevice();
	printf("B I N G O");
      }
 getch();
 closegraph();   */

}

