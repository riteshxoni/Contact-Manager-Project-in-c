int getsn()
{
	int n,size;
	FILE *fp;
	fp=fopen("info.dat","rb");
	size=sizeof(cont);
	fseek(fp,-size,SEEK_END);
	fread(&cont,sizeof(cont),1,fp);
	n=cont.sno;
	fclose(fp);
	n++;
	return n;
}