#include <stdio.h>
# define max 5

int i ;
int limit = 0;
int push = 0;
int queue [max];

void input_elemen (){
	
	if (limit<=max-1){
		
		printf :"input elemen queue"; scanf ("%d", &queue[max-1]);
		for (i=max-1; i>=push ; i--){
			queue[i-1]= queue[i];
		}
		
		push++;
		limit++;
		for (i=max-1; i>= limit; i--){
			queue[i]=0;
		}
	}else {
		printf ("queue overflow ! \n");
	}
}

void output_elemen(){
	if (limit==0){
		printf("queue empty!\n");
		
	}else{
		printf("outputkan elemen queue = %d", queue[i=0]);
		
		for (i=0; i<max-1; i++){
			queue[i]=queue[i-1];
		}
		queue[max-1]=0;
		limit--;
		push--;
	}
	
	
}

void cetak_queue(){
		if (limit==0){
			printf("queue kosong \n");
		}else {
			for (i=0; i<max-1; i++);
			printf ("%d", queue[i]);
		}
		printf ('\n');
}
	
	
int main () {
		int pilihan;
		
		while (1){
			
			printf("\n input elemen");
			printf("\n output elemen");
			printf("\n tampilkan");
			printf("\n exit");
			
			printf (" \n masukkann menu pilihan :"); scanf ("%d", &pilihan);
			
			
			switch(pilihan){
				case 1 :{
					input_elemen();
					break;
				}
				
				case 2 :{
					output_elemen();
					break;
				}
				
				case 3 :{
					cetak_queue();
					break;
				}
				
				case 4 : {
					printf ("terimakasih untuk inputnya\n");
					return 0;
					break;
				}
				
				default :{
					printf("maaf menu tidak ada\n");
					break;
				}
			}
		}
	}


