#include <bits/stdc++.h>
using namespace std;
bool check_partial(int ** board, int n, int empty,int sum){
    for(int i = 0; i < n; i++){
        int s= 0;
        bool is_partial = false;
        for(int j = 0; j < n; j++){
            if(board[i][j]!=empty){
                s+=board[i][j];
            }
            else{
                is_partial = true;
            }
        }
 
        if(!is_partial && s != sum) return false;
    }
    for(int j = 0; j < n; j++){
        int s= 0;
        bool is_partial = false;
        for(int i = 0; i < n; i++){
            if(board[i][j]!=empty){
                s+=board[i][j];
            }
            else{
                is_partial = true;
            }
        }
 
        if(!is_partial && s != sum) return false;
    }
    int s = 0;
    bool is_partial = false;
    for(int i = 0; i < n; i++){
        if(board[i][i]!=empty){
            s+=board[i][i];
        }
        else{
            is_partial = true;
        }
    }
 
    if(!is_partial && s != sum) return false;
    s = 0;
    is_partial = false;
    for(int i = 0; i < n; i++){
        if(board[i][n-i-1]!=empty){
            s+=board[i][n-i-1];
        }
        else{
            is_partial = true;
        }
    }
 
    if(!is_partial && s != sum) return false;
    return true;
}
bool check(int ** board, int n, int sum){
    for(int i = 0; i < n; i++){
        int s= 0;
        for(int j = 0; j < n; j++){
            s+=board[i][j];
        }
        if(s != sum)return false;
    }
    for(int j = 0; j < n; j++){
        int s= 0;
        for(int i = 0; i < n; i++){
            s+=board[i][j];
        }
        if(s != sum)return false;
    }
    int s = 0;
    for(int i = 0; i < n; i++){
        s+=board[i][i];
    }
    if(s != sum) return false;
    s = 0;
    for(int i = 0; i < n; i++){
        s += board[i][n-i-1];
    }
    if(s != sum) return false;
    return true;
 
}
void print(int ** board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
void fun(int ** a, int ** board, int n, int k, int empty, int sum){
    // consider board[k/n][k%n]
    for(int i = 0; i < n * n; i++){
        if(a[i][1] == 0){ // not used
            board[k/n][k%n] = a[i][0];
            a[i][1] = 1;
            //print(board,n);
            if(k == n * n - 1){
                if(check(board, n, sum)){
                    print(board,n);
                    return;
                }
            }
            else{ // partial result
                if(check_partial(board, n, empty,sum)){
                    fun(a, board, n, k+1, empty, sum);
                }
            }
            board[k/n][k%n] = empty;
            a[i][1] = 0;
        }
 
    }
}
 
int main(){
//    int ** a_test = new int * [3*3];
//    for(int i = 0; i < 3 ; i++){
//        a_test[i]=new int[3];
//        for(int j = 0; j < 3; j++){
//            cin >> a_test[i][j];
//        }
//    }
//    if(check_partial(a_test, 3, 0 ,15))cout<<"True";
//    else cout<<"False";
    int n;
    cin >> n;
    int ** array = new int *[n*n];
    int max = -100000001;
    int sum = 0;
    for(int i = 0; i < n*n ; i++){
        array[i] = new int[2];
        cin >> array[i][0];
        array[i][1] = 0; // not used;
        sum += array[i][0];
        if(array[i][0] > max){
            max = array[i][0];
        }
    }
    int empty = max + 1;
    int ** board = new int*[n];
    for(int i = 0; i < n; i++){
        board[i] = new int[n];
        for(int j = 0; j < n; j++){
            board[i][j] = empty;
        }
    }
    cout << sum/n<< endl;
    fun(array, board, n, 0, empty, sum/n);
    return 0;
 
}