#include <iostream>

using namespace std;

typedef int ElemType;//ElemType可为任意基本数据类型

//一趟排序的过程
int Partition(ElemType a[],int low,int high){
    ElemType pivot = a[low];
    while(low < high){
        while(low < high && a[high] >= pivot) --high;
        a[low] = a[high];
        while(low < high && a[low] <= pivot) ++low;
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}

void QuickSort(ElemType a[],int low,int high){
    if(low < high){
        int pivotpos = Partition(a,low,high); //第一次划分，并返回枢轴（轴点）
        QuickSort(a,low,pivotpos-1);          //对两个子序列进行划分迭代
        QuickSort(a,pivotpos+1,high);
    }
}


int main() {
    ElemType a[8] = {49,38,65,97,76,13,27,49};
    QuickSort(a,0,7);
    for (int i = 0; i < 7; ++i) {
        cout << a[i]<<' ';
    }
    return 0;
}

/*QuickSort
 * 子序列无序
 * 其实快排就是不断选轴点，并把轴点放在对应位置的过程
 * 快排是不稳定的
 * 最好性能O(nlogn)
 * 最坏性能O(n2)
 * 平均性能O(nlogn)
 * 轴点选取，教材中是序列的第一个元素，但是取法有很多种，轴点的选取也会影响算法的性能
 * */
