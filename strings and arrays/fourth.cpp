//cases to be a permutation of a pallindrome

//either all the character count has to be even
//either all of them are even but one character is odd count

#include<iostream>
#include<vector>
using namespace std;
bool pallPerm(string s)
{
    vector<int> v(128,0);
    int odd_count=0;
    int flag=0;

    for(int i=0; i<s.length(); i++)
    {
        int value = int(s[i]);
        v[value]++;
    }

    for(int i=97; i<123; i++)
    {
        if(v[i]%2==0)
        {
            flag=0;
        }

        if((v[i]%2!=0) && (odd_count==0))
        {
           odd_count++;
           flag=0;
        }

        else
        {
            flag=1;
        }

    }

    if(flag==0)
    {
        cout<<"Yes"<<endl;
        return true;
    }
    else
    {
        cout<<"No"<<endl;
        return false;
    }

}

int main()
{
    string s;
    cin>>s;
    pallPerm(s);
    return 0;
}