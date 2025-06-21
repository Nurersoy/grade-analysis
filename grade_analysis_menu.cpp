#include <iostream>

using namespace std;

int HighestGrade(int *grades, int gradeCount);
int LowestGrade(int *grades, int gradeCount);
void PassedStudents(int *grades, int gradeCount);
float CalculateAverage(int *grades, int gradeCount);

int main()
{
	int *grades, gradeCount;
	int choice;
	
 	cout << "Kac not girmek istiyorsunuz?" << endl;
 	cin >> gradeCount;
 	
 	grades = new int[gradeCount];
 	
 	cout << "Notlari sirasi ile giriniz:" << endl;
 	
 	for (int i = 0; i < gradeCount; i++)
 	{
 		cin >> grades[i];
	}
	
	do
	{
		cout << "\nYapmak istediginiz islemi seciniz:" << endl;
		cout << "1 - Notlari Goster\n2 - En Yuksek Not\n3 - En Dusuk Not\n";
		cout << "4 - Ortalama Hesapla\n5 - Gecen Notlari Listele\n0 - Cikis" << endl;
		cin >> choice;
		
		switch (choice)
		{
			case 1: 
			{
				cout << "Notlar = ";
				for (int i = 0; i < gradeCount; i++)
				{
					cout << grades[i];
					if (i != (gradeCount - 1))
					{
						cout << ", ";
					}
				}
				cout << endl;
				break;
			}
			
			case 2:
				cout << "En yuksek not = " << HighestGrade(grades, gradeCount) << endl;
				break;

			case 3:
				cout << "En dusuk not = " << LowestGrade(grades, gradeCount) << endl;
				break;

			case 4:
				cout << "Notlarin ortalamasi = " << CalculateAverage(grades, gradeCount) << endl;
				break;

			case 5:
				cout << "Dersi gecen notlar: ";
				PassedStudents(grades, gradeCount);
				cout << endl;
				break;

			case 0:
				cout << "Cikis yapildi." << endl;
				break;

			default:
				cout << "Gecersiz secim!" << endl;
		}
		
	} while (choice != 0);
 	
	delete[] grades;
	return 0;
}

int HighestGrade(int *grades, int gradeCount)
{
	int max = grades[0];
	for (int i = 1; i < gradeCount; i++)
	{
		if (grades[i] > max)
			max = grades[i];
	}
	return max;
}

int LowestGrade(int *grades, int gradeCount)
{
	int min = grades[0];
	for (int i = 1; i < gradeCount; i++)
	{
		if (grades[i] < min)
			min = grades[i];
	}
	return min;
}

void PassedStudents(int *grades, int gradeCount)
{
	int passCount = 0;
	for (int i = 0; i < gradeCount; i++)
	{
		if (grades[i] > 50)
		{
			cout << grades[i] << ", ";
			passCount++;
		}
	}
	if (passCount == 0)
		cout << "Dersi gecen ogrenci yok.";
}

float CalculateAverage(int *grades, int gradeCount)
{
	float total = 0;
	for (int i = 0; i < gradeCount; i++)
	{
		total += grades[i];
	}
	float avg = total / gradeCount;
	return avg;
}























