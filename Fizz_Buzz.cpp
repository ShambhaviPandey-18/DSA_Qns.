#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

vector<string> fizzBuzz(int n){
{
    vector<string> result;
    int fizz = 0;
    int buzz = 0;

    for (int i = 1; i <= n; i++)
    {
        fizz++;
        buzz++;

        if (fizz == 3 && buzz == 5)
        {
            result.push_back("FizzBuzz");
            fizz = 0;
            buzz = 0;
        }
        else if (fizz == 3)
        {
            result.push_back("Fizz");
            fizz = 0;
        }
        else if (buzz == 5)
        {
            result.push_back("Buzz");
            buzz = 0;
        }
        else
        {
            result.push_back(to_string(i));
        }
    }

    return result;
    
}

}


int main()
{
    int n;
    cout << "Enter the size :";
    cin >> n;

    vector<string> result;
    int fizz = 0;
    int buzz = 0;

    if(!result.empty()){
        cout<<"["<<result[n]<<"]"<<endl;
    }else{
        cout<<"No valid pair found."<<endl;
    }
    return 0;
}