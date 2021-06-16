#include <iostream>
using namespace std;

class Fish{
	public:
		void eat(){
			cout<<"\n I eat like a fish";
		}
		void swim(){
			cout<<"\n I swim like a fish";
		}
};

class Women{
	public:
		void eat(){
			cout<<"\n I eat like a Women";
		}
		
		void Face(){
			cout<<"\n I have a face like a Women";
		}
};

class Marmid:public Women{
	public:
	void mix(){
		cout<<"eat";
		cout<<"swim";

	}
	void all(){
		Women::eat();
		Women::Face();
	}
	
	Marmid(){
		cout<<"I am an ovrided Constructor";
	}
	~Marmid(){
		cout<<"I am a Destructor of Marmid Class";
	}
};

int main()
{
	
	Marmid *objMarmid;
	objMarmid;
	

}

