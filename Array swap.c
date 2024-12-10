#include<stdio.h>
int main(){
int arr[4]={21,34,5,6};
int i,j,c;
for(i=0;i<4;i++){
for(j=i+1;j<4;j++){
if(arr[i]>arr[j]){
c=arr[i];
arr[i]=arr[j];
arr[j]=c;
}
}
}
return 0;
}
