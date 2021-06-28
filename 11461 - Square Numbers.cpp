#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){

    int a,b;

    while(cin >> a >> b && a!=0 && b!=0){

        int cnt = 0;
        for(int i = a; i <= b; i++){

            int tmp = sqrt(i);
            if(i == pow(tmp,2))cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
