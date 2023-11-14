#include <iostream>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    const int SIZE = 10;
    const int MAX_VALUE_IN_ARRAY = 20;
    
    int min_number, max_number;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        bool isContain = false;
        
        while (!isContain)
        {
            int num = rand() % MAX_VALUE_IN_ARRAY;
            if (std::find(std::begin(arr), std::end(arr), num) == std::end(arr))
            {
                arr[i] = num;
                isContain = true;
            }
        }
    }

    for (int i : arr)
    {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;

    min_number = arr[0];
    for (int n : arr)
    {
        if (n < min_number)
        {
            min_number = n;
        }
    }
    
    max_number = arr[0];
    for (int n : arr)
    {
        if (n > max_number)
        {
            max_number = n;
        }
    }
    
    std::cout << "Min number: " << min_number << std::endl;
    std::cout << "Max number: " << max_number << std::endl;

    return 0;
}
