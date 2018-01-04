#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
long double sum();
long double sub();
long double multi();
long double devi();

string d2b(int );
long double b2d(char input[]);
string d2h(int );
long double h2d(char hex[]);
string d2oc(int );
long double oc2d(char oc[]);

string Identify(char );
string HexCalcu();
string BinCalcu();
string OctCalcu();
long double calcu(char);
void system();
void mapp();
//maximum number of hexa numbers being inputed is 7fffffff which is 7 and then 7 fs  :)

int main()
{
    system();
}

void system()
{
    char ans;
    cout<<"\n\n \ hello I'm ur seemingly personal assistant and im here to help \n";
    cout<<"i was created to help you with some mathematical equations such as \n";
    cout<<"[0]how to use\n";
    cout<<"[1]show program map \n";
    cout<<"[2]calculator \n";
    cout<<"[3]converting binary, hexadecimal and octal numbers \n";
    cout<<"[4]calculator (+ only) for hexadecimal, binary and octal numbers\n ";
    cin>>ans;
    cout<<fixed<<setprecision(2);
    while(ans != '#'){
    switch (ans)
    {
    case '0': //how to use
        cout<<"\n you can use the calculator by choosing which operation you want to use while in any operation +-*/ enter the numbers you \n ";
        cout<<" want leaving a space between each number once you're done entering the numbers enter any other key afterwards to  \n";
        cout<<"end the program and display the output, \n this all goes for the bitcalculator too as for the converter it's \n";
        cout<<"really easy to use you press the number that's associates with the numbering type u currently have \n";
        cout<<"and the the rest is easy \n\n # exits the program loops  \n";
        break;
    case '1':
        mapp();
        break;
    case '2':
        cout<<"which calculation you want to make \n";
        cout<<"[1]summation \n";
        cout<<"[2]subtraction \n";
        cout<<"[3]multiplication \n";
        cout<<"[4]devision \n";
        cin>>ans;
        while (ans != '#'){
        cout<<calcu(ans)<<endl;
        cout<<"[1]summation \n";
        cout<<"[2]subtraction \n";
        cout<<"[3]multiplication \n";
        cout<<"[4]devision \n";
        cout<<" # to exit \n";
        cin>>ans;
        }
        break;
    case '4':
        cout<<"what kind of number do u have \n";
        cout<<"[1]hexadecimal\n";
        cout<<"[2]binary \n";
        cout<<"[3]octal \n";
        cin>>ans;
        while(ans != '#'){
        cout<<Identify(ans)<<endl;
        cout<<"what kind of number do u have \n";
        cout<<"[1]hexadecimal\n";
        cout<<"[2]binary \n";
        cout<<"[3]octal \n";
        cin>>ans;
            }
        break;

    case '3':
        {
            cout<<fixed<<setprecision(0);
            cout<<"what kind of number do u have?\n";
            cout<<"[1]decimal \n";
            cout<<"[2]binary \n";
            cout<<"[3]hexadecimal\n";
            cout<<"[4]octal decimal\n";
            cout<<"enter # to exit\n";
            char ans;
            cin>>ans;
            while(ans !='#' ){
    switch(ans)
    {
    case '1': //decimal
       long double a;
        cout<<"ur number in decimal = ";
        cin>>a;
        cout<<"ur number in binary  = "<<d2b(a)<<endl;
        cout<<"ur number in hex     = "<<d2h(a)<<endl;
        cout<<"ur number in octa    = "<<d2oc(a)<<endl;
        break;
    case '2': //binary
        long double b;
        char input[50];
        cout<<"ur number in binary  = ";
        cin>>input;
        b=b2d(input);
        cout<<"ur number in decimal = "<<b<<endl;
        cout<<"ur number in hexa    = "<<d2h(b)<<endl;
        cout<<"ur number in octa    = "<<d2oc(b)<<endl;
        break;
    case '3': //hexadecimal
        cout<<"enter the amount of hexa digits u have \n";
        long double e;
        char hex[50];
        cout<<"ur number in hex     = ";
        cin>>hex;
        e=h2d(hex);
        cout<<"ur number in decimal = "<<e<<endl;
        cout<<"ur number in binary  = "<<d2b(e)<<endl;
        cout<<"ur number in octa    = "<<d2oc(e)<<endl;
        break;
    case '4':
        long double g;
        char oc[50];
        cout<<"note that octal numbers can not contain the numbers 8 and 9, so DO NOT USE THEM\n \n";
        cout<<"ur number in octa    = ";
        cin>>oc;
        g=oc2d(oc);
        cout<<"ur number in decimal = "<<g<<endl;
        cout<<"ur number in binary  = "<<d2b(g)<<endl;
        cout<<"ur number in hexa    = "<<d2h(g)<<endl;
        break;
    }
    cout<<"\n\n\n enter # to exit\n";
    cout<<"what kind of number do u want to convert next?\n";
    cout<<"[1]decimal \n";
    cout<<"[2]binary \n";
    cout<<"[3]hexadecimal\n";
    cout<<"[4]octal decimal\n";
    cin>>ans;
    }
    }
    }
    if(ans != '1'){
    cout<<"\n enter # to exit \n";
    cout<<"[0]how to use\n";
    cout<<"[1]show program map \n";
    cout<<"[2]calculator \n";
    cout<<"[3]converting binary, hexadecimal and octal numbers \n";
    cout<<"[4]calculator (+ only) for hexadecimal, binary and octal numbers\n ";
    }
    cin>>ans;
    }
}
long double calcu(char ans)
{

    switch(ans)
    {
        case '1':
            return sum();
        case '2':
            return sub();
        case '3':
            return multi();
        case '4':
            return devi();
    }
    cin.clear();
    cin.ignore(100 , '\n');
}

