#include "stdio.h"
#define cube(x) (x*x*x)
int main()
{
    int a, b, c, d;
    for(a = 2; a <= 100; ++a)
    {
        for(b = 2; ; ++b)
        {
            if( cube(b) >= cube(a) ) break;
            for(c = b+1; ; ++c)
            {
                if( (cube(b)+cube(c)) >= cube(a) ) break;
                for(d = c+1; ; ++d)
                {
                    if( cube(b) + cube(c) + cube(d) == cube(a) )
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                    else if( cube(b) + cube(c) + cube(d) > cube(a) )
                        break;
                }
            }
        }
    }
    
    return 0;
}