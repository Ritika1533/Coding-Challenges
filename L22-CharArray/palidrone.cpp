#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
bool checkPalindrome(string s)
{
    string newstr;

    for(int i=0;i<s.size()-1;i++){

        if( s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9' )
		{

            newstr.push_back(s[i]);

        }
		else if(s[i]>='A' && s[i]<='Z'){
			 newstr.push_back(s[i]+('a'-'A'));
		}

    }

    int start=0;

    int end=newstr.size()-1;

    while(start<=end){

        if(newstr[start]!=newstr[end]){

            return false;

        }

         start++;

         end--;

    }

    return true;
}