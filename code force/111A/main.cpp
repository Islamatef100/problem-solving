 #include<iostream>
 using namespace std;
 int main( )
 {
     int n,s,arr[100][100],j=0;
     cout<<"enter s,n\n";
     cin>>s>>n;
     for(int i=0;i<n;i++)
     {
         cout<<"enter xi,yi\n";
         cin>>arr[i][1]>>arr[i][2];
     
     }
     for(int i=0;i<n;i++)
     {
         for(int l=0;l<n;l++)
         {
             if(s>arr[l][1]&&arr[l][1]>0)
             {
                 s+=arr[l][2];
                 arr[l][1]=-1;
                 j++;
                 break;
             }
         }
         if(j==0)
         {
             cout<<"NO\n";
             return 0;
         }
         j=0;
     
     }
     cout<<"YES\n";
     
 }
