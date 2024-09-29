#include <stdio.h>


int main()
{
    int att,assignscore,examresult;
    printf("Enter Attendance out of 100%, assignment score out of 10, and exam result out of 100");
    scanf("%d/n",&att);
    scanf("%d/n",&assignscore);
    scanf("%d/n",&examresult);
    if(att>=75 && att<=100 )
    {
        if(assignscore>5 && assignscore<=10)
        {
            if(examresult>75)
            {
                printf("A grade");
            }
            else
            {
                if(examresult>60)
                {
                    printf("B grade");
                }
                else
                {
                    printf("C grade");
                }
            }
        }
        else
        {
            if(assignscore>0 && assignscore<=5)
            {
                if(examresult>75)
                {
                    printf("B grade");
                }
                else
                {
                    printf("C grade");
                }
            }
            else
            {
                printf("invalid input");
            }
        }
    }
    else
    {
        if(att<75)
        {
            printf("Attendance not upto the mark. You may repeat the course in next semester.");
        }
        else
        {
            printf("Invalid Input");
        }
    }

    return 0;
}