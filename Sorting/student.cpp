class student
{
public:
int rollno;
char* name;
private:
int age;

public:

~student()
{
cout<<"destructor called"<<endl;
}

//destructor

//default constructor
student()
{
cout<<"constructor 1 called"<<endl;

}
//parameterized constructor
student(int a)//const 2 called
{
cout<<"constructor 2 called"<<endl;
age=a;
}

student(int a,int r)//const 3 called
{
cout<<"constructor 3 called"<<endl;
age=a;
rollno=r;
}

void display()
{

cout<<"Name: "<<name<<"\nAGE: "<<age<<"\nRoll No.: "<<rollno<<endl;
}

};









