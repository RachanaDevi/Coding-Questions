
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    unsigned long int t,b,rem,flag=0,pos,index;
    int i=0;
    cin>>t;
    unsigned long  int j=3,k=1,no,l=0;
    unsigned long int range=pow(10,12),p1,p2,p3;
    vector<unsigned long int>primes={2};
    vector<unsigned long int>::iterator itr;
    int indexNo=1;
    cin>>b;
    
    for(;i!=t && j<range;j++) //i for no of testcases  
    {
      flag=0;
      no=j;
      l=0;
        while( l!=primes.size())
        {
        rem=(2*(find(primes.begin(),primes.end(),primes[l])-primes.begin())*primes[l])%(primes[l]*primes[l]);
        if(rem>b)
        {   flag=2; //means the no is already present in the vector
            pos=find(primes.begin(),primes.end(),no)-primes.begin();
            i++;
            cout<<pos<<endl;
            if(i!=t)
            cin>>b;
            j=3;
            break;
        }
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
        if(flag!=2)
        {
        primes.push_back(no);

        
        rem=(2*(find(primes.begin(),primes.end(),no)-primes.begin())*no)%(no*no);
        if(rem>b)
        {
            pos=find(primes.begin(),primes.end(),no)-primes.begin();
            i++;
            cout<<pos<<endl;
            if(i!=t)
            cin>>b;
            j=3;
          
          
        }
        }
    }
        return 0;


     }
    //    i++;
    //}
   // cout<<"\nANSWER HERE"<<pos<<endl;
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 
