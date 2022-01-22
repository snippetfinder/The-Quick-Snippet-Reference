#include<stdio.h>
#include<stdlib.h>
int main(){
   int m,n,o,i,j,k,temp;
   n = 6;
   m = 6;

   o=m+n;

   int a[] = {3, 2, 1};
   int b[] = {100, 200, 300};
   int c[20];


   //sorting array 1
   for(i=0;i<n;i++){
      for(j=0;j<n-1-i;j++){
         if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }


   //sorting array 2
   for(i=0;i<m;i++){
      for(j=0;j<m-1-i;j++){
         if(b[j]>b[j+1]){
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
         }
      }
   }

   printf("Elements of Array1\n");
   for(i=0;i<n;i++){
      printf("a[%d]=%d\n",i,a[i]);
   }
   printf("Elements of Array2\n");
   for(i=0;i<m;i++){
      printf("b[%d]=%d\n",i,b[i]);
   }



   j=0;
   k=0;
   for(i=0;i<o;i++){ // merging two arrays
      if(a[j]<=b[k]){
         c[i]=a[j];
         j++;
      }
      else{
         c[i]=b[k];
         k++;
      }
   }


   printf("Merged array is :\n");
   for(i=0;i<o;i++){
      printf("c[%d]=%d\n",i,c[i]);
   }
}