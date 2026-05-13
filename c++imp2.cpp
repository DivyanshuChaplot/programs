#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the value of a : " << endl;
    cin >> (a);

    // selection control structure : if else-if else ladder

      if((a<20) && (a>0)){
        cout<<"you are not mature :"<<endl;
    }
    else if(a==20){
        cout<<"you are closer to became a mature:"<<endl;

    }
    else if(a==0){
        cout<<"you are not born yet :"<<endl;

    }
    else{
        cout<<"you are mature :"<<endl;
    }

    // selection control structure : switch case statement

    switch (a)
    {
    case 12:
        cout << "the value of case 12 is 12: " << endl;
        break;

    case 17:
        cout << "the value of case 17 is 17: " << endl;
        break;

    case 25:
        cout << "the value of case 25 is 25: " << endl;
        break;

    default:
        cout << "finish" << endl;
        break;
    }
    cout << "hello switch bhai" << endl;

    return 0;
}
