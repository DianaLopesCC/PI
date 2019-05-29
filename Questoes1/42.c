void transposta (int N, float m [N][N]){
    int i,j;
    int c[N][N];
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            c[j][i]=m[i][j];
        }
        }
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            m[i][j]=c[i][j];
        }
    }
}