#include<stdio.h>
main()
{
  int n,i,fact=1;
  printf("\n Enter n= ");
  scnaf("%d",&n);
  fact(n);
}

  void fact(n)
  {
  for(i=1;i<n;i++)
  {
    fact=fact*1;
  }
  printf("\n fact=%d",fact)
}
