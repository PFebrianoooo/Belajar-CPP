#include<iostream>
using namespace std;

#define max 5 // ukuran maksimum kapasitas data
string data [max];
int top = 0;

// Mengecek apakah queue penuh
bool isFull(){
	if(top >=max){
		return true;
	} else {
		return false;
	}
	 
}

// Apakah queue kosong
bool isEmpty(){
	if(top== 0){
		return true;	
	} else {
		return false;
	}
}

// Menampilkan data antrian
void view(){
	if(!isEmpty()){
		cout << "Queue is empty\n" << endl;
		for(int a= top-1; a >= 0; a--){
			cout << "inserted " << data[a] << endl;
			
		}
	}else {
		cout << "Queue is empty" << endl;
	}
	if(isFull()){
		cout << "Queue is Full" << endl;
	}
	cout << endl;
}

// memasukkan data queue
void enqueue(){
	if(!isFull()){
		cout << "Input Data : " ;
		cin >> data[top];
		top++;
		
	
	}
}

// menghapus data antrian
void dequeue(){
	if(!isEmpty()){
		for(int a=0; a<top-1; a++){
			data[a]= data[a+1];
		}
		top--;
	
}
}
		
// menu		
int main(){
	int pil;
	string isi;
	
	queue :
		system("cls");
		view();
		cout << "Front index-> 0\nItems -> 1 2 3 4 5" << endl; 
		cout << "Rear index-> 4\n\nDeleted -> 1\nChoise : ";
		cin >> pil;
	
	if(pil ==1){
		system("cls");
		//cout << "Enqueue" << endl;
		enqueue();
		goto queue;
		
	}else if (pil == 2){
		//cout << "Dequeue" << endl;
		system("cls");
		dequeue();
		goto queue;
		}
} 
 
