 #include<iostream>
 #include<climits>
 using namespace std;
 int main(){
 int m;
 cout<<"enter the number of rows: ";
 cin>>m; 
  int n;
 cout<<"enter the number of column: ";
 cin>>n; 
 int arr[m][n];
 cout<<"enter array: ";
      for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
               cin>>arr[i][j];
          }
      }
int max = INT_MIN;
for(int i = 0; i<m; i++){
     for(int j=0; j<n; j++){
          if(max<arr[i][j]){
               max = arr[i][j];
          }
     }
}
cout << "max is: " << max;

int smax = INT_MIN;
for(int i = 0; i<m; i++){
     for(int j=0; j<n; j++){
          if(smax<arr[i][j] && arr[i][j] != max ){
               smax = arr[i][j];
          }
     }
}

cout<<"\nsecond max is :"<<smax;


int total=0;
for(int i = 0; i<m; i++){
     for(int j=0; j<n; j++){
          total +=arr[i][j];
     }
}
cout<<"\ntotal is : "<<total;

}