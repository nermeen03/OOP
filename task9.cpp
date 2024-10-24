
#include <iostream>

using namespace std;

int main()
{
    int row,col;
    int arr[3][4];
    for(row=0;row<3;row++){
        cout<<"enter the degree of student "<<row<<endl;
        for(col=0;col<4;col++){
            cout<<"enter degree of subject"<<col<<": ";
            cin>>arr[row][col];
        }
    }

    for(row=0;row<3;row++){
        int sum = 0;
        for(col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<"the sum of student "<<row<<" is "<<sum<<endl;
    }
    for(col=0;col<4;col++){
        int average=0;
        for(row=0;row<3;row++){
            average+=arr[row][col];
        }
        average/=3;
        cout<<"the average of subject "<<col<<" is "<<average<<endl;
    }
}

