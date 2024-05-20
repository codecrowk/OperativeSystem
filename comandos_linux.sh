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

## 10- Computer gathered
lshw -short > board/inv.txt

## 11- Check active processes
ps aux > procesos.txt
mv procesos.txt SO

## 7- current machine
# Keep file here because is parent directory
(hostname & who & whoami & uname -a) > nombre.txt

## 9- Directoriy tree
tree -a / > SO/carpetas.txt