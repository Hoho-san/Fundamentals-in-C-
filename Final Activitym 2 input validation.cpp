#include<iostream>
#include<limits>
using namespace std;

struct FruitType{
	int shape;
	int color;
	int texture;
};
FruitType inputFruit(FruitType *fruit){
	cout << "Fruit Shape: ";
	cin >> fruit->shape;
	while(1)
	{
		if(cin.fail())
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"You have entered wrong input"<<endl;
			cin>>fruit->shape;
			}
		if(!cin.fail())
		break;
	}
	cout <<"Fruit Color: ";
	cin >> fruit->color;
	while(1)
	{
		if(cin.fail())
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"You have entered wrong input"<<endl;
			cin>>fruit->color;
			}
		if(!cin.fail())
		break;
	}
	cout << "Fruit Texture: ";
	cin >> fruit->texture;
	while(1)
	{
		if(cin.fail())
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"You have entered wrong input"<<endl;
			cin>>fruit->texture;
			}
		if(!cin.fail())
		break;
	}
	cout << "\n";
}
FruitType identifyFruit(FruitType *fruit){
	cout << "Fruit Type: ";
	if(fruit->shape == 0 && fruit->color == 2 && fruit->texture == 0){
		cout << "Apple";
	}
	else if(fruit->shape == 1 && fruit->color == 0 && fruit->texture == 0 || fruit->shape == 1 && fruit->color == 1 && fruit->texture == 0 ){
		cout << "Banana";
	}
	else if(fruit->shape == 0 && fruit->color == 3 && fruit->texture == 0){
		cout << "Orange";
	}
	else if(fruit->shape == 1 && fruit->color == 0 && fruit->texture == 1){
		cout << "Jackfruit";
	}
	else{
		cout <<"Fruit unidentified";
	}
}
void assumption(){
    cout << "The shape is:         The color is:        The texture is:" << endl;
	cout << "[0] ROUND SHAPE       [0] GREEN COLOR      [0] SMOOTH TEXTURE" << endl;
	cout << "[1] OBLONG SHAPE      [1] YELLOW COLOR     [1] ROUGH TEXTURE" << endl; 
	cout << "                      [2] RED COLOR" << endl;
	cout << "                      [3] ORANGE COLOR" << endl; 
	cout << "\n";
}

int main(){
	FruitType fruit;
	assumption();
	inputFruit(&fruit);
	identifyFruit(&fruit);
	return 0;
}

