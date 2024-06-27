#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n) {
for( int i=0; i<n; i++) {
    cout<< a[i] << " ";
}

}
bool linearSearch(int *a, int n, int element) {
    bool flag;
for( int i=0; i<n; i++) {
        if ( a[i] == element) {
            flag = true;
            break;

        }
    else {
            flag = false;
     }
}
return flag;

}
int main()  {
    int n=100000;
int *a= new int[n];
ifstream fin ("100k.txt");
for( int i=0; i<n; i++)  {
    fin >> a[i];
}

//printList(a,n);
//cout<< endl;

bool p;
int element;

cout<< " Enter The Element To Search : "<<endl;
cin>> element;

p= linearSearch(a,n,element);

if (p==true){
    cout<< " Congratulations! You Find The Number. " << endl;

}
else {
    cout<< " Data Don't Found. " << endl;
}
return  0;
}
