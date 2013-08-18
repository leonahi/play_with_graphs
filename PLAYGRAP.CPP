/*  Play With Graph  */

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int getscan();
void playwithgraph(void);
void front(void);
void exit1(int,int,int);
void exit2(int,int);
void para(int,int);
void parabola(int,int);
void straightline(int,int);
void sl(int,int);
void log(int,int);
void logarithm(int,int);
void exp(int,int);
void exponant(int,int);
void modpara(int,int);
void modparabola(int,int);
void modstraight(int,int);
void modstraightline(int,int);
void graph(void);
void straightlinegraph(void);
void parabolagraph(void);
void loggraph(void);
void expograph(void);
void modparagraph();
void modstraight(void);
void add(int,int);
void add2(int,int);
void creator(void);
main()
{
 int gdriver=DETECT,gmode,errorcode,choice,select;
 int opt,i=0,j=5,k=5,l=15;
 int c1=320,c2=105,r1=100;
 int c3=120,c4=255,r2=50;
 int c5=520,c6=255,r3=50;
 int c9=120,c10=405,r5=50;
 int c7=520,c8=405,r4=50;
 int c11=120,c12=555,r6=50;
 int c13=320,c14=555,r7=50;
 int c15=520,c16=555,r8=50;
 initgraph(&gdriver,&gdriver,"");
 front();
getch();
cleardevice();
setbkcolor(5);
playwithgraph();
setcolor(15);
exit1(c1,c2,j);
para(c3,c4);
sl(c9,c10);
log(c11,c12);
modstraight(c7,c8);
add(c5,c6);
circle(c1,c2,r1);
circle(c3,c4,r2);
circle(c5,c6,r3);
circle(c9,c10,r5);
circle(c7,c8,r4);
while(1)
{

i=0;                                 /* 1-page */
page1:
opt=getscan();
if(opt==28)
{
exit(0);
}
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
		exit1(c1,c2,j);
		exp(c13,c14);
		modpara(c15,c16);
circle(c1,c2,r1);
circle(c13,c14,r7);
circle(c15,c16,r8);
delay(5);
setcolor(k);
		exit1(c1,c2,j);
		exp(c13,c14);
		modpara(c15,c16);
circle(c1,c2,r1);
circle(c13,c14,r7);
circle(c15,c16,r8);
c1+=4;
r1--;
c13-=4;
c15-=4;
i++;
setcolor(15);
		exit1(c1,c2,j);
		exp(c13,c14);
		modpara(c15,c16);
circle(c1,c2,r1);
circle(c13,c14,r7);
circle(c15,c16,r8);
}
i=0;
setcolor(k);
exit1(c1,c2,j);
while(i<150)
{
setcolor(15);
		      exit2(c1,c2);
		      modstraight(c7,c8);
		      add(c5,c6);
circle(c1,c2,r1);
circle(c5,c6,r3);
circle(c7,c8,r4);
delay(1);
setcolor(k);
		      exit2(c1,c2);
		      modstraight(c7,c8);
		      add(c5,c6);
circle(c1,c2,r1);
circle(c5,c6,r3);
circle(c7,c8,r4);
c2++;
c6++;
c8++;
i++;
setcolor(15);
		     exit2(c1,c2);
		     modstraight(c7,c8);
		     add(c5,c6);
circle(c1,c2,r1);
circle(c5,c6,r3);
circle(c7,c8,r4);
}
i=0;
while(i<150)
{
setcolor(15);
		   para(c3,c4);
		   sl(c9,c10);
		   log(c11,c12);
circle(c3,c4,r2);
circle(c9,c10,r5);
circle(c11,c12,r6);
delay(1);
setcolor(k);
		   para(c3,c4);
		   sl(c9,c10);
		   log(c11,c12);
circle(c3,c4,r2);
circle(c9,c10,r5);
circle(c11,c12,r6);
c4--;
c10--;
c12--;
i++;
setcolor(15);
		   para(c3,c4);
		   sl(c9,c10);
		   log(c11,c12);
circle(c3,c4,r2);
circle(c9,c10,r5);
circle(c11,c12,r6);
}
		   setcolor(0);
		   para(c3,c4);
i=0;
while(i<50)
{
setcolor(15);
		   parabola(c3,c4);
circle(c3,c4,r2);
delay(5);
setcolor(k);
		   parabola(c3,c4);
circle(c3,c4,r2);
c3+=4;
r2++;
i++;
setcolor(15);
		   parabola(c3,c4);
circle(c3,c4,r2);
}
}
else
{
goto page1;
}

