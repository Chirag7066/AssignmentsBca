#include <iostream>
using namespace std;
class books{
    string isbn, author, title;
public:
    books(){}
    books(string i, string a, string t):isbn(i), author(a), title(t){}
    bool check(string input) const{
        return isbn==input;   //checking if isbn is there
    }
    void display(){
        cout<<"Title: "<<title<<"\nAuthor: "<<author<<"\nISBN: "<<endl;
    }
};
class library{
    books book[10];
public:
    library(){ 
        book[0]=books("ISBN1", "Author 1", "Title 1");
        book[1]=books("ISBN2", "Author 2", "Title 2");
        book[2]=books("ISBN3", "Author 3", "Title 3");
        book[3]=books("ISBN4", "Author 4", "Title 4");
        book[4]=books("ISBN5", "Author 5", "Title 5");
    }
    void search(string isbn){
        bool exists=false;
        for(int i=0;i<5;i++){
        if(book[i].check(isbn)){
            cout<<"Book found... Details:-"<<endl;
            book[i].display();
            exists= true;
            break;
        }
        } 
        if(!exists){cout<<"Book not found"<<endl;}
    }
};
int main(){
    library l1;
    string input;
    cout<<"Enter the ISBN: ";
    cin>>input;
    l1.search(input);
    return 0;
}