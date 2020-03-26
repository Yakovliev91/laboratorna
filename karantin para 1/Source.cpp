#include<iostream>
#include<ctime>
#include <stdio.h>
#include<Windows.h>
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



	/*showArr(arr,size);*/



	const int size = 100;
	int arr[size];
	srand(time(0));
	int rnd = rand();
	int index;
	int action = 0;
	int select = 0;
	int select_asc = 0;
	int select_des = 0;
	float suma = 0;
	float average;
	int count = 0;
	do
	{
		cout << "\tMENU:" << endl;
		cout << "1. Fill Array" << endl;
		cout << "2. Show Array" << endl;
		cout << "3. Find element and show index" << endl;
		cout << "4. Sort Array" << endl;
		cout << "5. Find average of array" << endl;
		cout << "6. Find amount multiple 5" << endl;
		cout << "7. Exit" << endl;


		cout << endl;
		cout << "Select action ->_\n";
		cin >> action;

		switch (action)
		{
		case 1: 
			cout << "Enter range of array :" << endl;
			cin >> rnd;
			for (int i = 0; i < size; i++)
			{
				arr[i] = rand()%rnd;
			}
			break;
		
		case 2:
			cout << "Your array :" << endl;
			for (int i = 0; i < size; i++)
			{
				
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
			
			do
			{
				cout << "1. Sorting in ascending" << endl;
				cout << "2. Sorting by descending " << endl;
				cout << "3. Return to main menu" << endl;

				cout << "Select action :" << endl;
				cout << endl;
				cin >> select;
				switch (select)
				{
				case 1:
					do
					{
						cout << "Select sorting algorithm :" << endl;
						cout << "1. Bublle" << endl;
						cout << "2. Insert" << endl;
						cout << "3. Selection" << endl;
						cout << "4. Return" << endl;
						cout << endl;
						cin >> select_asc;
						switch (select_asc)
						{
						case 1:
							cout << "Sorting bublle :\n" << endl;
							for (int i = 0; i < size-1; i++)
							{
								
								for (int j = 0; j < size-i-1; j++)
								{
									
									
									if (arr[j] > arr[j + 1])
									{
										int temp = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = temp;

									}
								}
								
							}
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep (20);
								cout << arr[i] << " ";
								
							}
							cout << endl;
							break;

						case 2:
							cout << "Sorting insert\n" << endl;
							
							for (int i = 1; i < size; i++)
							{
								int temp = arr[i];
								int indexPrev = i - 1;
								while (indexPrev >= 0 && arr[indexPrev] > temp){

			                      arr[indexPrev + 1] = arr[indexPrev];
			                      arr[indexPrev] = temp;
			                      indexPrev--;
	                            }
							}
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep(20);
								cout << arr[i]<<" ";
							}
							cout << endl;
							break;

						case 3:
							cout << "Selection Sort\n" << endl;
							for (int i = 0; i < size; i++)
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

	                        }
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep(20);
								cout << arr[i] << " ";
							}
							cout << endl;
							break;

						default:
							cout << "Select action 1-3 !" << endl;
							break;
						}

					} while (select_asc!=4);
				case 2:
					do
					{
						cout << "Select sorting algorithm :" << endl;
						cout << "1. Bublle" << endl;
						cout << "2. Insert" << endl;
						cout << "3. Selection" << endl;
						cout << "4. Return" << endl;
						cout << endl;
						cin >> select_des;
						switch (select_des)
						{
						case 1:
							cout << "Sorting bublle :\n" << endl;
							for (int i = 0; i < size-1 ; i++)
							{

								for (int j = 1; j < size-i ; j++)
								{


									if (arr[j] > arr[j - 1])
									{
										int temp = arr[j];
										arr[j] = arr[j - 1];
										arr[j - 1] = temp;

									}
								}

							}
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep(20);
								cout << arr[i] << " ";

							}
							cout << endl;
							break;

						case 2:
							cout << "Sorting insert\n" << endl;

							for (int i = 1; i < size; i++)
							{
								int temp = arr[i];
								int indexPrev = i - 1;
								while (indexPrev >= 0 && arr[indexPrev] < temp) {

									arr[indexPrev + 1] = arr[indexPrev];
									arr[indexPrev] = temp;
									indexPrev--;
								}
							}
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep(20);
								cout << arr[i] << " ";
							}
							cout << endl;
							break;

						case 3:
							cout << "Selection Sort\n" << endl;
							for (int i = 0; i < size; i++)
							{
								int temp = arr[0];
								for (int j = i + 1; j < size; j++)
								{
									if (arr[i] < arr[j])
									{
										temp = arr[i];
										arr[i] = arr[j];
										arr[j] = temp;
									}
								}

							}
							cout << endl;
							for (int i = 0; i < size; i++)
							{
								Sleep(20);
								cout << arr[i] << " ";
							}
							cout << endl;
							break;
						case 4:
							break;

						default:
							cout << "Select action 1-3 !" << endl;
							break;
						}

					} while (select_des != 4);
					break;
					break;
				default:
					break;
				}
				


			} while (select != 3);
			break;
			
			

		case 5:
			for (int i = 0; i < size; i++)
			{
				suma += arr[i];
				average = suma / size;
			}
			cout << "Average of array :" << " " << average << endl;
			cout << endl;
			break;
		case 6:
			
			for (int i = 0; i < size; i++)
			{
				if (arr[i]%5==0) {
					cout << arr[i] << " ";
					count++;
				}
				

			}
			cout << endl;
			cout << "Amount elements multiple 5 is :" << count << endl;
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
