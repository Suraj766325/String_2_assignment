// 1) Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cout<<"enter word = ";
    getline(cin,s);
    t=s;
    reverse(t.begin(),t.end());
    s=s+t;
    cout<<s;
}




// 2) Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    getline(cin,s);
    int i,m=INT_MIN,sm=INT_MIN;
    for(i=0;s[i]!='\0';i++)
    {
        if((int(s[i])-48)>m)
        {
            sm=m;
            m=int(s[i])-48;
        }
        else if((int(s[i])-48)>sm && (int(s[i])-48)!=m)
        {
            sm=int(s[i])-48;
        }
    }
    cout<<"second largest = "<<sm;
}




// 3) Input a string and return the number of substrings that contain only vowels.
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   cout<<"enter string = ";
   getline(cin,s);
   int i ,count,sum=0;
   for(i=0;i<s.size();i++)
   {
      count=0;
      while(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' )
      {
         count++;
         i++;
      }
      sum=sum+((count*(count+1))/2);
   }
   cout<<"number of vowel substring = "<<sum;
}



// 4) Given an array of strings. Check whether they are anagram or not.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter first word = ";
    getline(cin,a);
    cout<<"enter second word = ";
    getline(cin,b);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) cout<<"anagram";
    else     cout<<"not anagram";
}




// 5) Given a sentence ‘str’, return the word that is lexicographically maximum.
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter string = ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<"lexicographically maximum word = "<<v[v.size()-1];
}