#include <iostream>

using namespace std;

int main()
{
int total = 0;
   for(int d = 1; d < 100; d++){
    if(d % 3 == 0 || d % 5 == 0){
            total = total + d;
        cout << d << endl;
    }
   }
   cout << endl;
   cout << " " << total << endl;
    return 0;
}
