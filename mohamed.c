void inseretarray (int* arr,int size_,int num,int pos)
{
    for (int i=size_;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
}
