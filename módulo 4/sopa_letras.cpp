void proc(char pal[],char sopa[][N],int i, int j,int d){
  int m=0,i0=i,j0=j;
  while(i>=0 && i<N && j>=0 && j<N && pal[m]==sopa[i][j]){
    i+=dy[d];
    j+=dx[d];
    m++;
  }
  if(!pal[m])
    cout "Linha " << i << "Coluna "<< j << d << endl;
}


void procura(char pal[],char sopa[][N],int d){
  int i,j;
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      proc(pal,sopa,i,j,d);
}