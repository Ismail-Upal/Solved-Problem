#include<stdio.h>
#define cycle 5

#ifdef _WIN32 // windows
#include<conio.h> // clear screen
#define sleep(x) Sleep(x*1000)
#else
#include<unistd.h> // linax
#endif // _WIN32
int main ( )
{
int hour,minute,second;
printf("Enter the hour minute second : ");
scanf("%d%d%d", &hour, &minute, &second);
 // ayta te pblm undefined boltace

int h=0, m=0, s=0;
while (1)
{
  printf("%.2d:%.2d:%.2d\n", h, m, s);
  if(h==hour && m==minute && s== second){
    break;
  }
  else {
 
  }
  s++;

  if(s==cycle){
    m++;
  s= 0;
  }
  if(m==cycle){
    h++;
  m= 0;
  }

}



return 0;
}