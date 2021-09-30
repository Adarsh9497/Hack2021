#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[],int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        flag =0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag =1;
            }
        }
        if(flag == 0) break;
    }
}
int main(){
    cout<<"Enter no. of elements : ";
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;<n;i++)
        cin>>a[i];
    
    bubbleSort(a,n);
    for(int i =0;i<n;i++) cout<<a[i]<<"\t";
    return 0;
}

