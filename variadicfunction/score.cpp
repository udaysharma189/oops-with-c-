#include<iostream>
#include<cstdarg>
using namespace std;

void score(int size, ...)
{
    int n;
    va_list args;

    va_start(args, size);

    for(int i = 0; i < size; i++)
    {
        n = va_arg(args, int);

        int total = n;
        float percentage = (total / 500.0) * 100;

        cout << "Total = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if(percentage > 90)
        {
            cout << "Grade = A+" << endl;
        }
        else if(percentage > 80)
        {
            cout << "Grade = A" << endl;
        }
        else if(percentage > 70)
        {
            cout << "Grade = B+" << endl;
        }
        else if(percentage >= 50)
        {
            cout << "Grade = B" << endl;
        }
        else
        {
            cout << "Grade = Fail" << endl;
        }

        cout << endl;
    }

    va_end(args);
}

int main()
{
    score(5, 475, 425, 375, 225, 325);

    return 0;
}