i=0;                                /* 2-page */
page2:
setcolor(l);
parabola(c3,c4);
opt=getscan();
setcolor(k);
parabola(c3,c4);
if(opt==28)
{
graph();
parabolagraph();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}

if(opt==77)
{
sound(2500);
delay(400);
nosound();

while(i<50)
{
setcolor(15);
		   para(c3,c4);
		   modpara(c15,c16);
		   modstraight(c7,c8);
circle(c3,c4,r2);
circle(c7,c8,r4);
circle(c15,c16,r8);
delay(5);
setcolor(k);
		   para(c3,c4);
		   modpara(c15,c16);
		   modstraight(c7,c8);
circle(c3,c4,r2);
circle(c7,c8,r4);
circle(c15,c16,r8);
c3+=4;
r2--;
c7-=4;
c15-=4;
i++;
setcolor(15);
		   para(c3,c4);
		   modpara(c15,c16);
		   modstraight(c7,c8);
circle(c3,c4,r2);
circle(c7,c8,r4);
circle(c15,c16,r8);
}
i=0;
while(i<150)
{
setcolor(15);
		  exit2(c1,c2);
		  para(c3,c4);
		  add(c5,c6);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c5,c6,r3);
delay(1);
setcolor(k);
		  exit2(c1,c2);
		  para(c3,c4);
		  add(c5,c6);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c5,c6,r3);
c4++;
c2++;
c6++;
i++;
setcolor(15);
		  exit2(c1,c2);
		  para(c3,c4);
		  add(c5,c6);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c5,c6,r3);
}
i=0;
while(i<150)
{
setcolor(15);
		   sl(c9,c10);
		   log(c11,c12);
		   exp(c13,c14);
circle(c13,c14,r7);
circle(c9,c10,r5);
circle(c11,c12,r6);
delay(1);
setcolor(k);
		   sl(c9,c10);
		   log(c11,c12);
		   exp(c13,c14);
circle(c13,c14,r7);
circle(c9,c10,r5);
circle(c11,c12,r6);
c14--;
c10--;
c12--;
i++;
setcolor(15);
		   sl(c9,c10);
		   log(c11,c12);
		   exp(c13,c14);
circle(c13,c14,r7);
circle(c9,c10,r5);
circle(c11,c12,r6);
}
i=0;
setcolor(k);
sl(c9,c10);
while(i<50)
{
setcolor(15);
		     straightline(c9,c10);
circle(c9,c10,r5);
delay(5);
setcolor(k);
		     straightline(c9,c10);
circle(c9,c10,r5);
c9+=4;
r5++;
i++;
setcolor(15);
		      straightline(c9,c10);
circle(c9,c10,r5);
}
}
else
{
goto page2;
}


i=0;                              /* 3-page */
page3:
setcolor(l);
straightline(c9,c10);
opt=getscan();
if(opt==28)
{
graph();
straightlinegraph();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
straightline(c9,c10);
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
		    sl(c9,c10);
		    modstraight(c7,c8);
		    add(c5,c6);
circle(c9,c10,r5);
circle(c7,c8,r4);
circle(c5,c6,r3);
delay(5);
setcolor(k);
		    sl(c9,c10);
		    modstraight(c7,c8);
		    add(c5,c6);
circle(c9,c10,r5);
circle(c7,c8,r4);
circle(c5,c6,r3);
c9+=4;
r5--;
c7-=4;
c5-=4;
i++;
setcolor(15);
		    sl(c9,c10);
		    modstraight(c7,c8);
		    add(c5,c6);
circle(c9,c10,r5);
circle(c7,c8,r4);
circle(c5,c6,r3);
}
i=0;
while(i<150)
{
setcolor(15);
		   exit2(c1,c2);
		   para(c3,c4);
		   sl(c9,c10);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c9,c10,r5);
delay(1);
setcolor(k);
		   exit2(c1,c2);
		   para(c3,c4);
		   sl(c9,c10);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c9,c10,r5);
c4++;
c2++;
c10++;
i++;
setcolor(15);
		   exit2(c1,c2);
		   para(c3,c4);
		   sl(c9,c10);
