#include<iostream>
using namespace std;

template< typename T>
class A
{
    T*ptr;
    int size;

    public:
        A(T arr[] , int s);
        void print();
};
template<typename T> A <T>::A(T arr[] , int s)
{
    ptr = new T [s];
    size = s;
    for (int i =0; i<size; i++)
    {
        ptr[i]= arr[i];
    }
}

template<typename T> void A<T>::print()
{
    for(int i=0; i<size; i++)
    {
        cout<<""<<*(ptr +i);
    }
    cout<<endl;
}

int main()
{
     int arr[5]= {4,6,8,9,1};
     float ar[5]= {4.5,6.8,2.4,9.7,1.0};
     char a[5]= {'A','B','C','D','E'};

     A<int>ob(arr,5);
     A<float>ob1(ar,5);
     A<char>ob2(a,5);
     ob.print();
     ob1.print();
     ob2.print();

}