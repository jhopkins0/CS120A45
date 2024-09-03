//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    min = num1;
    min = (min > num2)? num2 : min;
    min = (min > num3)? num3 : min;
    max = num1;
    max = (max < num2)? num2 : max;
    max = (max < num3)? num3 : max;
    med = ((num1 != min) && (num1 != max))? num1: med;
    med = ((num2 != min) && (num2 != max))? num2: med;
    med = ((num3 != min) && (num3 != max))? num3: med;

    cout << min << med << max << endl;
}