circle(c3,c4,r2);
circle(c1,c2,r1);
circle(c9,c10,r5);
}
i=0;
while(i<150)
{
setcolor(15);
		       log(c11,c12);
		       exp(c13,c14);
		       modpara(c15,c16);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c11,c12,r6);
delay(1);
setcolor(k);
		       log(c11,c12);
		       exp(c13,c14);
		       modpara(c15,c16);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c11,c12,r6);
c14--;
c16--;
c12--;
i++;
setcolor(15);
		       log(c11,c12);
		       exp(c13,c14);
		       modpara(c15,c16);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c11,c12,r6);
}
i=0;
setcolor(k);
log(c11,c12);
while(i<50)
{
setcolor(15);
		       logarithm(c11,c12);
circle(c11,c12,r6);
delay(5);
setcolor(k);
		       logarithm(c11,c12);
circle(c11,c12,r6);
c11+=4;
r6++;
i++;
setcolor(15);
		       logarithm(c11,c12);
circle(c11,c12,r6);
}
}
else
{
goto page3;
}

i=0;                              /* 4-page */
page4:
setcolor(l);
logarithm(c11,c12);
opt=getscan();
if(opt==28)
{
graph();
loggraph();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
logarithm(c11,c12);
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
			  exit2(c1,c2);
			  log(c11,c12);
			  add(c5,c6);
circle(c11,c12,r6);
circle(c1,c2,r1);
circle(c5,c6,r3);
delay(5);
setcolor(k);
			 exit2(c1,c2);
			 log(c11,c12);
			 add(c5,c6);
circle(c11,c12,r6);
circle(c1,c2,r1);
circle(c5,c6,r3);
c11+=4;
r6--;
c1-=4;
c5-=4;
i++;
setcolor(15);
			  exit2(c1,c2);
			  log(c11,c12);
			  add(c5,c6);
circle(c11,c12,r6);
circle(c1,c2,r1);
circle(c5,c6,r3);
}
i=0;
while(i<150)
{
setcolor(15);
		      para(c3,c4);
		      sl(c9,c10);
		      log(c11,c12);
circle(c3,c4,r2);
circle(c11,c12,r6);
circle(c9,c10,r5);
delay(1);
setcolor(k);
		      para(c3,c4);
		      sl(c9,c10);
		      log(c11,c12);
circle(c3,c4,r2);
circle(c11,c12,r6);
circle(c9,c10,r5);
c4++;
c12++;
c10++;
i++;
setcolor(15);
		      para(c3,c4);
		      sl(c9,c10);
		      log(c11,c12);
circle(c3,c4,r2);
circle(c11,c12,r6);
circle(c9,c10,r5);
}
i=0;
while(i<150)
{
setcolor(15);
		      exp(c13,c14);
		      modpara(c15,c16);
		      modstraight(c7,c8);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c7,c8,r4);
delay(1);
setcolor(k);
		      exp(c13,c14);
		      modpara(c15,c16);
		      modstraight(c7,c8);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c7,c8,r4);
c14--;
c16--;
c8--;
i++;
setcolor(15);
		      exp(c13,c14);
		      modpara(c15,c16);
		      modstraight(c7,c8);
circle(c13,c14,r7);
circle(c15,c16,r8);
circle(c7,c8,r4);
}
i=0;
setcolor(k);
exp(c13,c14);
while(i<50)
{
setcolor(15);
		      exponant(c13,c14);
circle(c13,c14,r7);
delay(5);
setcolor(k);
		      exponant(c13,c14);
circle(c13,c14,r7);
c13+=4;
r7++;
i++;
setcolor(15);
		      exponant(c13,c14);
circle(c13,c14,r7);
}
}
else
{
goto page4;
}

i=0;                              /* 5-page */
page5:
setcolor(l);
exponant(c13,c14);
opt=getscan();
if(opt==28)
{
graph();
expograph();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
exponant(c13,c14);
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
circle(c13,c14,r7);
		      exit2(c1,c2);
		      para(c3,c4);
		      exp(c13,c14);
circle(c1,c2,r1);
circle(c3,c4,r2);
delay(5);
setcolor(k);
circle(c13,c14,r7);
		      para(c3,c4);
		      exit2(c1,c2);
		      exp(c13,c14);
circle(c1,c2,r1);
circle(c3,c4,r2);
c13+=4;
r7--;
c1-=4;
c3-=4;
i++;
setcolor(15);
circle(c13,c14,r7);
		      exit2(c1,c2);
		      para(c3,c4);
		      exp(c13,c14);
circle(c1,c2,r1);
circle(c3,c4,r2);
}
i=0;
while(i<150)
{
setcolor(15);
		      sl(c9,c10);
		      log(c11,c12);
		      exp(c13,c14);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c9,c10,r5);
