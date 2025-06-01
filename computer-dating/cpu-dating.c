#include <stdio.h>
#include <time.h>

int main()
{
    time_t biggest = 0x7FFFFFFF;

    printf("Biggest = %s\n", ctime(&biggest));
    //the line above prints a false time cause\
    //  ctime convert it's argument to LOCAL time\
    //  that vary from universal(greenwich)
    //it must be :
    printf("Biggest = %s\n", asctime(gmtime(&biggest)) );
    // to consider the difference between your\
    // location on the globe and greenwich. 

    return 0;
}