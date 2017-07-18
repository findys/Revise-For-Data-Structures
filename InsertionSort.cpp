#include <iostream>

using namespace std;

void InsertionSort(int *a, int len)
{
    for (int j=1; j<len; j++)
    {
        int key = a[j];
        int i = j-1;
        while (i>=0 && a[i]>key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}

int main(){
    int a[8] = {7,6,5,4,3,2,1,0};
    InsertionSort(a,sizeof(a)/ sizeof(a[0]));
    for(int  i = 0;i<sizeof(a)/ sizeof(a[0]);i++){
        cout<< a[i];
    }
}

/*Insertionsort
 * 前部风有序，后部分无序
 * 最佳性能 O（n）
 * 最坏性能 Ο（n2）
 * 平均性能 O（n2）
 * 平均性能的计算方法：1：逆序对  (input-sensitive的根本原因）
 *                  2：对于每个要插入的p，其平均插入点的查找次数期望为r/2，根据期望的线性率，总和期望为期望的总和，故为O（n2）
 * */
