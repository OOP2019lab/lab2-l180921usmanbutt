#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct githubuser{

	string name;
	int size;
};

void inputfromuser(githubuser *&user,int size)
{
	user =new githubuser[size];

	for (int i=0;i<size;i++)
	{
		cout<<"ENTER NAME OF USER "<<i+1<<":"<<endl;
		cin>>user[i].name;
	}

	for (int i=0;i<size;i++){
	cout<<user[i].name<<endl;
	}

}

bool searchuser(githubuser *&user,int size){
	cout<<"ENTER USERNAME TO SEARCH"<<endl;
	string username;
	cin>>username;

	for(int i=0;i<size;i++){
		if(username==user[i].name){
			cout<<"user already exists plz enter username again"<<endl;
			return true;
	}
	}

	cout<<"user not exists";
	return false;
}

bool users(githubuser *&user,int size){
	string username;
	cout<<"enter username "<<endl;
	cin>>username;

	for(int i=0;i<size;i++){
	if(username==user[i].name){
	   cout<<"THE USER IS"<<i+1<<endl;
	   return true;
	}	
	}
	cout<<"username not found"<<endl;
	return false;



}




	int main()
{
	githubuser *user=new githubuser[4];
	 inputfromuser(user,4);
	 searchuser(user,4);
	 users(user,4);
	 system("pause");
	 return 0;
}