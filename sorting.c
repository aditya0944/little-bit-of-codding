#include <stdio.h>

void bubble(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                int t=a[j]; 
                a[j]=a[j+1]; 
                a[j+1]=t;
            }
}

void insertion(int a[], int n){
    for(int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key)
            a[j+1]=a[j--];
        a[j+1]=key;
    }
}

void selection(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;
        int t=a[i]; a[i]=a[min]; a[min]=t;
    }
}

void show(int a[], int n){ 
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n"); }

int main(){
    int a[]={5,3,4,1,2}, n=5;
    bubble(a,n); printf("Bubble: "); show(a,n);

    int b[]={5,3,4,1,2};
    insertion(b,n); printf("Insertion: "); show(b,n);

    int c[]={5,3,4,1,2};
    selection(c,n); printf("Selection: "); show(c,n);
    return 0;
}
    