#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct githubuser{
	
	int size;
	string username;
	string folder;
	string name;
	string email;
	string folder2;

};

//reading data from file
void readfromfile(githubuser *&arr){

ifstream fin("file.txt");
char arr1[50];

 fin.getline(arr1,30);
 cout<<arr1<<endl;
 int n=arr[0].size=arr1[0]-48;

 for(int i=0;i<n;i++){
 fin.getline(arr1,30);
 cout<<arr1<<endl;
 arr[0].folder=arr1;
 fin.getline(arr1,30);
 cout<<arr1<<endl;
 arr[0].name=arr1;
 fin.getline(arr1,30);
 cout<<arr1<<endl;
 arr[0].username=arr1;
 fin.getline(arr1,30);
 cout<<arr1<<endl;
 arr[0].email=arr1;
 fin.getline(arr1,30);
 cout<<arr1<<endl;
 arr[0].folder2=arr1;
 }

//while(fin.getline(arr1,50)){
//
//	cout<<arr1<<endl;
//	
//
//}


 fin.close();


}

//printing the structure

void print (githubuser *&arr){
	cout<<arr[0].size<<endl;
	cout<<arr[0].folder<<endl;
	cout<<arr[0].name<<endl;
	cout<<arr[0].username<<endl;
	cout<<arr[0].email<<endl;
	cout<<arr[0].folder2<<endl;


}



	int main(){

		githubuser *user=new githubuser[3];
		readfromfile(user);
		print(user);


		//deallocating the memory
		delete [] user;

		system("pause");
}
