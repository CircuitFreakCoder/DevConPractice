#include <iostream>

using namespace std;

void alternate(int n)
{
    for(int i=1, j=n, counter=1; counter <= 2*n; counter++ )
    {
        if(counter%2==1)
        {
            cout<<i<<" ";
            i++;
        }
        else
        {
            cout<<j<<" ";
            j--;
        }
    }

}

int main()
{
    int input=0;
    cout<<"Enter input : ";
    cin>>input;
    cout<<"Alternate Sequence : ";
    alternate(input);
    return 0;
}
