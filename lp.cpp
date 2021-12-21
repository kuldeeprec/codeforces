#include <bits/stdc++.h>
using namespace std;
const int h = 1e5 + 5;
const int mod = 1e9 + 7;
const int N=2010;
#define ll long long
#define kudeepyadav73 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 void maxi(){
     int blank = 0;

        char a[3][3];
        int x = 0, o = 0;
        int r = 0;
        int  k = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    x++;
                else if (a[i][j] == 'O')
                    o++;
                else
                    blank++;
            }
        }
        int flag = 1;
        if (x < o || (x - o) > 1)
            flag = 0;

        else
        {

            int cntx = 0, cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[0][i] == 'X')
                    cntx++;
                else if (a[0][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[1][i] == 'X')
                    cntx++;
                else if (a[1][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[2][i] == 'X')
                    cntx++;
                else if (a[2][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[i][0] == 'X')
                    cntx++;
                else if (a[i][0] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r  =1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[i][1] == 'X')
                    cntx++;
                else if (a[i][1] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (a[i][2] == 'X')
                    cntx++;
                else if (a[i][2] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == j)
                    {
                        if (a[i][j] == 'X')
                            cntx++;
                        else if (a[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
            cntx = 0;
            cnto = 0;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == 2 - j)
                    {
                        if (a[i][j] == 'X')
                            cntx++;
                        else if (a[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    r = 1;
                else if (cnto == 3)
                    k = 1;
            }
        }
        if (flag == 0)
            cout << 3 << endl;
        else if ((r && k))
        {
            cout << 3 << endl;
        }
        else if (flag)
        {
            if (r)
            {
                if (x == o)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (k)
            {
                if (o < x)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (blank == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
 }
 
    
  
    int main()
    {
        kudeepyadav73
    
        ll t;
         cin>>t;
         while(t--)
            maxi();
        
        return 0;
    }