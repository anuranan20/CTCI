//O(n)
#include<iostream>
#include<vector>
using namespace std;

bool isUnique(string s)
{
    if(s.length()>128) //only 128 characters we have
    {
        return false;
    }
    vector<bool> char_set(128); //vector since we dont know the size of the string

    for(int i=0; i<s.length(); i++)
    {
        int value = (int)s[i]; //storing the ascii value

        if(char_set[value]) //if the element is already present once
        {
            return false;
        }

        char_set[value]=true; //if not present make it true
    }
    
    return true;
    
}
int main()
{
    string s;
    cin>>s;


    if(isUnique(s))
    {
        cout<<"The string is unique."<<endl;
    }
    else
    {
        cout<<"The string is not unique"<<endl;
    }
    return 0;
}