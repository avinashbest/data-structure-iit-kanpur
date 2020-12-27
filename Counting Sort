// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string arr[] in
// alphabatical order
char* countSort(char arr[]);

// Driver program to test above function
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        printf("%s\n", countSort(arr));
    }
    return 0;
}
// The main function that sort the given string arr[] in
// alphabatical order
// return the sorted char array
char* countSort(char arr[])
{
   int f[27]={0};int m=0;
   for(int i=0;arr[i]!='\0';i++){f[(arr[i]-'a')]++;m++;}
   int bnm[m+1];
   for(int i=1;i<=26;i++){f[i] = f[i]+f[i-1];}
   for(int i=0;arr[i]!='\0';i++){
      bnm[f[(arr[i]-'a')]-1]=arr[i];
      f[(arr[i]-'a')]--;
   }
   for(int i=0;arr[i];i++){arr[i]=bnm[i];}
   return arr;
}
