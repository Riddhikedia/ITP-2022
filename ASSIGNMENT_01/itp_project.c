#include<stdio.h>
int main(){
int p,q,r,i;
 printf("Enter the size of first array\n");
scanf("%d", &p);
printf("Enter the size of second array\n");
scanf("%d", &q);
r=p+q;   
int a[p],b[q],c[r];  // array declaration
printf("Enter the %d numbers for first array\n",p);
for(i=0;i<=p-1;i++){   // i = i+1
    scanf("%d", &a[i]); //body                            
    
}
printf("Enter the %d numbers for second array\n",q);                   
for(i=0;i<=q-1;i++){
    scanf("%d", &b[i]);
}
printf("Merging the two arrays\n");  
for(i=0;i<=p-1;i++)
c[i]=a[i];                        // 
for(i=0;i<=q-1;i++)
c[i+p]=b[i];             
for(i=0;i<=r-1;i++)
printf("%d", c[i]);      
printf("\nReversing the third array\n");
for(i=r-1;i>=0;i--)
printf("%d", c[i]);  
return 0;
}


