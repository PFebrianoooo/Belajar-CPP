#include<iostream>
using namespace std;

#define max 5
string data[max];
int front = 0, rear = -1;

bool isFull(){
	if(rear >= max - 1){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if(front > rear){
		return true;
	} else {
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Antrian :" << endl;
		for(int a= front; a <= rear; a++){
			cout << a+1 << ". " << data[a] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
	cout << endl;
}

void enqueue(){
	if(!isFull()){
		rear++;
		cout << "Masukkan Data : " ;
		cin >> data[rear];
	} else {
		cout << "Antrian Penuh" << endl;
	}
}

void dequeue(){
	if(!isEmpty()){
		cout << "Data yang dihapus : " << data[front] << endl;
		front++;
	} else {
		cout << "Antrian Kosong" << endl;
	}
}

int main(){
	int pil;

	queue:
		system("cls");
		view();
		cout << "Menu Utama\n1. Enqueue\n2. Dequeue\n3. Keluar\nPilihan: ";
		cin >> pil;

	if(pil == 1){
		system("cls");
		cout << "Enqueue" << endl;
		enqueue();
		system("pause");
		goto queue;
	} else if (pil == 2){
		cout << "Dequeue" << endl;
		dequeue();
		system("pause");
		goto queue;
	} else if (pil == 3){
		cout << "Program selesai" << endl;
	} else {
		cout << "Pilihan tidak valid" << endl;
		system("pause");
		goto queue;
	}

	return 0;
}
