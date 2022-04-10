//O(n)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a,b; //taking two string inputs
    cin>>a;
    cin>>b;

    int flag=0;

    vector<int> count_a(128,0); //creating two array for ascii values
    vector<int> count_b(128,0);

    if(a.length()==b.length()) //if lenght of both strings not same then they are not permutations of each other
    {

    for(int i=0; i<a.length(); i++) //+1 every time a character is witnessed 
    {
        int value_1 = int(a[i]);
        count_a[value_1]=count_a[value_1]+1;

        int value_2 = int(b[i]);
        count_b[value_2]=count_b[value_2]+1;

    }

    for(int i=97; i<122; i++)
    {
       
        if((count_a[i]!=count_b[i]) )
        {
            flag=1;
            break;
        }
       
    }

    cout<<flag<<endl;
    }

    else
    {
        cout<<"Not a permutation"<<endl;
    }

    return 0;
}

//Alternate Solution: Sort both strings and check if they equal -- O(nlogn))