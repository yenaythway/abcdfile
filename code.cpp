#include <iostream>
#include "time.h"
#include "fstream"
using namespace std;
int main() {
    char firstarr[1000];
    int asize=0;
    int bsize=0;
    int csize=0;
    int dsize=0;
    int esize=0;
    int fsize=0;
    int gsize=0;
    int hsize=0;
    int isize=0;
    int jsize=0;
    int ksize=0;
    int lsize=0;
    int msize=0;
    int nsize=0;
    int osize=0;
    int psize=0;
    int qsize=0;
    int rsize=0;
    int ssize=0;
    int tsize=0;
    int usize=0;
    int vsize=0;
    int wsize=0;
    int xsize=0;
    int ysize=0;
    int zsize=0;
    char d[1000],e[1000],f[1000],g[1000],h[1000],i[1000],j[1000],k[1000],l[1000],m[1000],n[1000],o[1000],p[1000],q[1000],r[1000],s[1000],t[1000],u[1000],v[1000],w[1000],x[1000],y[1000],z[1000];
    srand(time(NULL));
    for (int i = 0; i < 1000; i++) {
        int a = (rand() % 26) + 97;
        firstarr[i] = char(a);
    }
    for (int i = 0; i < 1000; i++) {
        if (firstarr[i] == 'a') {
            asize++;
        }
        if (firstarr[i] == 'b') {
            bsize++;
        }
        if (firstarr[i] == 'c') {
            csize++;
        }
        if (firstarr[i] == 'd') {
            dsize++;
        }
        if (firstarr[i] == 'e') {
            esize++;
        }
        if (firstarr[i] == 'f') {
            fsize++;
        }
        if (firstarr[i] == 'g') {
            gsize++;
        }
        if (firstarr[i] == 'h') {
            hsize++;
        }if (firstarr[i] == 'i') {
            isize++;
        }
        if (firstarr[i] == 'j') {
            jsize++;
        }
        if (firstarr[i] == 'k') {
            ksize++;
        }
        if (firstarr[i] == 'l') {
            lsize++;
        }
        if (firstarr[i] == 'm') {
            msize++;
        }
        if (firstarr[i] == 'n') {
            nsize++;
        }
        if (firstarr[i] == 'o') {
            osize++;
        }
        if (firstarr[i] == 'p') {
            psize++;
        }
        if (firstarr[i] == 'q') {
            qsize++;
        }
        if (firstarr[i] == 'r') {
            rsize++;
        }
        if (firstarr[i] == 's') {
            ssize++;
        }
        if (firstarr[i] == 't') {
            tsize++;
        }
        if (firstarr[i] == 'u') {
            usize++;
        }
        if (firstarr[i] == 'v') {
            vsize++;
        }
        if (firstarr[i] == 'w') {
            wsize++;
        }
        if (firstarr[i] == 'x') {
            xsize++;
        }
        if (firstarr[i] == 'y') {
            ysize++;
        }
        if (firstarr[i] == 'z') {
            zsize++;
        }
    }
    char a[1000];
    char b[1000];
    char c[1000];
    int nu=0;
    ofstream outfile("charsorting.txt");
    if (!outfile.is_open()) {
        cout << "file cannot create";
    } else {
        outfile<<"a="<<asize<<endl<<"b="<<bsize<<endl<<"c="<<csize<<endl<<"d="<<dsize<<endl<<"e="<<esize<<endl<<"f="<<fsize<<endl<<"g="<<gsize<<endl<<"h="<<hsize<<endl<<"i="<<isize<<endl<<"j="<<jsize<<endl<<"k="<<ksize<<endl<<"l="<<lsize<<endl<<"m="<<msize<<endl<<"n="<<nsize<<endl<<"o="<<osize<<endl<<"p="<<psize<<endl<<"q="<<qsize<<endl<<"r="<<rsize<<endl<<"s="<<ssize<<endl<<"t="<<tsize<<endl<<"u="<<usize<<endl<<"v="<<vsize<<endl<<"w="<<wsize<<endl<<"x="<<xsize<<endl<<"y="<<ysize<<endl<<"z="<<zsize<<endl;
        for (int i = 0; i < 26; i++) {
            outfile << char(65 + i)<<"    " ;
        }
        outfile<<endl;
    }
    outfile.close();
    while (nu<1000) {
        if (asize<=0){
            a[nu]=' ';
        } else{
            a[nu]='a';
        }
        if (bsize<=0){
            b[nu]=' ';
        } else{
            b[nu]='b';
        }
        if (csize<=0){
            c[nu]=' ';
        } else{
            c[nu]='c';
        }
        if (dsize<=0){
            d[nu]=' ';
        } else{
            d[nu]='d';
        }
        if (esize<=0){
            e[nu]=' ';
        } else{
            e[nu]='e';
        }
        if (fsize<=0){
            f[nu]=' ';
        } else{
            f[nu]='f';
        }
        if (gsize<=0){
            g[nu]=' ';
        } else{
            g[nu]='g';
        }
        if (hsize<=0){
            h[nu]=' ';
        } else{
            h[nu]='h';
        }
        if (isize<=0){
            i[nu]=' ';
        } else{
            i[nu]='i';
        }
        if (jsize<=0){
            j[nu]=' ';
        } else{
            j[nu]='j';
        }
        if (ksize<=0){
            k[nu]=' ';
        } else{
            k[nu]='k';
        }
        if (lsize<=0){
            l[nu]=' ';
        } else{
            l[nu]='l';
        }
        if (msize<=0){
            m[nu]=' ';
        } else{
            m[nu]='m';
        }
        if (nsize<=0){
            n[nu]=' ';
        } else{
            n[nu]='n';
        }
        if (osize<=0){
            o[nu]=' ';
        } else{
            o[nu]='o';
        }
        if (psize<=0){
            p[nu]=' ';
        } else{
            p[nu]='p';
        }
        if (qsize<=0){
            q[nu]=' ';
        } else{
            q[nu]='q';
        }
        if (rsize<=0){
            r[nu]=' ';
        } else{
            r[nu]='r';
        }
        if (ssize<=0){
            s[nu]=' ';
        } else{
            s[nu]='s';
        }
        if (tsize<=0){
            t[nu]=' ';
        } else{
            t[nu]='t';
        }
        if (usize<=0){
            u[nu]=' ';
        } else{
            u[nu]='u';
        }
        if (vsize<=0){
            v[nu]=' ';
        } else{
            v[nu]='v';
        }
        if (wsize<=0){
            w[nu]=' ';
        } else{
            w[nu]='w';
        }
        if (xsize<=0){
            x[nu]=' ';
        } else{
            x[nu]='x';
        }
        if (ysize<=0){
            y[nu]=' ';
        } else{
            y[nu]='y';
        }
        if (zsize<=0){
            z[nu]=' ';
        } else{
            z[nu]='z';
        }
        nu++;
        --asize;
        --bsize;
        --csize;
        --dsize;
        --esize;
        --fsize;
        --gsize;
        --hsize;
        --isize;
        --jsize;
        --ksize;
        --lsize;
        --msize;
        --nsize;
        --osize;
        --psize;
        --qsize;
        --rsize;
        --ssize;
        --tsize;
        --usize;
        --vsize;
        --wsize;
        --xsize;
        --ysize;
        --zsize;
    }
    char testarr[26];
    for(int ii=0;ii<1000;ii++) {
        testarr[0] = a[ii];
        testarr[1] = b[ii];
        testarr[2] = c[ii];
        testarr[3] = d[ii];
        testarr[4] = e[ii];
        testarr[5] = f[ii];
        testarr[6] = g[ii];
        testarr[7] = h[ii];
        testarr[8] = i[ii];
        testarr[9] = j[ii];
        testarr[10] = k[ii];
        testarr[11] = l[ii];
        testarr[12] = m[ii];
        testarr[13] = n[ii];
        testarr[14] = o[ii];
        testarr[15] = p[ii];
        testarr[16] = q[ii];
        testarr[17] = r[ii];
        testarr[18] = s[ii];
        testarr[19] = t[ii];
        testarr[20] = u[ii];
        testarr[21] = v[ii];
        testarr[22] = w[ii];
        testarr[23] = x[ii];
        testarr[24] = y[ii];
        testarr[25] = z[ii];
        //cout<<testarr[0]<<testarr[1]<<testarr[2]<<testarr[3]<<testarr[4]<<endl;
        ofstream outfile("charsorting.txt",ios::app);
        if (!outfile.is_open()) {
            cout << "file cannot create";
        } else {
            outfile <<testarr[0]<<"    "<<testarr[1]<<"    "<<testarr[2]<<"    "<<testarr[3]<<"    "<<testarr[4]<<"    "<<testarr[5]<<"    "<<testarr[6]<<"    "<<testarr[7]<<"    "<<testarr[8]<<"    "<<testarr[9]<<"    "<<testarr[10]<<"    "<<testarr[11]<<"    "<<testarr[12]<<"    "<<testarr[13]<<"    "<<testarr[14]<<"    "<<testarr[15]<<"    "<<testarr[16]<<"    "<<testarr[17]<<"    "<<testarr[18]<<"    "<<testarr[19]<<"    "<<testarr[20]<<"    "<<testarr[21]<<"    "<<testarr[22]<<"    "<<testarr[23]<<"    "<<testarr[24]<<"    "<<testarr[25]<<endl;
        }
        outfile.close();
    }
    }
