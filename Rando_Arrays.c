#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int minmax(int g);
int main()
{
    printf("%d",minmax(20));//AEM:59641
}
int minmax(int g){
    srand(time(NULL));
    int A[g];
    for(int i=0;i<g;i++){
        A[i]=rand();
        printf("Array[%d]=%d\n",i,A[i]);
    }
    int min=A[0];
    int m=0;
    for(int i=1;i<g;i++){
        if(A[i]<min){
            min=A[i];
            m=i;
        }
    }
    printf("Το min στοιχείο βρίσκεται στην θέση:%d και έχει τιμή:%d\n",m,min);
    int max=A[0];
    int n=0;
    for(int i=1;i<g;i++){
        if(A[i]>max){
            max=A[i];
            n=i;
        }
    }
    printf("Το max στοιχείο βρίσκεται στην θέση:%d και έχει τιμή:%d\n",n,max);
    printf("Department of Electrical and Computer Engineering - Εργαστήριο 5");
    return 0;
}
