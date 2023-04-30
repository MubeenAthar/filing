#include<iostream>
#include<fstream>
using namespace std;
void merge_array(int arr1[],int arr2[],int size1, int size2);
int main()
{
	int siz1,siz2;
	
	
	
	ifstream inp;
	inp.open("input.txt");
	inp>>siz1;
	int array1[siz1];
	
	for(int i=0;i<siz1;i++)
	{
	inp>>array1[i];
	}
	inp>>siz2;
	int array2[siz2];
	for(int i=0;i<siz2;i++)
	{
	inp>>array2[i];
}
	merge_array(array1,array2,siz1,siz2);
	return 0;
}
void merge_array(int arr1[],int arr2[],int size1,int size2)
{
	int total_size = size1+size2;
	
	int total_array[total_size];
	for(int i=0;i<size1;i++)
	{		
	total_array[i]=arr1[i];
cout<<	total_array[i]<<" ";
}
for (int i=size1;i<total_size;i++)
{	
	total_array[i]=arr2[i-size1];
	cout<<	total_array[i]<<" ";
}
cout <<endl;
cout <<"total size of array is "<< total_size<<endl;
int temp,k,l;
for (k = 0; k < total_size; k++) {
        for (int l = k + 1; l < total_size; l++) {
            if (total_array[k] > total_array[l]) {
                temp = total_array[k];
                total_array[k] = total_array[l];
                total_array[l] = temp;
            }
}
}
cout << " ascending order :"<<endl;
for (k = 0; k < total_size; k++)
cout<<total_array[k]<<" ";
ofstream fin;
fin.open("tim.open");
fin <<"array in ascending order"<<endl;
for(int i=0;i<total_size;i++)
{
	fin<<total_array[i]<<" ";
}
fin <<endl;
fin <<"total size of array is "<< total_size<<endl;
}

