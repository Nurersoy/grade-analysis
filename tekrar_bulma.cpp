#include <iostream>

using namespace std;

int main()
{
    int *arr, size;
    int current;
    int add = 0, printedOnce = 0;

    cout << "Dizinin boyutunu giriniz: ";
    cin >> size;

    arr = new int[size];

    cout << "Dizinin elemanlarini giriniz:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Küçükten büyüðe sýralama (bubble sort)
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < (size - i); j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    current = arr[0];

    cout << "Tekrar eden elemanlar: ";
    for (int i = 1; i < size; i++)
    {
        if (current == arr[i])
        {
            current = arr[i];
            add++;

            if (add != 0 && printedOnce == 0)
            {
                cout << current << " ";
                printedOnce++;
            }
        }
        else
        {
            current = arr[i];
            add = 0;
            printedOnce = 0;
        }
    }

    delete[] arr;

    return 0;
}





