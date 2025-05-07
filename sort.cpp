#include<iostream>
using namespace std;
// n la do dai arr
// tra ve mang co index la so le cua arr ban dau
// sort lon den be
int* sort(int* a, int n){
    int size = 0, k = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            size++;
        }
    }
    
    int* newArr = new int[size];
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            *(newArr + k++) = *(a + i);
        }
    }
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(*(newArr + i) < *(newArr + j)){
                int tmp = *(newArr + i);
                *(newArr + i) = *(newArr + j);
                *(newArr + j) = tmp;
            }
        }
    }
    return newArr;
}
void print(int* arr, int n){
    int size = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            size++;
        }
    }
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 5;
    int arr[n] = {1, 3, 4, 7, 5};
    int* newArr = sort(arr, n);
    print(newArr, n);
    
    return 0;
}
