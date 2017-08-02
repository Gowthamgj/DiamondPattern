#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
int n;
cin>>n;
int s=2*n;
char ch[s][s];
int i,j,k;
int lpos,rpos;
for(i=0;i<s;i++){
    for(j=0;j<2*n;j++){
     ch[i][j]='#';   
    }    
}
i=0;
while(i<n){
    lpos=n-1;
    rpos=n;
    for(k=i;k<n;k++){
      for(j=0;j<2*n;j++){
       if(j==lpos){
         //cout<<"lpos";
           ch[k][j]='/';
       } 
      if(j==rpos){
           ch[k][j]='\\';
       }
    }
    lpos--;
    rpos++;
    }
    i=i+2;
}
int stop=i-1;
i=s-1;
cout<<i;
cout<<ch[i][0]<<endl;
while(i>=stop){
  lpos=n-1;
    rpos=n;
    for(k=i;k>=n;k--){
      for(j=0;j<s;j++){
       if(j==lpos){
         //cout<<k<<"k"<<j<<"j"<<endl;
         ch[k][j]='\\';
       } 
      if(j==rpos){
           ch[k][j]='/';
       }
    }
    //cout<<lpos<<"lpos"<<rpos<<"rpos"<<endl;
    lpos--;
    rpos++;
    }
    i=i-2;
}
for(i=0;i<s;i++){
    for(j=0;j<2*n;j++){
        cout<<ch[i][j]<<" ";
    }
    cout<<endl;
}
}
