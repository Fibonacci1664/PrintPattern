// { Driver Code Starts
#include<iostream>

void printPat(int n);

int main()
{
    int numOfTestCases;
    std::cin >> numOfTestCases;

    while (numOfTestCases--)
    {
        int n;
        std::cin >> n;

        printPat(n);

        std::cout << '\n';
    }
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
    int saveNum = n;
    int numToPrint = n;

    //Your code here
    for (int i = 0; i < saveNum; ++i)
    {
        for (int j = 0; j < saveNum; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                // Print out our number
                std::cout << numToPrint << " ";
            }

            --numToPrint;
        }

        std::cout << "$ ";
        numToPrint = saveNum;
        --n;
    }
}