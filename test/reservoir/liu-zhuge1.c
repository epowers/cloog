/* Generated from ../../../git/cloog/test/./reservoir/liu-zhuge1.cloog by CLooG 0.14.0-136-gb91ef26 gmp bits in 0.11s. */
if ((M >= 0) && (N >= 0)) {
  for (c2=-4;c2<=min(-1,3*M+N-4);c2++) {
    for (c4=max(0,c2-3*M+4);c4<=min(N,c2+4);c4++) {
      if ((c2+2*c4+1)%3 == 0) {
        S1((c2-c4+4)/3,c4) ;
      }
    }
  }
  if (M <= 1) {
    for (c2=0;c2<=3*M+N-4;c2++) {
      for (c4=max(0,c2-3*M);c4<=c2;c4++) {
        if ((c2+2*c4)%3 == 0) {
          S2((c2-c4)/3,c4) ;
        }
      }
      for (c4=c2-3*M+4;c4<=min(N,c2+4);c4++) {
        if ((c2+2*c4+1)%3 == 0) {
          S1((c2-c4+4)/3,c4) ;
        }
      }
      for (c4=max(0,c2-3*M);c4<=c2;c4++) {
        if ((c2+2*c4)%3 == 0) {
          S3((c2-c4)/3,c4) ;
        }
      }
    }
  }
  for (c2=0;c2<=min(3*M-4,N-1);c2++) {
    for (c4=0;c4<=c2;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S2((c2-c4)/3,c4) ;
      }
      if ((c2+2*c4+1)%3 == 0) {
        S1((c2-c4+4)/3,c4) ;
      }
    }
    for (c4=c2+1;c4<=min(N,c2+4);c4++) {
      if ((c2+2*c4+1)%3 == 0) {
        S1((c2-c4+4)/3,c4) ;
      }
    }
    for (c4=0;c4<=c2;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S3((c2-c4)/3,c4) ;
      }
    }
  }
  for (c2=N;c2<=3*M-4;c2++) {
    for (c4=0;c4<=N;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S2((c2-c4)/3,c4) ;
      }
      if ((c2+2*c4+1)%3 == 0) {
        S1((c2-c4+4)/3,c4) ;
      }
    }
    for (c4=0;c4<=N;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S3((c2-c4)/3,c4) ;
      }
    }
  }
  if (M >= 2) {
    for (c2=3*M-3;c2<=N-1;c2++) {
      for (c4=max(0,c2-3*M);c4<=c2-3*M+3;c4++) {
        if ((c2+2*c4)%3 == 0) {
          S2((c2-c4)/3,c4) ;
        }
      }
      for (c4=c2-3*M+4;c4<=c2;c4++) {
        if ((c2+2*c4)%3 == 0) {
          S2((c2-c4)/3,c4) ;
        }
        if ((c2+2*c4+1)%3 == 0) {
          S1((c2-c4+4)/3,c4) ;
        }
      }
      for (c4=c2+1;c4<=min(N,c2+4);c4++) {
        if ((c2+2*c4+1)%3 == 0) {
          S1((c2-c4+4)/3,c4) ;
        }
      }
      for (c4=max(0,c2-3*M);c4<=c2;c4++) {
        if ((c2+2*c4)%3 == 0) {
          S3((c2-c4)/3,c4) ;
        }
      }
    }
  }
  for (c2=max(N,3*M-3);c2<=3*M+N-4;c2++) {
    for (c4=max(0,c2-3*M);c4<=c2-3*M+3;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S2((c2-c4)/3,c4) ;
      }
    }
    for (c4=c2-3*M+4;c4<=N;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S2((c2-c4)/3,c4) ;
      }
      if ((c2+2*c4+1)%3 == 0) {
        S1((c2-c4+4)/3,c4) ;
      }
    }
    for (c4=max(0,c2-3*M);c4<=N;c4++) {
      if ((c2+2*c4)%3 == 0) {
        S3((c2-c4)/3,c4) ;
      }
    }
  }
  for (c2=max(0,3*M+N-3);c2<=3*M+N;c2++) {
    for (c4=max(0,c2-3*M);c4<=min(N,c2);c4++) {
      if ((c2+2*c4)%3 == 0) {
        S2((c2-c4)/3,c4) ;
      }
    }
    for (c4=max(0,c2-3*M);c4<=min(N,c2);c4++) {
      if ((c2+2*c4)%3 == 0) {
        S3((c2-c4)/3,c4) ;
      }
    }
  }
}