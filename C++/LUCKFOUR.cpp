#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
    for(int i = 0; i<n ; i++){
        string input = "";
        int ans=0;
        cin>>input;
        for(int i=0;i<input.length();i++){
            if(input[i]-'0'==4){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
