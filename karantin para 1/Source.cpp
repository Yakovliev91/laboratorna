#include<iostream>
#include<ctime>
using namespace std;

//void showArr(int *arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//}


int main() {
	//бульбашка-дуже повільний
	/*const int size = 10;
	int arr[size] = { 1,7,10,7,6,9,13,2,5,2 };*/
	//for (int i = 0; i < size-1; i++)
	//{
	//	for (int j = 0; j < size - 1; j++) {
	//		if (arr[j] > arr[j + 1]) {
	//			int temp = arr[j];//тут зараз 10
	//			arr[j] = arr[j + 1];//на місце 10 поклали 7
	//			arr[j + 1] = temp;
	//		}

	//	}

	//}

	//вибірка

	/*for (int i = 0; i < size; i++)
	{
		int temp = arr[0];
		for (int j = i+1; j < size; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}*/


	//вставка insert

	//int temp = 0;
	//int indexPrev = 0;

	//for (int i = 1; i < size; i++)//проходить по нашому масиві
	//{
	//	temp = arr[i];//запис поточного числа
	//	indexPrev = i - 1;//запис поперденього індексу
	//	while (indexPrev>=0&&arr[indexPrev]>temp)//цикл для зміщення якщо 
	//	{
	//		arr[indexPrev + 1] = arr[indexPrev];
	//		arr[indexPrev] = temp;
	//		indexPrev--;
	//	}
	//}



	//showArr(arr,size);
	const int size = 100;
	srand(time(0));
	int rnd = rand();
	int arr[size];
	int index;
	int action = 0;
	do
	{
		cout << "\tMENU:" << endl;
		cout << "1. Fill array random numbers" << endl;
		cout << "2. Show Array" << endl;
		cout << "3. Find element and show index" << endl;
		cout << "4. Sort Array" << endl;
		cout << "5. Find average of array" << endl;
		cout << "6. Find amount multiple 5" << endl;
		cout << "7. Exit" << endl;


		cout << endl;
		cout << "Select action ->_";
		cin >> action;

		switch (action)
		{
		case 1: 
			for (int i = 0; i < size; i++)
			{
				cout << "Enter range of array :" << endl;
				cin >> rnd;
				break;
			}
			break;
		
		case 2:
			cout << "Your array :" << endl;
			for (int i = 0; i < size; i++)
			{
				arr[i] = rand()%rnd;
				cout << arr[i]<<" ";
			}
			cout << endl;
			break;
		case 3: 
			
			cout << "Enter element of array :" << endl;
			cin >> index;
			for (int i = 0; i < size; i++)
			{
				if (index==arr[i])
				{
					cout << "Index :"<< i << endl;
					
				}
				else if (!(size - i - 1)) {
					cout << -1 << endl;
				}
				
			}
		break;

		case 4:
			break;
		case 5:

			break;
		case 6:

			break;
		case 7: 
			cout << "Bye" << endl;
		break;
		default: 
			cout << "Please select action (1 - 7)" << endl;
		
		}

	} while (action != 7);





	system("pause");
	return 0;
}
