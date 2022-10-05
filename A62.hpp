#include <iomanip>
#include <iostream>
using namespace std;


// complete two functions
double nthpowerp(int M)
{
        // return n_th power number
    float result;
    int i;
    
    result = 1;
    for (i = 0;i < M; i++){
         result *= 2; 
    }

    return result;

}
double nthpowern(int m)
{
         // return n_th power number
    float result, i;

    m = -1*m;

    result = 1;
    for (i = 0;i < m; i++){
         result *= 2; 
    }
        result = 1 / result;
    
    return result;
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
