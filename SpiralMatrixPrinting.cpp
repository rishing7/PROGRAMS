#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int row,column;
        cin>>row>>column;
        int matrix[row][column];
        for(int i=0;i<row;i++)
            for(int j=0;j<column;j++)
                cin>>matrix[i][j];
                cout<<"Output is:\n";
        int ur=0;
        int lr=row;
        int lc=0;
        int rc=column;
        while(ur<lr && lc<rc){

            for(int i=lc;i<rc;i++){
            cout<<matrix[ur][i]<<" ";
            }
            ur++;

            for(int i=ur;i<lr;i++){
            cout<<matrix[i][rc-1]<<" ";
            }
            rc--;
            if(ur<lr){
                        for(int i=rc-1;i>=lc;i--){
                        cout<<matrix[lr-1][i]<<" ";
                    }
                    lr--;
            }
            if(lc<rc){
                        for(int i=lr-1;i>=ur;i--){
                        cout<<matrix[i][lc]<<" ";
                    }
                    lc++;
            }
        }
    }
    return 0;
}

