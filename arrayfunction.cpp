#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void arry(int arr[], int size){
    for(int i=0; i < size; i++){
    cout<< arr[i];
    }
}
int main()
{
    int arr[5]={2,4,6,8,10};
    arry(arr, 5);

}