#include <iostream>
using namespace std;

struct book{
    int id;
    string name;
    string author;
    bool issued;
};

int main() {
    int choice;
    book library[100];
    int count = 0;
    while(true){
        cout<<"1. Add book"<<endl;
        cout<<"2. Show book"<<endl;
        cout<<"3. exit "<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"enter book id: ";
                cin>>library[count].id;
                cin.ignore();
                cout<<"enter book name: ";
               getline(cin,library[count].name);
                cout<<"enter book author name: ";
                getline(cin,library[count].author);
                cout<<"book status is true or false / 1 or 0 from: ";
                cin>>library[count].issued;
            count++;
            cout<<"book added successfully!!!!"<<endl;
            break;
            }
            case 2:{
                if(count == 0){
                    cout<<"no bood added\n";
                } else{
                    cout<<"book list:\n";
                    for(int i=0;i<count;i++){
                        cout<<"id: "<<library[i].id<<endl;
                        cout<<"Book name: "<<library[i].name<<endl;
                        cout<<"Author name:"<<library[i].author<<endl;
                        cout<<"Status: ";
                        if(library[i].issued){
                            cout<<"issued\n";
                        }else{
                            cout<<"not issued\n";
                        }
                    }
                }break;
            }
            case 3:{
                cout<<"Exit program\n";
                return 0;
            }
            default:
                cout<<"invalid choice\n";
            
        } 
    }

    return 0;
}