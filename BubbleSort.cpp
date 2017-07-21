#include <iostream>

typedef int ElemType;

void BubbleSort(ElemType a[],int n){
    for(int i = 0;i < n-1;i++){
        bool isSorted = true;
        for (int j = 0;j < n-i-1;j++){
            if(a[j] > a[j+1]){
                isSorted = false;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if(isSorted) break;
    }
}

int main() {
    ElemType a[8] = {49,38,65,97,76,13,27,49};
    BubbleSort(a,8);
    for (int i = 0; i < 7; ++i) {
        std::cout << a[i]<<' ';
    }
    return 0;
}

/*BubbleSort
 * 冒泡排序是稳定的（if(a[j] > a[j+1])）这句就可以看出，但若是换成>=就是不稳定了。
 * 子序列全局有序，即无序序列中的最大值不大于有序子序列中的最小值
 * 最佳性能 O(n)
 * 最坏性能O(n2)
 * 平均性能O(n2)
 * */
