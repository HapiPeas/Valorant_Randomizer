/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    srand (time(NULL));
    
    int ARR_SIZE = 18;
    string agentArray[18] = {"Brimstone", "Phoenix", "Sage", "Sova", "Viper", "Cypher", "Reyna", "Killjoy",
                            "Breach", "Omen", "Jett", "Raze", "Skye", "Yoru", "Astra", "Kay/O", "Chamber", "Neon"};
    
    int randNum = rand() % (ARR_SIZE + 1);
    
    cout << agentArray[randNum]  << endl;

    return 0;
}
