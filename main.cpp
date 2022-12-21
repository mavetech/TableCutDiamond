#include <iostream>

using namespace std;

int main()
{       
    
        int rows;
        int column;
        int number;
        int middleSectionRows = 0;
        
        cout<<"Enter the number: ";
        cin>>number;
        rows = number;
        
        if(number % 2 == 0){
              column = number + 1;
        }
        else if(number % 2 == 1){
            column = number;
        }
        
        if(number <= 4) {
            rows = number - 1;
        }
        
        if(number % 2 == 1) {
            middleSectionRows = ((number - 4) / 2) + 1;
        }
        else {
            middleSectionRows = (number - 4) / 2;
        }
       
        
       
        for (int i = 0; i < rows ; i++ ){
          if(i==0 && number > 4) {
              
              for (int j = 0;j < middleSectionRows;j++) {
                  cout<<" ";
              }
          
              for (int j = 0;j < column;j++) {
                  cout<<"*";
              }
              cout<<endl;
          }
          
          if(i == 1 && number > 4) {
              for(int j = 0;j < middleSectionRows;j++) {
                for (int k=middleSectionRows-j;k>1;k--){
                   cout<<" ";
                }  
                cout<<"*";
                for (int t=0;t<column+(2*j);t++){
                   cout<<" ";
                }  
                cout<<"*"<<endl;
              }
          }
          
          if(number <= 4) {
            for(int k=0;k<i;k++) {
                cout<<" ";
            }
            for(int j=0;j<column-(2*i);j++) {
                cout<<"*";
            }
            cout<<endl;
          }
          else if(number > 4 && i!=1 && i!=0) {
           for(int k=0;k<i-1;k++) {
                cout<<" ";
            }
            for(int j=0;j<column-(2*(i-(middleSectionRows+1)));j++) {
                cout<<"*";
            }
            cout<<endl;
          }
            
        }   

    return 0;
}
