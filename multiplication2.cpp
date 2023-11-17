#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string a, b;
    vector<int> veca, vecb; //vector to gather integers from string
    cin >> a >> b;
    // gathering numbers
    if( a.size() > b.size()){
        for(int i = 0; i < a.size(); i++){ // iterate the larger sized string to do it with one loop
            veca.push_back(a[i] - '0');
            if(i < b.size()){
                vecb.push_back(b[i] - '0');
            }
    }
    }
    else if(a.size() <= b.size()){
        for(int i = 0; i < b.size(); i++){ 
            veca.push_back(b[i] - '0');
            if(i < a.size()){
                vecb.push_back(a[i] - '0');
            }   
    }
    }
    // done

    // multiplication
    reverse(veca.begin(), veca.end());
    reverse(vecb.begin(), vecb.end());
    vector<int> ans1, ans2; //ans1 for first multiplication, ans2 for second, ans3....., but its not gonna work, if a multiplication is done i will insert -1
    int carry = 0;
    for(int i = 0; i < vecb.size();i++){
        carry = 0;
        for(int j = 0; j < veca.size(); j++){
            int multiplication = (veca[j] * vecb[i])+carry; //ager carry add korte hobe
            
            if(j == veca.size()-1){ // j == last index hoile carry consider korte hobe na
                ans1.push_back(multiplication);
                ans1.push_back(-1); // inserting -1 to mark the last number of first layer
            }
            else{
                if(multiplication >= 10){
                    carry = multiplication/10; // multiplication value >=10 hoile remainder hobe result ar division hobe multiplication/10
                    int result = multiplication%10;
                    ans1.push_back(result);
                }
                else{
                    int result = multiplication;
                    ans1.push_back(result);
                }
            }
        }
    }
    //till now multiplication is working fine
    for(auto &i : ans1){
        cout << i << endl;
    }
}