delay(1);
setcolor(k);
		      sl(c9,c10);
		      log(c11,c12);
		      exp(c13,c14);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c9,c10,r5);
c14++;
c12++;
c10++;
i++;
setcolor(15);
		      sl(c9,c10);
		      log(c11,c12);
		      exp(c13,c14);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c9,c10,r5);
}
i=0;
while(i<150)
{
setcolor(15);
		      modpara(c15,c16);
		      modstraight(c7,c8);
		      add(c5,c6);
circle(c5,c6,r3);
circle(c15,c16,r8);
circle(c7,c8,r4);
delay(1);
setcolor(k);
		      modpara(c15,c16);
		      modstraight(c7,c8);
		      add(c5,c6);
circle(c5,c6,r3);
circle(c15,c16,r8);
circle(c7,c8,r4);
c6--;
c16--;
c8--;
i++;
setcolor(15);
			modpara(c15,c16);
			modstraight(c7,c8);
			add(c5,c6);
circle(c5,c6,r3);
circle(c15,c16,r8);
circle(c7,c8,r4);
}
i=0;
setcolor(k);
modpara(c15,c16);
while(i<50)
{
setcolor(15);
		    modparabola(c15,c16);
circle(c15,c16,r8);
delay(5);
setcolor(k);
		    modparabola(c15,c16);
circle(c15,c16,r8);
c15+=4;
r8++;
i++;
setcolor(15);
		    modparabola(c15,c16);
circle(c15,c16,r8);
}
}
else
{
goto page5;
}

i=0;                              /* 6-page */
page6:
setcolor(l);
modparabola(c15,c16);
opt=getscan();
if(opt==28)
{
graph();
modparagraph();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
modparabola(c15,c16);
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
		      para(c3,c4);
		      sl(c9,c10);
		      modpara(c15,c16);
circle(c15,c16,r8);
circle(c9,c10,r5);
circle(c3,c4,r2);
delay(5);
setcolor(k);
		      para(c3,c4);
		      sl(c9,c10);
		      modpara(c15,c16);
circle(c15,c16,r8);
circle(c9,c10,r5);
circle(c3,c4,r2);
c15+=4;
r8--;
c9-=4;
c3-=4;
i++;
setcolor(15);
		      para(c3,c4);
		      sl(c9,c10);
		      modpara(c15,c16);
circle(c15,c16,r8);
circle(c9,c10,r5);
circle(c3,c4,r2);
}
i=0;
while(i<150)
{
setcolor(15);
		      log(c11,c12);
		      exp(c13,c14);
		      modpara(c15,c16);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c15,c16,r8);
delay(1);
setcolor(k);
		      log(c11,c12);
		      exp(c13,c14);
		      modpara(c15,c16);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c15,c16,r8);
c14++;
c12++;
c16++;
i++;
setcolor(15);
		       log(c11,c12);
		       exp(c13,c14);
		       modpara(c15,c16);
circle(c13,c14,r7);
circle(c11,c12,r6);
circle(c15,c16,r8);
}
i=0;
while(i<150)
{
setcolor(15);
		       exit2(c1,c2);
		       modstraight(c7,c8);
		       add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c7,c8,r4);
delay(1);
setcolor(k);
		       modstraight(c7,c8);
		       exit2(c1,c2);
		       add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c7,c8,r4);
c6--;
c2--;
c8--;
i++;
setcolor(15);
			 exit2(c1,c2);
			 modstraight(c7,c8);
			 add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c7,c8,r4);
}
i=0;
setcolor(k);
modstraight(c7,c8);
while(i<50)
{
setcolor(15);
		   modstraightline(c7,c8);
circle(c7,c8,r4);
delay(5);
setcolor(k);
		   modstraightline(c7,c8);
circle(c7,c8,r4);
c7+=4;
r4++;
i++;
setcolor(15);
		    modstraightline(c7,c8);
circle(c7,c8,r4);
}
}
else
{
goto page6;
}

