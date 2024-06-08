#include<iostream>

template<class T>
void bubbleSort(T arr[], T n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main()
{
    int a[5] = {7,4,9,1,3};
    int size = 5;

    bubbleSort<int>(a,size);

    for (int i = 0; i < size; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
 return 0;

}