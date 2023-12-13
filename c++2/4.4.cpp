//#include<iostream>
//using namespace std;
//void merge( int list1[], int size1, const int list2[], int size2, int list3[])
//{
//	int m = 0;
//	
//	
//	for (int i = 0;i<size2;i++)
//	{
//		list1[size1+ i] = list2[m];
//			m++;
//	}
//	   for(int a=0;a<size1+size2-1;a++)
//		   for (int b = (a + 1);b < size1 + size2;b++)
//		   {   
//			   if (list1[a] > list1[b])
//			   {
//				   int h[1] = { 0 };
//				   h[0] = list1[a];
//				   list1[a] = list1[b];
//				   list1[b] = h[0];
//			   }
//
//		   }
//		cout << "The merged list is:";
//
//		for (int i = 0; i < size1 + size2;i++)
//			cout << list1[i];
//
//}
//int main()
//{
//	int size1, list1[10], list2[10], size2, list3[10];
//	cout << "Enter list1" << endl;
//	cin >> size1;
//	for (int m = 0;m < size1;m++)
//		cin >> list1[m];
//	cout << "Enter list2" << endl;
//	cin >> size2;
//	for (int m = 0;m < size2;m++)
//		cin >>list2[m];
//	
//	merge(list1, size1, list2, size2, list3);
//	
//
//}