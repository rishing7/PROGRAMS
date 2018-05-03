#include <iostream>
using namespace std;

int main()
{
    try  {
       throw 10;
    }
    catch (int x)  {
        cout << "Caught 1";
    }
    catch (int x)  {
        cout << "Caught 2";
    }
    catch (...)  {
        cout << "Caught 3";
    }
    return 0;
}
