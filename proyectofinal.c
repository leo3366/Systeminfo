#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/*if(argc !=3 || (strcmp(argv[1],"-s")!=0 && strcmp(argv[1],"-segundos")!=0)){
		cerr << "Uso: \n" <<argv[0] <<" -s [tiempo en seg] o --segundos [tiempo en seg]" <<endl
		<<"Ejemplo:" << endl << argv[0] <<" -s 10" <<endl;
		return 1;
	}*/
	int todos = 0;
	if(argc !=2){
		cerr << "Debe ingresar un argumento"<<endl;
		cout <<"opciones:"<<endl<<endl;
		cout <<"1.- "<<"--kernel-version "<<endl;
		cout <<"2.- "<<"--running-processes "<<endl;
		cout <<"3.- "<<"--mem-total-free "<<endl;
		cout <<"4.- "<<"--mem-total "<<endl;
		cout <<"5.- "<<"--mem-swap "<<endl;
		cout <<"6.- "<<"--mem-swap-free "<<endl;
		cout <<"7.- "<<"--disk-list "<<endl;
		cout <<"8.- "<<"--partitions-list "<<endl;
		cout <<"9.- "<<"--net-list "<<endl;
		cout <<"10.- "<<"--net-list-ip "<<endl;
		cout <<"11.- "<<"--disk-space "<<endl;
		cout <<"12.- "<<"--current-user "<<endl;
		cout <<"13.- "<<"--date-time "<<endl;
		cout <<"14.- "<<"--uptime "<<endl;
		cout <<"15.- "<<"--all "<<endl;
		return 1;
	}
	if(strcmp(argv[1],"--all")==0)
		todos = 1;

	// --kernel-version -------------------------------------------------------
	if(strcmp(argv[1],"--kernel-version")== 0 || todos == 1){		
		string kernel_String;

		system("uname -r >kernel");
		ifstream kernel("kernel");
			if(kernel.is_open())		
				getline(kernel,kernel_String);
		kernel.close();	
		remove("kernel");
		if (todos == 1)
			cout <<endl<<"Version del kernel:"<<endl;		
		cout<< kernel_String <<endl;
	}

	// --running-processes ----------------------------------------------------	
	if(strcmp(argv[1],"--running-processes")== 0 || todos == 1){
		int procexec;

		system("ps aux --sort -rss | awk '{if(NR>1)print $6}' >LISTPROC"); //lista  consumo de memoria por procesos en ejecucion
		system("cat LISTPROC | wc -l >PROCEXEC");//cantidad de procesos en ejecución

		ifstream Fprocexec("PROCEXEC");
		if(Fprocexec.is_open())
			Fprocexec>>procexec;
		Fprocexec.close();
		remove("PROCEXEC");
		remove("LISTPROC");
		if (todos == 1)
			cout<<endl<<"Cantidad de procesos en ejecución:"<<endl;
		cout << procexec <<endl;
	}

	// --mem-total-free
	if(strcmp(argv[1],"--mem-total-free") == 0 || todos == 1){
		float memfree;

		system("cat /proc/meminfo | grep MemFree | awk '{print $2;}'>MEMFREE");
		ifstream Fmemfree("MEMFREE");//memoria libre
		if(Fmemfree.is_open())			
			Fmemfree>>memfree;		
		Fmemfree.close();
		remove("MEMFREE");
		if (todos == 1)
			cout<<endl<<"Memoria Libre:"<<endl;
		cout<<memfree/1024/1024<< " GB"<<endl;	
	}

	// --mem-total
	if(strcmp(argv[1],"--mem-total") == 0 || todos == 1){
		float memtot;

		system("cat /proc/meminfo | grep MemTotal | awk '{print $2;}'>MEMTOT");
		ifstream Fmemtot("MEMTOT");//total de memoria
		if(Fmemtot.is_open())		
			Fmemtot>>memtot;		
		Fmemtot.close();
		remove("MEMTOT");
		if (todos == 1)
			cout<<endl<<"Memoria Total:"<<endl;
		cout<<memtot/1024/1024<< " GB"<<endl;
	}

	// --mem-swap
	if(strcmp(argv[1],"--mem-swap") == 0 || todos == 1){
		float swaptot;

		system("cat /proc/meminfo | grep SwapTotal| awk '{print $2;}'>SWAPTOT");
		ifstream Fswaptot("SWAPTOT");//total de swap
		if(Fswaptot.is_open())		
			Fswaptot>>swaptot;		
		Fswaptot.close();
		remove("SWAPTOT");
		if (todos == 1)
			cout<<endl<<"Total Swap:"<<endl;
		cout<<swaptot/1024/1024<< " GB"<<endl;
	}

	// --mem-swap-free
	if(strcmp(argv[1],"--mem-swap-free")== 0 || todos == 1){
		float swapfree;

		system("cat /proc/meminfo | grep SwapFree| awk '{print $2;}'>SWAPFREE");
		ifstream Fswapfree("SWAPFREE");//swap libre
		if(Fswapfree.is_open())		
			Fswapfree>>swapfree;		
		Fswapfree.close();
		remove("SWAPFREE");
		if (todos == 1)
			cout<<endl<<"Swap libre:"<<endl;
		cout<<swapfree/1024/1024<< " GB"<<endl;
	}

	// --disk-list
	if(strcmp(argv[1],"--disk-list")==0 || todos == 1){
		string disco;

		system("ls /sys/block/ | grep sd | awk '{print $1;}'>DISCOS");
		ifstream Fdiscos("DISCOS");
		if(Fdiscos.is_open())		
			if (todos == 1)
				cout<<endl<<"Lista de discos:"<<endl;
			getline(Fdiscos,disco);		
			while(!Fdiscos.eof()){
				cout<< disco <<" ";
				getline(Fdiscos,disco);	
			}
				cout<<endl;
		Fdiscos.close();
		remove("DISCOS");	
	}

	// --partitions-list
	if(strcmp(argv[1],"--partitions-list")==0 || todos == 1){
		string particion;

		//system("cat /proc/partitions | awk '{if(NR>2)print $4;}'>PARTICIONES");
		system("lsblk | grep sd | awk '{print $1;}'>PARTICIONES");
		ifstream Fparticiones("PARTICIONES");
		if(Fparticiones.is_open())			
			if (todos == 1)
				cout<<endl<<"Lista de particiones:"<<endl;
			getline(Fparticiones,particion);		
			while(!Fparticiones.eof()){
				cout<< particion <<endl;
				getline(Fparticiones,particion);	
			}
				//cout<<endl;
		Fparticiones.close();
		remove("PARTICIONES");	
	}

	// --net-list
	if(strcmp(argv[1],"--net-list")==0 || todos == 1){
		string netdev;
		system("ls -l /sys/class/net | awk '{if(NR>1)print $9;}'>NETDEV");
		ifstream Fnetdev("NETDEV");
		if(Fnetdev.is_open())		
			if (todos == 1)
				cout<<endl<<"Dispositivos de red:"<<endl;	
			getline(Fnetdev,netdev);		
			while(!Fnetdev.eof()){
				cout<< netdev <<endl;
				getline(Fnetdev,netdev);	
			}
				//cout<<endl;
		Fnetdev.close();
		remove("NETDEV");	
	}

	// --net-list-ip
	if(strcmp(argv[1],"--net-list-ip")==0 || todos == 1){
		string ips;
		system("ip -4 -o addr | awk '{print $2 \" \"$4;}'>IPS");
		ifstream Fips("IPS");
		if(Fips.is_open()){
			if (todos == 1)
				cout<<endl<<"Ips asignadas:"<<endl;
			getline(Fips,ips);
			while(!Fips.eof()){
				cout<<ips<<endl;
				getline(Fips,ips);
			}
			Fips.close();
			remove("IPS");
		}
	}

	// --disk-space
	if(strcmp(argv[1],"--disk-space")==0 || todos == 1){
		
		string diskspace;			
		system("df -aTh | grep /dev/sd | awk '{print $1\"  \" $6;}'>DISKSPACE");
		ifstream Fdiskspace("DISKSPACE");
		if(Fdiskspace.is_open())		
			if (todos == 1)
				cout<<endl<<"Uso del disco:"<<endl;	
			getline(Fdiskspace,diskspace);		
			while(!Fdiskspace.eof()){
				cout<< diskspace <<endl;
				getline(Fdiskspace,diskspace);	
			}
				//cout<<endl;
		Fdiskspace.close();
		remove("DISKSPACE");
	}

	// --current-user
	if(strcmp(argv[1],"--current-user")==0  || todos == 1){
		string user;
		system("whoami>USER");
		ifstream Fuser("USER");
		if(Fuser.is_open()){
			getline(Fuser,user);
			if (todos == 1)
				cout<<endl<<"Usuario actual:"<<endl;			
			cout<<user<<endl;				
			Fuser.close();
			remove("USER");
		}
	}

	// --date-time
	if(strcmp(argv[1],"--date-time")==0 || todos == 1){		
		string date;

		system("date +'%m/%d/%Y %T'>DATE");
		ifstream Fdate("DATE");
		if(Fdate.is_open()){
			getline(Fdate,date);	
			if (todos == 1)
				cout<<endl<<"Fecha y hora:"<<endl;		
			cout<<date<<endl;				
			Fdate.close();
			remove("DATE");
		}
	}
		
	// --uptime
	if(strcmp(argv[1],"--uptime")==0 || todos == 1){
		string uptime;

		system("uptime -p | awk '{print $2 $3 $4 $5 $6 $7;}'>UPTIME");
		ifstream Fuptime("UPTIME");
		if(Fuptime.is_open()){
			getline(Fuptime,uptime);	
			if (todos == 1)
				cout<<endl<<"Tiempo en ejecución del sistema:"<<endl;		
			cout<<uptime<<endl;			
			Fuptime.close();
			remove("UPTIME");
		}
	}

	// --all


	return 0;
}

//falta definir un indice de opciones si la opcion ingresada es incorrecta
//cada 5 segundos
