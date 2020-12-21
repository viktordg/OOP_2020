#pragma once
class Character
{
protected:
	char* name;
	int health;
	int damage;
public:
	Character();
	Character(const char* name, int health, int damage);
	Character(const Character& other);
	Character& operator= (const Character& other);
	~Character();
	 
	void set_name(const char* name);
	void set_health(int health);
	void set_damage(int damage);
};

