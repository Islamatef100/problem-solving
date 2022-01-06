// same problem with different idea
 #include<iostream>
 using namespace std;
 int main( )
 {
 int max=0,min=100,countmax=0,countmin=0;
 int* n;
 n=new int;
 int arr[*n];
 cout<<"enter soliders numbers:";
 cin>>*n;
 if(*n<=100)
 {
 for(int i=0;i<*n;i++)
 {
 cin>>arr[i];
 if(arr[i]<101)
 {
 if(arr[i]>=max)
 {  max=arr[i];countmax=i+1;}
 if(arr[i]<=min)
 {   min=arr[i];countmin=i+1;}
 }
 
 }
 cout<<countmax<<endl<<countmin<<endl;
 cout<<"number of seconds is:"<<((*n-countmin)+(countmax-1))<<endl;
 }
 else
 cout<<"ur number not allowed:\n";
 }
