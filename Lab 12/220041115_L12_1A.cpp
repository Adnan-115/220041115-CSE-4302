#include <iostream>
#include<string>
#include<vector>
#include<deque>
#include<list>
#include<fstream>

using namespace std;

class Book{
private:
    string title;
    string author;
    string ISBN;
public:
    Book(string a,string b,string c):title(a),author(b),ISBN(c){}
    string getTitle()const{
        return title;
    }
    string getAuthor()const{
        return author;
    }
    string getISBN()const{
        return ISBN;
    }
    void display()const{
        cout<<"Title: "<<title<<", Author: "<<author<<", ISBN: "<<ISBN<<endl;
    }
};
class Library{
private:
    vector<Book>inventory;
    deque<Book>borrowedBooks;
    list<Book>archivedBooks;
public:
    void Addbook(){
        string title,author,ISBN;
        cout<<"Enter Title of the Book: ";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter Author of the Book: ";
        getline(cin,author);
        cout<<"Enter ISBN of the Book: ";
        getline(cin,ISBN);
        inventory.push_back(Book(title,author,ISBN));
    }
    void BorrowBook(){
        string isbn;
        if(inventory.empty()){
            cout<<"No Books to Borrow"<<endl;
        }
        else{
            cout<<"Available Books: "<<endl;
            for(int i=0;i<inventory.size();i++){
                inventory[i].display();
            }
            cout<<"Enter the ISBN of the Book you want to borrow: ";
            cin.ignore();
            getline(cin,isbn);
            for(int i=0;i<inventory.size();i++){
                if((inventory[i].getISBN()==isbn)){
                    borrowedBooks.push_back(inventory[i]);
                    inventory.erase(inventory.begin()+i);
                    return;
                }
            }
            cout<<"Wrong ISBN"<<endl;
        }
    }
    void ReturnBook(){
        string isbn;
        if(borrowedBooks.empty()){
            cout<<"No Books to return"<<endl;
        }
        else{
            cout<<"Books to be returned: "<<endl;
            for(int i=0;i<borrowedBooks.size();i++){
                borrowedBooks[i].display();
            }
            cout<<"Enter the ISBN of the book you want to return: ";
            cin.ignore();
            getline(cin,isbn);
            for(int i=0;i<borrowedBooks.size();i++){
                if(borrowedBooks[i].getISBN() ==isbn){
                    inventory.push_back(borrowedBooks[i]);
                    borrowedBooks.erase(borrowedBooks.begin()+i);
                    return;
                }
            }
            cout<<"Wrong ISBN"<<endl;
        }
    }
    void ArchiveBook(){
        string isbn;
        if(inventory.empty()){
            cout<<"No Books to Archive"<<endl;
        }
        else{
            cout<<"Available Books: "<<endl;
            for(int i=0;i<inventory.size();i++){
                inventory[i].display();
            }
            cout<<"Enter the ISBN of the Book you want to archive: ";
            cin.ignore();
            getline(cin,isbn);
            for(int i=0;i<inventory.size();i++){
                if((inventory[i].getISBN()==isbn)){
                    archivedBooks.push_back(inventory[i]);
                    inventory.erase(inventory.begin()+i);
                    return;
                }
            }
            cout<<"Wrong ISBN"<<endl;
        }

    }
    void DisplayBooks(){
        cout<<"Books in Inventory: "<<endl;
        for(int i=0;i<inventory.size();i++){
            inventory[i].display();
        }
        cout<<"Borrowed Books: "<<endl;
        for(int i=0;i<borrowedBooks.size();i++){
            borrowedBooks[i].display();
        }
        cout<<"Archived Books: "<<endl;
        for(auto a:archivedBooks){
            a.display();
        }
    }
    void SaveData(){
        ofstream f1("inventory.txt");
        ofstream f2("borrow.txt");
        ofstream f3("archive.txt");
        if(!f1||!f2||!f3){
            cout<<"Error Opening file."<<endl;
            return;
        }
        for(int i=0;i<inventory.size();i++){
            f1<<inventory[i].getTitle()<<","<<inventory[i].getAuthor()<<","<<inventory[i].getISBN()<<endl;
        }
        for(int i=0;i<borrowedBooks.size();i++){
            f2<<borrowedBooks[i].getTitle()<<","<<borrowedBooks[i].getAuthor()<<","<<borrowedBooks[i].getISBN()<<endl;
        }
        for(auto a:archivedBooks){
            f3<<a.getTitle()<<","<<a.getAuthor()<<","<<a.getISBN()<<endl;
        }

    }
    void LoadData(){
        string t,a,i;
        ifstream f1("inventory.txt");
        ifstream f2("borrow.txt");
        ifstream f3("archive.txt");
        if(!f1||!f2||!f3){
            cout<<"Error Opening file."<<endl;
            return;
        }
        while(getline(f1,t,',')&&getline(f1,a,',')&&getline(f1,i)){
            inventory.push_back(Book(t,a,i));
        }
        while(getline(f2,t,',')&&getline(f2,a,',')&&getline(f2,i)){
            borrowedBooks.push_back(Book(t,a,i));
        }
        while(getline(f3,t,',')&&getline(f3,a,',')&&getline(f3,i)){
            archivedBooks.push_back(Book(t,a,i));
        }


    }



};
int main()
{
    Library l;
    int a=100;
    while(a!=-1){
        cout<<"1.Add a Book"<<endl;
        cout<<"2.Borrow a Book"<<endl;
        cout<<"3.Return a Book"<<endl;
        cout<<"4.Archive a Book"<<endl;
        cout<<"5.Display Books"<<endl;
        cout<<"6.Save Books to a file"<<endl;
        cout<<"7.Add Books from files"<<endl;
        cout<<"Press -1 to exit."<<endl;
        cout<<"Enter your choice:";
        cin>>a;
        if(a==1){
            l.Addbook();
        }
        else if(a==2){
            l.BorrowBook();
        }
        else if(a==3){
            l.ReturnBook();
        }
        else if(a==4){
            l.ArchiveBook();
        }
        else if(a==5){
            l.DisplayBooks();
        }
        else if(a==6){
            l.SaveData();
        }
        else if(a==7){
            l.LoadData();
        }
        else if(a==-1){
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
    }


    return 0;
}
