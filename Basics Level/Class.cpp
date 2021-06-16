#include <iostream>
using namespace std;

class Students{
	private:
	int rollNo, mark;
	char name[20], section;
	
	public:
		void setData(){
			cout<<"----- Enter Students Records ------"<<endl;
			
			cout<<"Enter Roll No: ";
			cin>>rollNo;
			
			cout<<"\n Enter Name: ";
			cin>>name;
			
			cout<<"Enter Section: ";
			cin>>section;
		}
		
		void getData(){
			cout<<"Roll No: "<<rollNo;
			cout<<"Name: "<<name;
			cout<<"Section: "<<section;
		}
};
int main()
{
	int totalStu, choice, counter=0;
	cout<<"Enter The Total Number of Students: ";
	cin>>totalStu;
	do{
		cout<<"\n Press 1 to Enter Data: "<<endl;
		cout<<"\n Press 2 to Display Data: "<<endl;
		cin>>choice;
		
		Students obj1;
		if(choice==1)
		{
			obj1.setData();
		} else {
			obj1.getData();
		}
		totalStu--;
	}while(totalStu>counter);
	
	Students obj2;
	obj2.getData();
	

	



}

