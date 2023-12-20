#include <stdio.h>

int main()
{
    double gradeSum = 0, rateSum = 0;

    for (int i = 0; i < 20; i++)
    {
        char subName[50] = {0, };
        char rate[2] = {0, };
        double grade, rateNum;

        scanf("%s%lf%s", subName, &grade, rate);

        switch (rate[0])
        {
        case 'A':
            if (rate[1] == '+')
                rateNum = 4.5;
            else
                rateNum = 4.0;

            break;
        case 'B':
            if (rate[1] == '+')
                rateNum = 3.5;
            else
                rateNum = 3.0;

            break;
        case 'C':
            if (rate[1] == '+')
                rateNum = 2.5;
            else
                rateNum = 2.0;

            break;
        case 'D':
            if (rate[1] == '+')
                rateNum = 1.5;
            else
                rateNum = 1.0;

            break;
        case 'F':
            rateNum = 0.0;

            break;    
        default:
            grade = 0.0;
            break;
        }

        gradeSum += grade * rateNum;
        rateSum += grade;
    }

    printf("%.4lf", gradeSum / rateSum);
}