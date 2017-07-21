#include <iostream>

typedef int ElemType;


void SelectSort(ElemType a[],int n){
    for(int i = 0;i < n-1;i++){
        int min = i;
        for(int j = i+1;j < n;j++){
            if(a[j] < a[min]) min = j;
        }
        if(min != i){}
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){
    ElemType a[8] = {49,38,65,97,76,13,27,49};
    SelectSort(a,8);
    for (int i = 0; i < 8; ++i) {
        std::cout << a[i]<<' ';
    }
    return 0;
}

/*SelectSort
 * 不稳定
 * 全局有序
 * 最佳性能 O(n2)
 * 最坏性能 O(n2)
 * 平均性能 O(n2)
 * */