i=0;                               /* 7-page */
page7:
setcolor(l);
modstraightline(c7,c8);
opt=getscan();
if(opt==28)
{
graph();
modstraight();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
modstraightline(c7,c8);
if(opt==77)
{
sound(2500);
delay(400);
nosound();
while(i<50)
{
setcolor(15);
		     sl(c9,c10);
		     log(c11,c12);
		     modstraight(c7,c8);
circle(c7,c8,r4);
circle(c9,c10,r5);
circle(c11,c12,r6);
delay(10);
setcolor(k);
		     sl(c9,c10);
		     log(c11,c12);
		     modstraight(c7,c8);
circle(c7,c8,r4);
circle(c9,c10,r5);
circle(c11,c12,r6);
c7+=4;
r4--;
c9-=4;
c11-=4;
i++;
setcolor(15);
		     sl(c9,c10);
		     log(c11,c12);
		     modstraight(c7,c8);
circle(c7,c8,r4);
circle(c9,c10,r5);
circle(c11,c12,r6);
}
i=0;
while(i<150)
{
setcolor(15);
			exp(c13,c14);
			modpara(c15,c16);
			modstraight(c7,c8);
circle(c13,c14,r7);
circle(c7,c8,r4);
circle(c15,c16,r8);
delay(1);
setcolor(k);
			 exp(c13,c14);
			 modpara(c15,c16);
			 modstraight(c7,c8);
circle(c13,c14,r7);
circle(c7,c8,r4);
circle(c15,c16,r8);
c14++;
c8++;
c16++;
i++;
setcolor(15);
			 exp(c13,c14);
			 modpara(c15,c16);
			 modstraight(c7,c8);
circle(c13,c14,r7);
circle(c7,c8,r4);
circle(c15,c16,r8);
}
i=0;
while(i<150)
{
setcolor(15);
			exit2(c1,c2);
			para(c3,c4);
			add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c3,c4,r2);
delay(1);
setcolor(k);
			 exit2(c1,c2);
			 para(c3,c4);
			 add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c3,c4,r2);
c6--;
c2--;
c4--;
i++;
setcolor(15);
			 exit2(c1,c2);
			 para(c3,c4);
			 add(c5,c6);
circle(c5,c6,r3);
circle(c1,c2,r1);
circle(c3,c4,r2);
}
i=0;
setcolor(k);
add(c5,c6);
while(i<50)
{
setcolor(15);
		   add2(c5,c6);
circle(c5,c6,r3);
delay(5);
setcolor(k);
		   add2(c5,c6);
circle(c5,c6,r3);
c5+=4;
r3++;
i++;
setcolor(15);
		   add2(c5,c6);
circle(c5,c6,r3);
}
}
else
{
goto page7;
}

i=0;                               /* 8-page */
page8:
setcolor(l);
add2(c5,c6);
opt=getscan();
if(opt==28)
{
creator();
getch();
cleardevice();
playwithgraph();
setbkcolor(5);
}
setcolor(k);
add2(c5,c6);
if(opt==77)
{
sound(2500);
delay(200);
nosound();
while(i<50)
{
setcolor(15);
		      log(c11,c12);
		      exp(c13,c14);
		      add(c5,c6);
circle(c5,c6,r3);
circle(c13,c14,r7);
circle(c11,c12,r6);
delay(5);
setcolor(k);
			log(c11,c12);
			exp(c13,c14);
			add(c5,c6);
circle(c5,c6,r3);
circle(c13,c14,r7);
circle(c11,c12,r6);
c5+=4;
r3--;
c13-=4;
c11-=4;
i++;
setcolor(15);
			 log(c11,c12);
			 exp(c13,c14);
			 add(c5,c6);
circle(c5,c6,r3);
circle(c13,c14,r7);
circle(c11,c12,r6);
}
i=0;
while(i<150)
{
setcolor(15);
			modpara(c15,c16);
			modstraight(c7,c8);
			add(c5,c6);
circle(c5,c6,r3);
circle(c7,c8,r4);
circle(c15,c16,r8);
delay(1);
setcolor(k);
			modpara(c15,c16);
			modstraight(c7,c8);
			add(c5,c6);
circle(c5,c6,r3);
circle(c7,c8,r4);
circle(c15,c16,r8);
c6++;
c8++;
c16++;
i++;
setcolor(15);
			 modpara(c15,c16);
			 modstraight(c7,c8);
			 add(c5,c6);
circle(c5,c6,r3);
circle(c7,c8,r4);
circle(c15,c16,r8);
}
i=0;
while(i<150)
{
setcolor(15);
			 exit2(c1,c2);
			 para(c3,c4);
			 sl(c9,c10);
circle(c9,c10,r5);
circle(c1,c2,r1);
circle(c3,c4,r2);
delay(1);
setcolor(k);
			 exit2(c1,c2);
			 para(c3,c4);
			 sl(c9,c10);
circle(c9,c10,r5);
circle(c1,c2,r1);
circle(c3,c4,r2);
c10--;
c2--;
c4--;
i++;
setcolor(15);
			  exit2(c1,c2);
			  para(c3,c4);
			  sl(c9,c10);
circle(c9,c10,r5);
circle(c1,c2,r1);
circle(c3,c4,r2);
}
i=0;
setcolor(k);
exit2(c1,c2);
while(i<50)
{
setcolor(15);
		 exit1(c1,c2,j);
circle(c1,c2,r1);
delay(5);
setcolor(k);
		 exit1(c1,c2,j);
circle(c1,c2,r1);
c1+=4;
r1++;
i++;
setcolor(15);
		 exit1(c1,c2,j);
circle(c1,c2,r1);
}
}
else
{
goto page8;
}

}

