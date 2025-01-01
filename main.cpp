#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

void MergeArray(int *arr1, int arr1Len, int *arr2, int arr2Len){
    

    int mergeArr[arr1Len+arr2Len];
    int i=0;
    int j=0;
    int k=0;

    while( j<arr1Len && k<arr2Len){
        cout<<"in while loop #:"<<i<<endl;
        cout<<"arr1: "<<arr1[j]<<" , "<<"arr2: "<<arr2[k]<<endl;
        if((arr1[i]<arr2[2])){
            mergeArr[i]=arr1[j];
            i++;
            j++;
        }
        else{
            mergeArr[i]=arr2[k];
            i++;
            k++;
        }
    }
    
    while(j<=arr1Len){
        mergeArr[i]=arr1[j];
        i++;
        j++;
    }

    while(k<=arr2Len){
        mergeArr[i]=arr2[k];
        i++;
        k++;
    }

    for(int x=0; x<arr1Len+arr2Len;x++){
        cout<<"Merge Array: "<<mergeArr[x]<<endl;
    }



    
}


int main(){

    int array1[]{1,4 ,21,33}, array2[]{2,7,11,12,15};

    MergeArray(array1, 4, array2, 5);
   
}