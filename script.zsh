##---> Create root directory
mkdir pc
cd pc

###--- Folder structure ---###
directories=("SO" "board" "NIC" "memoria" "disco");

for dir in "${directories[@]}" 
do
  mkdir ${dir}
done

###--- Script ---###

## 1- Add time
echo "$(date '+%T') $(date '+%D')" > board/hora.txt

## 2- List current sessions
w > SO/sesiones.txt 

## 3- Get ip address
ip addr | grep "inet " > NIC/dirip.txt

## 4- Get network information
echo "Getting network stadistics"
netstat -s > NIC/conexion.txt

## 5- Memory information
free > memoria/mem.txt

## 6- Disk information
df -h > disco/dd.txt

## 8- List directories
ls -la > SO/dir_w.txt

## 9- Directoriy tree
tree -a / > so/carpetas.txt

## 10- Computer gathered
lshw -short > board/inv.txt

## 11- Check active processes
ps aux > procesos.txt
mv procesos.txt SO

## 7- current machine
# Keep file here because is parent directory
hostname && who && whoami && uname -a > nombre.txt

# mkdir pc
# cd pc
# mkdir board
# mkdir SO
# mkdir NIC 
# cd board
# mkdir memoria
# mkdir disco
# mkdir procesador 
# cd ../
# cp hora.txt pc 
# cp sesiones.txt pc 
# cp dirip.txt pc 
# cp conexion.txt pc 
# cp mem.txt pc 
# cp dd.txt pc 
# cp nombre.txt pc
# cp dir_w.txt pc
# cp carpetas.txt pc
# cp inv.txt pc
# cp procesos.txt pc
# cd pc/
# mv hora.txt pc/board 
# mv sesiones.txt pc/SO 
# mv dirip.txt pc/NIC 
# mv conexion.txt pc/NIC 
# mv mem.txt pc/board 
# mv dd.txt pc/board 
# mv dir_w.txt pc/SO 
# mv carpetas.txt pc/SO 
# mv inv.txt pc/board 
# mv procesos.txt pc/SO 
# cd board