void mapp()
{
    cout<<"the program would look like this with it's full use \n\n";
    cout<<"[0]how to use\n";
      cout<<"\t displays some helpful info on how to use the program \n";
    cout<<"[1]show program map \n \t you are here \n";
    cout<<"[2]calculator \n";
      cout<<"\t [1]summation \n";
      cout<<"\t [2]subtraction \n";
      cout<<"\t [3]multiplication \n";
      cout<<"\t [4]devision \n";
    cout<<"[3]converting binary, hexadecimal and octal numbers \n";
      cout<<"\t [1]decimal \n";
      cout<<"\t [2]binary \n";
      cout<<"\t [3]hexadecimal\n";
      cout<<"\t [4]octal decimal\n";
    cout<<"[4]calculator (+ only) for hexadecimal, binary and octal numbers\n ";
      cout<<"\t [1]hexadecimal\n";
      cout<<"\t [2]binary \n";
      cout<<"\t [3]octal \n";
}

string Identify(char ans)
{
    switch(ans)
    {
    case '1':
        return HexCalcu();
        break;
    case '2':
        return BinCalcu();
        break;
    case '3':
        return OctCalcu();
        break;
    }
}
string HexCalcu()
{
    cout<<"please enter the hexadecimal numbers that you have,    # to exit  \n ";
    int sum=0,num;
    char hex[50]={0};
    cin>>hex;
    num=h2d(hex);
    while(hex[0] != '#')
    {
    sum+=num;
    cin>>hex;
    num=h2d(hex);
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return d2h(sum);
}
string BinCalcu()
{
    cout<<"please enter the Binary numbers that you have     # to exit  \n";
    int sum=0,num;
    char bin[50]={0};
    cin>>bin;
    num=b2d(bin);
    while(bin[0] != '#')
    {
    sum+=num;
    cin>>bin;
    num=b2d(bin);
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return d2b(sum);
}
string OctCalcu()
{
     cout<<"please enter the octal numbers that you have     # to exit  \n";
    int sum=0,num;
    char oc[50]={0};
    cin>>oc;
    num=oc2d(oc);
    while(oc[0] != '#')
    {
    sum+=num;
    cin>>oc;
    num=oc2d(oc);
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return d2oc(sum);
}

long double sum()
{
    cout<<"please enter ur numbers and leave a space between them pres any key to continue afterwards \n";
    long double num,sum=0;
    cin>>num;
    while(cin)
    {
    sum+=num; //Add the number to sum
    cin>>num; //Get the next number
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return sum;

}

long double sub()
{
    cout<<"please enter ur numbers and leave a space between them pres any key to continue afterwards \n";
    long double sub ,num;
    cin>>num;
    sub=num*2;
    while(cin)
    {
        sub=sub-num;
        cin>>num;
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return sub;
}

long double multi()
{
    cout<<"please enter ur numbers and leave a space between them pres any key to continue afterwards \n";
    long double multi=1 ,num;
    cin>>num;
    while(cin)
    {
        multi*=num;
        cin>>num;
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return multi;
}


long double devi()
{
    cout<<"please enter ur numbers and leave a space between them pres any key to continue afterwards \n";
    long double devi ,num;
    cin>>num;
    devi=num;
    cin>>num;
    while(cin)
    {
        devi/=num;
        cin>>num;
    }
    cin.clear();
    cin.ignore(200 , '\n');
    return devi;
}

string d2b(int input)
{
                string bin="";
                for( ; ; )
                {
                    if(input%2==0)
                    {
                        bin+="0";
                    }else{
                        bin+="1";
                    }
                    input/=2;
                    if(input < 1){break;}
                        }
                reverse (bin.begin(),bin.end());
                return bin;
}


long double b2d(char input[])
{
                long double c,dec=0;
                int num;
                int a;
                num=strlen(input);
                c=--num;
                for (a=0;a<=num;a++)
                    {
                        switch (input[a])
                        {
                            case '1':
                            dec+=pow(2,c);
                            c--;
                            break;
                            case '0':
                            c--;
                            break;
                            case '#':
                            break;
                            default:
                                cout<<"********************\n";
                                cout<<"ERROR: Wrong Input *  ^^     binary numbers doesn't numbers other than 1s and 0s  \n";
                                cout<<"********************  || \n";
                                a=--num;
                        }
}return dec;
}

string d2h(int dec)
{
                    int c;
                    string hex="";
                    char k;
                    for ( ; ; )
                    {   c=dec%16;
                        dec/=16;

                        switch(c)
                        {
                        case 0 ... 9:
                        k=48+c;
                        hex+=k;
                        k=0;
                        break;
                        case 10 ... 15:
                        k=55+c;
                        hex+=k;
                        k=0;
                        }
                        if(dec < 1){break;}
                        }
                            reverse(hex.begin(),hex.end());
                        return hex;
    }

long double h2d(char hex[])
{
                int a;
                long double c=0;
                int d=strlen(hex),i,j,temp;

                for(i=0,j=d-1;i<d/2;i++,j--)
                {
                    temp=hex[i];
                    hex[i]=hex[j];
                    hex[j]=temp;
                    }


                for(a=0;a<d;a++)
                {
                    switch(hex[a])
                    {
                        case 48 ... 57:
                            c+=static_cast<int>(hex[a]-48)*pow(16,a);
                            break;
                        case 65 ... 90:
                            c+=static_cast<int>(hex[a]-55)*pow(16,a);
                            break;
                        case 97 ... 122:
                            c+=static_cast<int>(hex[a]-87)*pow(16,a);
                            break;
                        }

                    }return c;
}

string d2oc(int dec)
{
    string gh,oc="",e;
    if (dec>=0 && dec <=7)
        {
            gh = static_cast<char>(dec)-48;
            return gh;
        }else{
            bool blue=false;
            while(!blue)
                {
                    oc+=static_cast<char>(dec%8)+48;
                    dec/=8;
                    if(dec < 1){blue = true;}

                }
                reverse(oc.begin(),oc.end());
                return oc;
                }
}

long double oc2d(char oc[])
{
    long double f=0;
    char temp,arr[50];
    int n=strlen(oc);
    for(int i=0,j=n;j>=0;j--,i++)
                {
                    arr[i]=oc[j];

                    }
    for(int x=n;x>0;x--)
        {

            if(arr[x]=='8' || arr[x]=='9'){
                cout<<"********************\n";
                cout<<"ERROR: Wrong Input *      octal numbers doesn't contain 9s and 8s   ^^\n";
                cout<<"********************                                                ||\n";
                break;
            }
            f+=(static_cast<int>(arr[x])-48)*pow(8,x-1);
        }
        return f;
}

