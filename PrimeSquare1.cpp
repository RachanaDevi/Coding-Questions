#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    long long int t,b,rem,flag=0,pos,index;
    int i=0;
    cin>>t;
    long long  int j=3,k=1,no,l=0;
    long long int range=pow(10,12),p1,p2,p3;
    vector<long long int>primes={2};
    vector<long long int>::iterator itr;
    int indexNo=1;
    cin>>b;
    
    for(;i!=t && j<range;j++) //i for no of testcases
    {
      flag=0;
      no=j;
      l=0;
        while( l!=primes.size())
        {
            if(no%primes[l]==0 )
            {
                flag=1;
                break;
            }
            else
            {
            l++;
            }
          
        }
         
        if(flag==1)
        { 
            continue;
        }
         primes.push_back(no);
        
       
        rem=(2*(find(primes.begin(),primes.end(),no)-primes.begin())*no)%(no*no);
        if(rem>b)
        {
            pos=find(primes.begin(),primes.end(),no)-primes.begin();
            i++;
            cout<<pos<<endl;/*REMOVE BELOW COMMENTS TILL BREAK"*/
            if(i!=t)
            cin>>b;
            j=3;
           // indexNo=1;
            flag=2;
          
        }
    }
        return 0;


     }
    //    i++;
    //}
   // cout<<"\nANSWER HERE"<<pos<<endl;
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
  