getch();
}
int getscan()
{
union REGS i,o;
i.h.ah=0;
int86(22,&i,&o);
return(o.h.ah);
}

/* 1-page */
void exit1(int c1,int c2,int j)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,j);
outtextxy(c1-40,c2-22,"EXIT");
}
void exit2(int c1,int c2)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c1-15,c2-30,"X");
}

/* 2-page */
void para(int c3,int c4)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c3-27,c4-32,"Pa");
}
void parabola(int c3,int c4)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c3-72,c4-19,"PARABOLA");
}

/* 3-page */
void sl(int c9,int c10)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c9-24,c10-32,"St");
}
void straightline(int c9,int c10)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c9-72,c10-32,"STRAIGHT");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c9-37,c10+5,"LINE");
}

/* 4-page */
void log(int c11,int c12)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c11-24,c12-32,"Lo");
}
void logarithm(int c11,int c12)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c11-79,c12-19,"LOGARITHM");
}

/* 5-page */
void exp(int c13,int c14)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c13-24,c14-32,"Ex");
}
void exponant(int c13,int c14)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c13-90,c14-19,"Exponential");
}

/* 6-page */
void modpara(int c15,int c16)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(c15-40,c16-28,"P");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c15-18,c16-18,"a(M)");
}
void modparabola(int c15,int c16)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c15-36,c16-37,"MOD -");
outtextxy(c15-72,c16,"PARABOLA");
}

/* 7-page */
void modstraight(int c7,int c8)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(c7-40,c8-28,"S");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c7-18,c8-18,"t(M)");
}
void modstraightline(int c7,int c8)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(c7-36,c8-42,"MOD -");
outtextxy(c7-89,c8-5,"Straightline");
}

/* 8-page */
void add(int c5,int c6)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c5-17,c6-32,"A");
}
void add2(int c5,int c6)
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(c5-36,c6-33,"AD");
}

