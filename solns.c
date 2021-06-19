/* Enter your solutions in this file */
/*average function*/
float average(int a[], int n)
{
  int i;
  float sum=0.0;
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return(sum/n);
}

/*maximum function*/
int max(int a[], int n)
{
  int i,k;
  k=a[0];
  for(i=1;i<n;++i)
    if(a[i])>k)
      k=a[i];
}
return k;
}

/*minimum function*/

int min(int a[], int n)
{
  int i,k;
  k=a[0];
  for(i=1;i<n;++i)
  {
    if(a[i]<k)
      k=a[i];
  }
  return k;
}

/*mode funtion*/

int mode(int a[], int n)
{
  int modev=0, maxc=0, count=0,i,j;
  for(i=0;i<n;++i)
  {
    for(j=0;j<n;++j)
      if(a[j]==a[i])
        count++;
  }
  if(count>maxc)
  {
    maxc=count;
    modev=a[i];
  }
}
return modev;
  
