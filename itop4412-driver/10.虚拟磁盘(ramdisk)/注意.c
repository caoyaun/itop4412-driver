
���ԣ�
1. insmod ramblock.ko
2. ��ʽ����mkdosfs /dev/ramblock_disk
3. �ҽӣ�mount /dev/ramblock_disk /mnt/disk2
4. ��д�ļ���cd /mnt/disk2, vi hello.c
5. ���澵���ļ���cat /dev/ramblock_disk > ramblock.bin
6. ��pc�ϲ鿴ramblock.bin
	mount -o loop ramblock.bin /mnt						//-o loop���԰���ͨ�ļ��������豸�ҽ�
	ls /mnt

	
֪ʶ�㣺���ݵ����㷨
	1. �Դ��̵Ĳ�����read��һ��ģ�writeҲ��һ���
	2. �Դ��̵�д������������ִ�У���������sync��������������ִ��