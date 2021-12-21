  #include <bits/stdc++.h>
  using namespace std;
int product(vector<string>arr){
    int fistvalue= arr[0][1]-'0';
    int secondvalue=arr[0][3]-'0';
    int height=0;
    int width=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i][1]-'0'==fistvalue){
            height=secondvalue-(arr[i][3]-'0');
        }
        if(arr[i][3]-'0'==secondvalue){
            width=fistvalue-(arr[i][1]-'0');
        }
    }
    return abs((height*width));
}
int main(){
    cout<<product({"(1 1)","(1 3)","(3 1)","(3 3)"});
    return 0;
}