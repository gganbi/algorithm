//#include <stdio.h>
//#include<string.h>
//
//
//int T;
//int k;
//char dataa[40];
//char dataaFroxy[40]; //원본데이터
//
//char caseData[500][10];
//char lastcaseData[500][10];
//int caseCnt = 1;
//
//char test[500][10] = {
//  
//  "aZZZ"
//  ,"aZZZ"
//  ,"aOCP"
//  ,"aSF6"
//  ,"aD92"
//  ,"aLA4"
//  ,"aAAA"
//};
//
//void stringSort() {
//   
//    for (int i = 1; i <= caseCnt; i++) {
//        caseData[i][0] = 'a';
//    }
//
//    for (int i = 1; i <= caseCnt - 2; i++) {
//        for (int j = i + 1; j <= caseCnt - 1; j++) {
//  
//            char temp[10];
//            // printf("ddd %c %d\n",caseData[i][1],caseCnt );
//            if (strcmp(caseData[i], caseData[j]) > 0) {
//              //  printf("asfdsfdd\n");
//                strcpy_s(temp, caseData[i]);
//                strcpy_s(caseData[i], caseData[j]);
//                strcpy_s(caseData[j], temp);
//            }
//        }
//    }
//}
//
//
//void findThree() {
//
//
//
//    for (int i = 1; i <= 6; i++) {
//        for (int j = 3 * i - 2; j <= 3 * i; j++) {
//            caseData[caseCnt][j - (i - 1) * 3] = dataa[j];
//       //     printf(" %c", caseData[caseCnt][j - (i - 1) * 3]);
//        }
//        caseCnt++;
//     //   printf(", ");
//    }
//
//  //  printf("%d \n", caseCnt);
//
//}
//
//
//int main() {
//
//    //Please Enter Your Code Here
//
//    scanf_s("%d",&T);
//
//    for (int i = 1; i <= T; i++) {
//        scanf_s("%d", &k);
//        for (int i = 1; i <= 18; i++) {
//            scanf_s(" %c", &dataa[i]);
//            dataaFroxy[i] = dataa[i];
//        }
//        findThree(); //맨처음케이스일때해주고
//      //  printf("\n");
//
//
//
//        //시계방향일때 해줌
//        for (int ii = 1; ii <= 17; ii++) {
//            int last = dataa[18];
//            for (int i = 17; i >= 1; i--) {
//                dataa[i + 1] = dataa[i];
//            }
//            dataa[1] = last;
//
//            /*   for (int iii = 1; iii <= 18; iii++) {
//                   printf("%c ", dataa[iii]);
//               }printf("\n");*/
//            findThree();
//            // printf("\n");
//        }
//
//
//        //   printf("이제부터 반시계\n");
//         //  본 데이터 복구
//        for (int i = 1; i <= 18; i++) {
//            dataa[i] = dataaFroxy[i];
//        }
//
//        //반시계방향일때 해줌
//        for (int ii = 1; ii <= 17; ii++) {
//            int first = dataa[1];
//            for (int i = 2; i <= 18; i++) {
//                dataa[i - 1] = dataa[i];
//            }
//            dataa[18] = first;
//            /*    for(int iii=1;iii<=18;iii++){
//                 printf("%c ",dataa[iii]);
//                }printf("\n");*/
//            findThree();
//            //  printf("\n");
//        }
//
//
//        stringSort();
//
//
//        /* printf("sssssssss %d\n", caseCnt);
//         for (int i = 1; i <= caseCnt - 1; i++) {
//             for (int j = 1; j <= 3; j++) {
//                 printf("%c ", caseData[i][j]);
//             }
//             printf(" , ");
//             if (i % 6 == 0) {
//                 printf("\n");
//             }
//
//         }
//
//         printf("이제부터 중복제거로직\n");*/
//        strcpy_s(lastcaseData[1], caseData[1]);
//
//        int cnttt = 2;
//        for (int i = 1; i <= caseCnt - 2; i++) {
//            if (strcmp(caseData[i], caseData[i + 1]) != 0) {
//                strcpy_s(lastcaseData[cnttt++], caseData[i + 1]);
//            }
//        }
//
//        //printf("dddddddd %d\n", cnttt);
//        //for (int i = 1; i <= cnttt - 1; i++) {
//        //    for (int j = 1; j <= 3; j++) {
//        //        printf("%c ", lastcaseData[i][j]);
//        //    }
//        //    printf(" , ");
//        //    if (i % 6 == 0) {
//        //        printf("\n");
//        //    }
//
//        //}
//       /* printf("\n");
//
//
//        printf("진법표현하여 최종 답 냈음\n");
//        for (int j = 1; j <= 3; j++) {
//            printf("%c ", lastcaseData[k][j]);
//        }
//
//        for (int j = 1; j <= 3; j++) {
//            printf("%d ", lastcaseData[k][j]-'A'+10);
//        }*/
//        int sum = (lastcaseData[k][1] - 'A' + 10) * 32 * 32 + (lastcaseData[k][2] - 'A' + 10) * 32 + (lastcaseData[k][3] - 'A' + 10);
//        /*  printf("\n%d", sum);
//
//
//          printf("좌 우 돌면서 최소회전 따져주기\n");*/
//          //  본 데이터 복구
//        for (int i = 1; i <= 18; i++) {
//            dataa[i] = dataaFroxy[i];
//        }
//        /*  for (int i = 1; i <= 18; i++) {
//              printf("%c ", dataa[i]);
//          }*/
//
//
//        int cnt1 = 0;
//
//        //시계방향일때 해줌
//        for (int ii = 1; ii <= 17; ii++) {
//            cnt1++;
//            char temp[1][10];
//            int last = dataa[18];
//            for (int i = 17; i >= 1; i--) {
//                dataa[i + 1] = dataa[i];
//            }
//            dataa[1] = last;
//            temp[0][0] = 'a';
//            temp[0][1] = dataa[1];
//            temp[0][2] = dataa[2];
//            temp[0][3] = dataa[3];
//
//            if ((dataa[1] == lastcaseData[k][1]) && (dataa[2] == lastcaseData[k][2]) && (dataa[3] == lastcaseData[k][3])) {
//                //  cnt2 = ii;
//             //   printf(" cnt1  %d !!!!!!!!!!!!!!\n", cnt1);
//                break;
//            }
//
//
//
//        }
//
//
//        //  본 데이터 복구
//        for (int i = 1; i <= 18; i++) {
//            dataa[i] = dataaFroxy[i];
//        }
//
//
//        int cnt2 = 0;
//
//        //반시계방향일때 해줌
//        for (int ii = 1; ii <= 17; ii++) {
//            cnt2++;
//            char temp[1][10];
//            int first = dataa[1];
//            for (int i = 2; i <= 18; i++) {
//                dataa[i - 1] = dataa[i];
//            }
//            dataa[18] = first;
//            temp[0][0] = 'a';
//            temp[0][1] = dataa[1];
//            temp[0][2] = dataa[2];
//            temp[0][3] = dataa[3];
//
//            /*   printf("\n");
//               printf(" temp   : ");
//               for (int i = 0; i <= 3; i++) {
//                   printf("  %c ", temp[0][i]);
//               }
//
//
//               printf(" lastcaseData   : ");
//               for (int i = 0; i <= 3; i++) {
//                   printf("  %c ", lastcaseData[k][i]);
//               }
//               printf("\n");*/
//
//            if ((dataa[1] == lastcaseData[k][1]) && (dataa[2] == lastcaseData[k][2]) && (dataa[3] == lastcaseData[k][3])) {
//                //  cnt2 = ii;
//             //   printf(" cnt2  %d !!!!!!!!!!!!!!\n", cnt2);
//                break;
//            }
//
//        }
//
//
//
//        if (cnt1 >= cnt2) {
//            printf("#%d %d ",T, cnt2);
//        }
//        else {
//            printf("#%d %d ",T, cnt1);
//        }
//        //  printf(" last : %d %d", cnt1, cnt2);
//
//        int summ = (lastcaseData[k][1] - 'A' + 10) * 32 * 32 + (lastcaseData[k][2] - 'A' + 10) * 32 + (lastcaseData[k][3] - 'A' + 10);
//        printf("%d\n", summ);
//
//
//
//
//        //char dataa[40];
//        //char dataaFroxy[40]; //원본데이터
//
//        //char caseData[500][10];
//        //char lastcaseData[500][10];
//        //int caseCnt = 1;
//
//        for (int i = 0; i < 40; i++) {
//            dataa[i] = '\0';
//            dataaFroxy[i] = '\0';
//        }
//
//        for (int i = 0; i < 500; i++) {
//            for (int j = 0; j < 10; j++) {
//                caseData[i][j] = '\0';
//                lastcaseData[i][j] = '\0';
//                caseCnt = 1;
//            }
//        }
//     
//
//    
//    }
//
//   
//  
//
//
//
//    return 0;
//}