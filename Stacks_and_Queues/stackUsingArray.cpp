//#include<climits>
template <typename T>
class stackUsingArray
{

T *data;
int nextindex;
int capacity;

public:

stackUsingArray()
{

data=new T[4];
nextindex=0;

capacity=4;
}


bool isempty()
{

return nextindex==0;


}

int size()
{

return nextindex;

}

void push(T element)
{

if(nextindex==capacity)
{

T *newdata=new T[2*capacity];

for(int i=0;i<capacity;i++)
{

newdata[i]=data[i];
}

capacity*=2;

delete [] data;
data=newdata;

}

/*
cout<<"stack full\n";
return;
*/

data[nextindex]=element;
nextindex++;
}

T pop()
{

if(isempty())
{

cout<<"Our stack is empty\n";
return 0;

}

nextindex--;
return data[nextindex];

}

T top()
{
if(isempty())
{

cout<<"Our stack is empty\n";
return 0;

}

return data[nextindex-1];

}

};
