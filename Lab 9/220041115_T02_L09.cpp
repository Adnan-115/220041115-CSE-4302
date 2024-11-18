#include <iostream>

using namespace std;

class Artwork{
protected:
    string title;
    string artist;
    float price;
    float discount;
public:
    Artwork(string t, string a, float p) : title(t), artist(a), price(p),discount(0.0){}

    virtual ~Artwork() {}
    virtual void displayDetails()const{
        cout<<"Title: "<<title<<" Artist: "<<artist<<" Price: "<<price<<" Discount: "<<discount<<" Price After Discount: "<<price-discount;
    };
    virtual void applyDiscount(float f)=0;
};

class Painting:public Artwork{
private:
    string medium;
public:
    Painting(string a, string b, float p, string s) : Artwork(a, b, p), medium(s) {}
    void displayDetails()const{
        Artwork::displayDetails();
        cout<<" Medium of art: "<<medium<<endl;
    }
    void applyDiscount(float f){
        discount=price*f/100;
    }
};

class Sculpture:public Artwork{
private:
    string material;
public:
    Sculpture(string a, string b, float p, string s) : Artwork(a, b, p), material(s) {}
    void displayDetails()const{
        Artwork::displayDetails();
        cout<<" Material of art: "<<material<<endl;
    }
    void applyDiscount(float f){
        discount=0;
    }

};

class DigitalArt:public Artwork{
private:
    string resolution;
public:
    DigitalArt(string a, string b, float p, string s) : Artwork(a,b,p), resolution(s) {}
    void displayDetails()const{
        Artwork::displayDetails();
        cout<<" Resolution of art: "<<resolution<<endl;
    }
    void applyDiscount(float f){
        discount=price*(f+1)/100;
    }
};
int main()
{
    Artwork* arts[10];
    arts[0]= new Painting("Painting 1","Person 1",100000,"Acrylic");
    arts[1]= new Sculpture("Sculpture 1","Person 2",1000000,"Bronze");
    arts[2]= new DigitalArt("NFT 1","Unknown",10000000,"800x600");
    arts[3]= new Painting("Painting 2","Person 3",200000,"Acrylic");
    arts[4]= new Painting("Painting 3","Person 4",300000,"Acrylic");
    cout<<"Before Discount: "<<endl<<endl;
    for(int i=0;i<5;i++){
        arts[i]->displayDetails();
    }
    cout<<endl;
    cout<<"After Discount: "<<endl<<endl;
    for(int i=0;i<5;i++){
        arts[i]->applyDiscount(5);

    }
    for(int i=0;i<5;i++){
        arts[i]->displayDetails();

    }


    return 0;
}
