#include <iostream>
#include<vector>

using namespace std;

class BossEnemy;


class CharacterActions{

public:
    virtual void attack()=0;
    virtual void defend()=0;
    virtual void useSpecialAbility()=0;
    virtual void displayStats()const=0;
    virtual ~CharacterActions(){}

};

class BaseCharacter:public CharacterActions{
protected:
    string name;
    int health;
    int mana;
    int power;
    int special_attack;
public:
    BaseCharacter(string s, int h,int a,int b):name(s),health(h),mana(0),power(a),special_attack(b){}
    virtual void displayStats()const{
        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Mana: "<<mana<<endl;
    }
    virtual void attack(){
        cout<<name<<" attacks with power "<<power<<endl;
    }
    virtual void defend(){
        cout<<name<<"Defends."<<endl;
    }
    string getname(){
        return name;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    int getpower(){
        return power;
    }
    int getmana(){
        return mana;
    }
    void setmana(int a){
        mana=a;
    }
    int getSpecial(){
        return special_attack;
    }
    ~BaseCharacter(){}



};
class Warrior: public BaseCharacter{
protected:
    string ability;
public:
    Warrior(): BaseCharacter("Warrior",100,25,35),ability("Berserk Rage"){}
    void useSpecialAbility(){
        cout<<name<<" uses "<<ability<<" with Power "<<special_attack;
    }

};
class Mage: public BaseCharacter{
protected:
    int special_attack;
    string ability;
public:
    Mage(): BaseCharacter("Mage",120,20,30),ability("Arcane Blast"){}
    void useSpecialAbility(){
        cout<<name<<" uses "<<ability<<" with Power "<<special_attack;
    }

};
class Archer: public BaseCharacter{
protected:
    string ability;
public:
    Archer(): BaseCharacter("Archer",90,20,35),ability("Fire Arrow"){}
    void useSpecialAbility(){
        cout<<name<<" uses "<<ability<<" with Power "<<special_attack;
    }

};
class BossEnemy{
private:
    string name;
    int health;
    int power;
public:
    BossEnemy():name("Boss"),health(150),power(30){}
    void attack(BaseCharacter* b){
        cout<<name<<" attacks "<<b->getname()<<" with power "<<power<<endl;
    }
    int getBoss_health(){
        return health;
    }
    void setBoss_health(int a){
        health =a;
    }
    int getboss_power(){
        return power;
    }
};



class GameEngine{
private:
    vector<BaseCharacter*>player;
    BossEnemy boss;
public:
    void attack_char(BossEnemy boss,BaseCharacter* b){
        boss.attack(b);
        cout << b->getname() << " takes " << boss.getboss_power() << " damage! Health now: ";
        int char_health = b->gethealth();
        char_health -= boss.getboss_power();
        b->sethealth(char_health);
        cout<<char_health<<endl;

    }
    virtual void boss_attack(BossEnemy& b,BaseCharacter* c){
        c->attack();
        int s=c->getmana();
        s+=50;
        c->setmana(s);
        int p=c->getpower();
        if(c->getmana()>=100){
            c->useSpecialAbility();
            p+=c->getSpecial();
            c->setmana(0);
            cout<<endl;
        }
        cout<<"Boss Takes "<<p<<" Damage. Health Now: ";
        int a=b.getBoss_health();
        a=a-p;
        b.setBoss_health(a);
        cout<<b.getBoss_health()<<endl;

    }
    void start_game(){
        cout<<"Game Begins! Players vs Boss!";
        player.push_back(new Warrior());
        player.push_back(new Archer());
        player.push_back(new Mage());

        while(true){
            for(int i=0;i<3;i++){
                boss_attack(boss,player[i]);

                if(boss.getBoss_health()<0){
                    cout<<"Boss Defeated."<<endl;
                    return;
                }
            }
            for(int i=0;i<3;i++){

                attack_char(boss,player[i]);
            }
        }
    }
};




int main()
{   GameEngine g;
    g.start_game();
    return 0;
}
