#include<iostream>
using namespace std;

class OperationsOnArray//Declaring the class
{
    public://Declaring some variables and member functions
    int *array;//Array in heap section of the memory
    int size,lenght;//Lenght and size 
    int get_element(int index);
    void set_element(int index,int element);
    int max_element();
    int min_element();
    int sum_of_elements();
    int average();
    void display_array();
};

void OperationsOnArray::display_array()//For displaying all the elements of the array
{
    for(int i=0;i<lenght;i++)
    {
        cout<< array[i]<<" ";//Printing all elemets
    }
    cout<<endl;
}

int OperationsOnArray::get_element(int index)//Finding the elemet in the array and returning the eleemnt at givenn index
{
    if(index>=0&&index<lenght)//Checking that whether the index is vailid or not
    {
        return array[index];
    }
    cout<<endl;
}

void OperationsOnArray::set_element(int index,int element)//Replacing the element
{
      if(index>=0&&index<lenght)
    {
        array[index]=element;
    }
    cout<<endl;
}

int OperationsOnArray::max_element()//Finding the maximum element in the array
{
    int max_element=array[0];//Initialising the max_element variable by the 1st value of the array
    for(int i=1;i<lenght;i++)
    {
        if(max_element<array[i])
        {
            max_element=array[i];
        }
    }
    return max_element;
    cout<<endl;
}

int OperationsOnArray::min_element()//Finding the minimun element in the given array
{
    int minimum_element=array[0];
    for(int i=1;i<lenght;i++)
    {
        if(minimum_element>array[i])
        {
            minimum_element=array[i];
        }
    }
    return minimum_element;
    cout<<endl;
}

int OperationsOnArray::sum_of_elements()
{//Sum of all the elements
    int total=0;
    for(int i=0;i<lenght;i++)
    {
        total= total +array[i];
    }
    return total;
}

int OperationsOnArray::average()//Averaging the all elements of the array
{
        int total=0;
    for(int i=0;i<lenght;i++)
    {
        total= total +array[i];
    }
    return total/lenght;
}

int main()
{
    OperationsOnArray ooa;//Declaring the class object
    int number_of_elements,index,index01,element;//Declaring the variables
    cout<<"Enter the size of the array to be created in the heap"<< endl;
    cin>> ooa.size;
    ooa.array=new int [ooa.size];//Creating the mamory in the heap section of the given size
    cout<<"Enter the total number of elements that you want to enter"<<endl;
    cin>>number_of_elements;
    ooa.lenght=number_of_elements;
    cout<<"Enter all elements one by one"<<endl;
    for(int i=0;i<number_of_elements;i++)
    {
        cin>>ooa.array[i];
    }
    cout<<"The total elements are "<<endl;
    ooa.display_array();
    cout<<"Enter the index to get that elememnt"<<endl;
    cin>>index;
    cout<<"The element at index "<< index<< " is :"<< ooa.get_element(index)<<endl;

    cout<<"Enter the index at where you want to set the element"<<endl;
    cin>>index01;
    cout<<"Enter the element that you want to set in the array"<<endl;
    cin>>element;
    ooa.set_element(index01,element);
    cout<<"Now the updated array looks like"<<endl;
    ooa.display_array();

    cout<<"The max element in this given array is :"<< ooa.max_element()<<endl;
    cout<<"The minimum element in this given array is :"<< ooa.min_element()<<endl;;
    cout<<"The total sum of the all elements of the array is :"<< ooa.sum_of_elements()<<endl;
    cout<<"The average of the array is :"<< ooa.average()<< endl;

    delete[]ooa.array;

    return 0;
}