void graph(void)
{
cleardevice();
setbkcolor(0);
setcolor(15);
int i=0,j=341,k=299,l=271,m=229,n=1;

 line(40,250,600,250);                  /*    x-axis   */
 line(320,30,320,465);                  /*    y-axis   */
while(i<12)                             /* +ve x-axis  */
{
 line(j,247,j,253);
 j=j+21;
 i++;
}
  i=0;
while(i<12)                             /* -ve x-axis */
{
 line(k,247,k,253);
 k=k-21;
 i++;
}
i=0;
while(i<10)                             /* -ve y-axis */
{
 line(317,l,323,l);
 l=l+21;
 i++;
}
i=0;
while(i<10)                             /* +ve y-axis */
{
 line(317,m,323,m);
 m=m-21;
 i++;
}
setcolor(7);

settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(590,260,"x-axis");
 outtextxy(280,20,"y-axis");
settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(510,5,"SCALE- 1cm = 21pixels");

settextstyle(SMALL_FONT,HORIZ_DIR,2);
 outtextxy(341,255,"1");                 /* +ve x-axis no. */
 outtextxy(362,255,"2");
 outtextxy(383,255,"3");
 outtextxy(404,255,"4");
 outtextxy(425,255,"5");
 outtextxy(446,255,"6");
 outtextxy(467,255,"7");
 outtextxy(488,255,"8");
 outtextxy(509,255,"9");
 outtextxy(530,255,"10");
 outtextxy(551,255,"11");
 outtextxy(572,255,"12");

 outtextxy(299,255,"-1");                 /* -ve x-axis no. */
 outtextxy(277,255,"-2");
 outtextxy(256,255,"-3");
 outtextxy(235,255,"-4");
 outtextxy(214,255,"-5");
 outtextxy(193,255,"-6");
 outtextxy(172,255,"-7");
 outtextxy(151,255,"-8");
 outtextxy(130,255,"-9");
 outtextxy(109,255,"-10");
 outtextxy(88,255,"-11");
 outtextxy(67,255,"-12");

 outtextxy(326,225,"1");                 /* +ve y-axis no. */
 outtextxy(326,204,"2");
 outtextxy(326,183,"3");
 outtextxy(326,162,"4");
 outtextxy(326,141,"5");
 outtextxy(326,120,"6");
 outtextxy(326,99,"7");
 outtextxy(326,78,"8");
 outtextxy(326,57,"9");
 outtextxy(326,36,"10");

 outtextxy(326,267,"-1");                 /* -ve y-axis no. */
 outtextxy(326,288,"-2");
 outtextxy(326,309,"-3");
 outtextxy(326,330,"-4");
 outtextxy(326,351,"-5");
 outtextxy(326,372,"-6");
 outtextxy(326,393,"-7");
 outtextxy(326,414,"-8");
 outtextxy(326,435,"-9");
 outtextxy(326,456,"-10");
}

/* straight line graph */
void straightlinegraph(void)
{
 float x=0,y,a,b;
 int i=0;
 setcolor(11);
 settextstyle(SMALL_FONT,HORIZ_DIR,8);
 outtextxy(0,0,"Y = a*X+b");
 printf("Enter The Value of a = ");
 scanf("%f",&a);
 printf("Enter The Value of b = ");
 scanf("%f",&b);
 b=b*21;
 i=0;
while(i<210)
{
 y=a*x+b;
 putpixel(x+320,250-y,9);
 putpixel(320-x,y+250-2*b,9);
 x=x+1;
 i++;
 delay(10);
}
}

/* parabolagraph */
void parabolagraph(void)
{
 float x,y,a,b,c;
 int i=0;
 setcolor(3);
 settextstyle(SMALL_FONT,HORIZ_DIR,7);
 outtextxy(3,3,"Y = a*X + b*X + c");
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(87,0,"2");
 printf("\n\nEnter The Value of a =");
 scanf("%f",&a);
 printf("Enter The Value of b =");
 scanf("%f",&b);
 printf("Enter The Value of c =");
 scanf("%f",&c);
i=0;
x=0;
while(i<126)
{
 y=(a*x*x)+(b*x)+c;
 putpixel(x*21+320,250-(y*21),9);
 x=x+.047619;
 i++;
 delay(10);
}
i=0;
x=0;
while(i<126)
{
 y=(a*x*x)+(b*x)+c;
 putpixel(320+(x*21),250-(y*21),9);
 x=x-.047619;
 i++;
 delay(10);
}
}

/* log graph */
void loggraph(void)
{
 float x,y,a,b,c,d;
 int i=0;
 setcolor(3);
 settextstyle(SMALL_FONT,HORIZ_DIR,7);
 outtextxy(3,3,"Y = d*log(b*X) + c");
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(108,20,"a");
 printf("Enter The Value of d =");
 scanf("%f",&d);
 printf("Enter The Value of a =");
 scanf("%f",&a);
 printf("Enter The Value of b =");
 scanf("%f",&b);
 printf("Enter The Value of c =");
 scanf("%f",&c);

i=0;
y=0;
while(i<100)
{
if(a<=0||a==1)
 {
  settextstyle(SMALL_FONT,HORIZ_DIR,7);
  outtextxy(50,90,"DOMAIN error");
  getch();
  break;
 }
 x=pow(a,(y-c)/d)/b;
 putpixel(x*21+320,250-(y*21),9);
 y=y+.047619;
 i++;
 delay(10);
}

i=0;
y=0;
while(i<126)
{
if(a<=0||a==1)
 {
  settextstyle(SMALL_FONT,HORIZ_DIR,7);
  outtextxy(50,90,"DOMAIN error");
  getch();
  break;
 }
 x=pow(a,(y-c)/d)/b;
 putpixel(320+(x*21),250-(y*21),9);
 y=y-.047619;
 i++;
 delay(10);
}
}

