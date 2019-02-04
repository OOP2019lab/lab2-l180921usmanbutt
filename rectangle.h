

//defining class
class rectangle
{
private:
int length;
int width;

public:
	int getwidth();
	int getlength();
	void setlength(int l);
	void setwidth(int w);
	int getarea();
	void rotaterectangle();
	void draw();


};

//defining object
rectangle r1;

//definition pf all functions.....

void  rectangle::setwidth(int w){
	r1.width=w;

}

void  rectangle::setlength(int l){
	r1.length=l;

}

int rectangle::getlength(){

	cout<<"length of rectangle is:"<<r1.length<<endl;
	return r1.length;
}

int rectangle::getwidth(){

	cout<<"width of rectangle is:"<<r1.width<<endl;
	return r1.width;
}
 int rectangle::getarea(){
	/* int l;
	 cout<<"enter length:"<<endl;
	 cin>>l;
	 int w;
cout<<"enter width:"<<endl;
cin>>w;

int area=l*w;*/

int area=r1.length*r1.width;
cout<<"the area of rectangle is:"<<area<<endl;

return area;

 }

 void rectangle::rotaterectangle(){

	 int temp=r1.length;
	 r1.length=r1.width;
	r1.width=temp;

	 cout<<"length becomes:"<<r1.length<<endl;
	 cout<<"width becoms:"<<r1.width<<endl;

 }

 void rectangle::draw(){

	 for(int i=0;i<r1.length; i++)
	 {
		 for(int j=0;j<r1.width;j++){
		 cout<<"*";
		 }
		 cout<<endl;
	 }

 }



   
