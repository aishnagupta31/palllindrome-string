#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string :";
	cin>>s;
	//cout<<"Resultant string: "<<s;
	int i,j,flag=0,size;
	size= s.length();
	for(int i=0, j=size-1;i<=j;i++,j--){
	    char temp= s[i];
	    s[i]=s[j];
	    s[j]= temp;
	}
	for(int i=0; i<size; i++){
		if(s[i]!= s[size-i-1]){
			flag= 1;
			break;
		}
	}
	cout<<"Resultant string: "<<s<<endl;
	if(flag==1){
		cout<<"string is not a pallindrome\n";
	}
	else{
		cout<<"string is a pallindrome\n";
	}
}