/* exp graph */
void expograph(void)
{
float x,y,a,b,c;
int i=0;
setcolor(3);
 settextstyle(SMALL_FONT,HORIZ_DIR,7);
 outtextxy(3,3,"Y = a*exp(b*X)+c");
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 printf("Enter The Value of a =");
 scanf("%f",&a);
 printf("Enter The Value of b =");
 scanf("%f",&b);
 printf("Enter the value of c =");
 scanf("%f",&c);
i=0;
x=0;
while(i<126)
{
 y=a*pow(2.73,(b*x))+c;
 putpixel(320+(21*x),250-(y*21),9);
 x=x+.047619;
 i++;
 delay(10);
}
i=0;
x=0;
while(i<150)
{
 y=a*pow(2.73,(b*x))+c;
 putpixel(320+(x*21),250-(y*21),9);
 x=x-.047619;
 i++;
 delay(10);
}
}

/* modpara graph */
void modparagraph(void)
{
 float x,y,a,b,c;
 int i=0;
 settextstyle(SMALL_FONT,HORIZ_DIR,7);
 outtextxy(3,3,"Y = |a*X + b*X + c|");
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(87,0,"2");
 printf("Enter The Value of a =");
 scanf("%f",&a);
 printf("Enter The Value of b =");
 scanf("%f",&b);
 printf("Enter The Value of c =");
 scanf("%f",&c);
i=0;
x=0;
while(i<150)
{
 y=(a*x*x)+(b*x)+c;
 if(y<0)
 {
 putpixel(x*21+320,250+(y*21),9);
 }
 else
 {
 putpixel(x*21+320,250-(y*21),9);
 }
 x=x+.047619;
 i++;
 delay(10);
}

i=0;
x=0;
while(i<150)
{
 y=(a*x*x)+(b*x)+c;
 if(y<0)
 {
 putpixel(320+(x*21),250+(y*21),9);
 }
 else
 {
 putpixel(320+(x*21),250-(y*21),9);
 }
 x=x-.047619;
 i++;
 delay(10);
}
}

/* mod of straightline */
void modstraight(void)
{
 float x=0,y,a,b;
 int i=0;
 setcolor(11);
 settextstyle(SMALL_FONT,HORIZ_DIR,8);
 outtextxy(0,0,"Y = |a*X+b|");
 printf("Enter The Value of a = ");
 scanf("%f",&a);
 printf("Enter The Value of b = ");
 scanf("%f",&b);
 i=0;
while(i<310)
{
 y=a*x+b;
 if(y<0)
 {
 putpixel(x*21+320,250+(y*21),9);
 }
 else
 {
 putpixel(x*21+320,250-y*21,9);
 }
 x=x+.047619;
 i++;
 delay(5);
}
i=0;
x=0;
while(i<310)
{
 y=a*x+b;
 if(y<0)
 {
 putpixel(x*21+320,250+(y*21),9);
 }
 else
 {
 putpixel(x*21+320,250-y*21,9);
 }
 x=x-.047619;
 i++;
 delay(5);
}
}

void creator()
{
cleardevice();
setcolor(1);
setbkcolor(5);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(180,150,"Name -");
}

void front(void)                 /* we make your dream text */
{
 int i=0,j=2,val,k=0;
 setcolor(7);
 setbkcolor(4);
   while(i<=5)
    {
     cleardevice();
     settextstyle(SANS_SERIF_FONT,HORIZ_DIR,j);
     outtextxy(282,200,"y");
     outtextxy(269,200," ");
     outtextxy(305,200,"o");
     outtextxy(232,200,"e");
     outtextxy(334,200,"u");
     outtextxy(211,200,"k");
     outtextxy(363,200,"r");
     outtextxy(181,200,"a");
     outtextxy(131,200,"m");
     outtextxy(407,200,"D");
     outtextxy(82,200,"e");
     outtextxy(440,200,"r");
     outtextxy(39,200,"W");
     outtextxy(459,200,"e");
     outtextxy(487,200,"a");
     outtextxy(518,200,"m");
     outtextxy(568,200,"s");
     delay(1000);
     j++;
     i++;
    }
j--;
}

void playwithgraph(void)
{
setcolor(1);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(250,210,"PLAY");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(275,280,"with");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(203,320,"GRAPHS");
}
