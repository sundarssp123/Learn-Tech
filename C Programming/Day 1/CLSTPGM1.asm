 
                            <<<  JCL STATEMENTS LIST  >>>    DATE  03/29/22    TIME  02:24
 
    1     //CMPLASM JOB (0010,,1,1),'8582SR00394AV02000',NOTIFY=TSSUSER,          JOB 2589
          //             MSGLEVEL=(1,1),TIME=(5),CLASS=B,MSGCLASS=Y               00020093
          //COMP    PROC MEM=ASMTEM,                                              00030037
          //        SRC='TISP.C.PRAC',                                            00040066
          //        ASMMAC1='TISP.MSP.ASMMAC',                                    00160060
          //        ASMMAC2='TISP.MSP.KGTMAC',                                    00170059
          //        ASMMAC3='TISP.MSP.SYSMSP20.MODGEN',                           00180000
          //        ASMMAC4='TISP.MSP.SYSMSP20.ASMLIB',                           00190000
          //        ASMMAC5='TISP.MSP.SYSMSP20.MACLIB',                           00200000
          //        ASMMAC7='SYS1.MACLIB',                                        00201062
          //        ASMMAC8='PP1.FCC.MACLIB',                                     00202063
          //        ASMMAC6='SYS1.C.CLIB'                                         00210059
          //******************************************************************    00440000
          //*    ASSEMBLE STEP                                                    00450000
          //******************************************************************    00460000
          //ASM      EXEC PGM=JNP000,REGION=4096K,                                00470062
          //         PARM='OBJECT,ALIGN,NODECK'                                   00480062
          //*YSLIB    DD DSN=SYS1.MACLIB,DISP=SHR                                 00490019
          //SYSLIB    DD DSN=&ASMMAC1,DISP=SHR                                    00491019
          //          DD DSN=&ASMMAC2,DISP=SHR                                    00500059
          //          DD DSN=&ASMMAC3,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00510029
          //          DD DSN=&ASMMAC4,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00520029
          //          DD DSN=&ASMMAC5,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00530029
          //          DD DSN=&ASMMAC6,DISP=SHR                                    00540000
          //          DD DSN=&ASMMAC7,DISP=SHR                                    00550062
          //          DD DSN=&ASMMAC8,DISP=SHR                                    00550163
          //SYSPRINT  DD SYSOUT=*                                                 00551074
          //*SYSPRINT  DD DSN=TISP.MSP.SAMP.CMPLIST(&MEM),DISP=SHR                00560074
          //SYSGO     DD DSN=&&OBJSET,DISP=(NEW,PASS),UNIT=SYSDA,                 00570000
          //          SPACE=(TRK,(5,5),RLSE)                                      00580034
          //SYSIN     DD DSN=&SRC(&MEM),DISP=SHR                                  00591022
          //SYSUT1    DD UNIT=SYSDA,SPACE=(TRK,(30,10),RLSE),VOL=SER=DA89E9       00600021
          //SYSUT2    DD UNIT=SYSDA,SPACE=(TRK,(20,10),RLSE),VOL=SER=DA89E9       00610021
          //SYSUT3    DD UNIT=SYSDA,SPACE=(TRK,(20,10),RLSE),VOL=SER=DA89E9       00620021
          //******************************************************************    00630000
          //*     LINK EDIT STEP                                                  00640000
          //******************************************************************    00650000
          //LKED     EXEC PGM=JQAL,REGION=4096K,PARM=(XREF,LET,LIST,MAP,TEST),    00651022
          //             COND=(8,LT,ASM)                                          00652022
          //SYSLIN    DD DSN=&&OBJSET,DISP=(OLD,DELETE)                           00653022
          //          DD DDNAME=SYSIN                                             00654022
          //SYSLIB    DD DSN=TISP.MSP.LOAD,DISP=SHR                               00655022
          //          DD DSN=SYS1.C.CLIB,DISP=SHR                                 00656022
          //          DD DSN=SYS1.KGTLIB,DISP=SHR                                 00657022
          //SYSLMOD   DD DSN=TISP.ASM.LOAD1(&MEM),DISP=SHR                        00659022
          //SYSUT1    DD DSN=&&LDLOBJ,UNIT=SYSDA,SPACE=(1024,(50,20)),            00659122
          //           VOL=SER=DA89E9                                             00659222
          //SYSPRINT  DD SYSOUT=*                                                 00659322
          //          PEND                                                        00659422
          *****************************SUB************************************    00750077
          ***     EXEC PROCESS KGTFCINT                                           00760000
          ********************************************************************    00770000
    2     //         EXEC PROC=COMP,MEM=ASMTEM                                    00780037
    3     ++COMP    PROC MEM=ASMTEM,                                              00030037
          ++        SRC='TISP.C.PRAC',                                            00040066
          ++        ASMMAC1='TISP.MSP.ASMMAC',                                    00160060
          ++        ASMMAC2='TISP.MSP.KGTMAC',                                    00170059
          ++        ASMMAC3='TISP.MSP.SYSMSP20.MODGEN',                           00180000
          ++        ASMMAC4='TISP.MSP.SYSMSP20.ASMLIB',                           00190000
          ++        ASMMAC5='TISP.MSP.SYSMSP20.MACLIB',                           00200000
          ++        ASMMAC7='SYS1.MACLIB',                                        00201062
          ++        ASMMAC8='PP1.FCC.MACLIB',                                     00202063
          ++        ASMMAC6='SYS1.C.CLIB'                                         00210059
          ********************************************************************    00440000
          ***    ASSEMBLE STEP                                                    00450000
          ********************************************************************    00460000
    4     ++ASM      EXEC PGM=JNP000,REGION=4096K,                                00470062
          ++         PARM='OBJECT,ALIGN,NODECK'                                   00480062
          ***YSLIB    DD DSN=SYS1.MACLIB,DISP=SHR                                 00490019
    5     ++SYSLIB    DD DSN=&ASMMAC1,DISP=SHR                                    00491019
    6     ++          DD DSN=&ASMMAC2,DISP=SHR                                    00500059
    7     ++          DD DSN=&ASMMAC3,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00510029
    8     ++          DD DSN=&ASMMAC4,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00520029
    9     ++          DD DSN=&ASMMAC5,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA          00530029
   10     ++          DD DSN=&ASMMAC6,DISP=SHR                                    00540000
   11     ++          DD DSN=&ASMMAC7,DISP=SHR                                    00550062
   12     ++          DD DSN=&ASMMAC8,DISP=SHR                                    00550163
   13     ++SYSPRINT  DD SYSOUT=*                                                 00551074
   14     ***SYSPRINT  DD DSN=TISP.MSP.SAMP.CMPLIST(&MEM),DISP=SHR                00560074
   15     ++SYSGO     DD DSN=&&OBJSET,DISP=(NEW,PASS),UNIT=SYSDA,                 00570000
          ++          SPACE=(TRK,(5,5),RLSE)                                      00580034
   16     ++SYSIN     DD DSN=&SRC(&MEM),DISP=SHR                                  00591022
   17     ++SYSUT1    DD UNIT=SYSDA,SPACE=(TRK,(30,10),RLSE),VOL=SER=DA89E9       00600021
   18     ++SYSUT2    DD UNIT=SYSDA,SPACE=(TRK,(20,10),RLSE),VOL=SER=DA89E9       00610021
   19     ++SYSUT3    DD UNIT=SYSDA,SPACE=(TRK,(20,10),RLSE),VOL=SER=DA89E9       00620021
          ********************************************************************    00630000
          ***     LINK EDIT STEP                                                  00640000
          ********************************************************************    00650000
   20     ++LKED     EXEC PGM=JQAL,REGION=4096K,PARM=(XREF,LET,LIST,MAP,TEST),    00651022
          ++             COND=(8,LT,ASM)                                          00652022
   21     ++SYSLIN    DD DSN=&&OBJSET,DISP=(OLD,DELETE)                           00653022
   22     ++          DD DDNAME=SYSIN                                             00654022
   23     ++SYSLIB    DD DSN=TISP.MSP.LOAD,DISP=SHR                               00655022
   24     ++          DD DSN=SYS1.C.CLIB,DISP=SHR                                 00656022
   25     ++          DD DSN=SYS1.KGTLIB,DISP=SHR                                 00657022
   26     ++SYSLMOD   DD DSN=TISP.ASM.LOAD1(&MEM),DISP=SHR                        00659022
   27     ++SYSUT1    DD DSN=&&LDLOBJ,UNIT=SYSDA,SPACE=(1024,(50,20)),            00659122
          ++           VOL=SER=DA89E9                                             00659222
   28     ++SYSPRINT  DD SYSOUT=*                                                 00659322
 
                             <<<  SYSTEM MESSAGES LIST  >>>
 
     5     JDJ653I SUBSTITUTION JCL - ++SYSLIB    DD DSN=TISP.MSP.ASMMAC,DISP=SHR
     6     JDJ653I SUBSTITUTION JCL - ++          DD DSN=TISP.MSP.KGTMAC,DISP=SHR
     7     JDJ653I SUBSTITUTION JCL - ++          DD DSN=TISP.MSP.SYSMSP20.MODGEN,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA
     8     JDJ653I SUBSTITUTION JCL - ++          DD DSN=TISP.MSP.SYSMSP20.ASMLIB,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA
     9     JDJ653I SUBSTITUTION JCL - ++          DD DSN=TISP.MSP.SYSMSP20.MACLIB,DISP=SHR,VOL=SER=HCL001,UNIT=SYSDA
    10     JDJ653I SUBSTITUTION JCL - ++          DD DSN=SYS1.C.CLIB,DISP=SHR
    11     JDJ653I SUBSTITUTION JCL - ++          DD DSN=SYS1.MACLIB,DISP=SHR
    12     JDJ653I SUBSTITUTION JCL - ++          DD DSN=PP1.FCC.MACLIB,DISP=SHR
    14     JDJ653I SUBSTITUTION JCL - ***SYSPRINT  DD DSN=TISP.MSP.SAMP.CMPLIST(ASMTEM),DISP=SHR
    16     JDJ653I SUBSTITUTION JCL - ++SYSIN     DD DSN=TISP.C.PRAC(ASMTEM),DISP=SHR
    26     JDJ653I SUBSTITUTION JCL - ++SYSLMOD   DD DSN=TISP.ASM.LOAD1(ASMTEM),DISP=SHR
    28     JDJ686I DDNAME REFERRED TO ON DDNAME KEYWORD IN PRIOR STEP WAS NOT RESOLVED                                     ** WRN **
 KDS40613I USER(TSSUSER) LAST ACCESS DATE(2022.03.29),TIME(02:23:24)
 JDJ236I ALLOC. FOR CMPLASM ASM
 JDJ237I 0B37 ALLOCATED TO SYSLIB
 JDJ237I 0B37 ALLOCATED TO
 JDJ237I 0B37 ALLOCATED TO
 JDJ237I 0B37 ALLOCATED TO
 JDJ237I 0B37 ALLOCATED TO
 JDJ237I 0B34 ALLOCATED TO
 JDJ237I 0B34 ALLOCATED TO
 JDJ237I 0B36 ALLOCATED TO
 JDJ237I JES  ALLOCATED TO SYSPRINT
 JDJ237I 89F1 ALLOCATED TO SYSGO
 JDJ237I 0B35 ALLOCATED TO SYSIN
 JDJ237I 89E9 ALLOCATED TO SYSUT1
 JDJ237I 89E9 ALLOCATED TO SYSUT2
 JDJ237I 89E9 ALLOCATED TO SYSUT3
 JDJ142I CMPLASM ASM - STEP WAS EXECUTED - COND CODE 0000
 JDJ285I   TISP.MSP.ASMMAC                              KEPT
 JDJ285I   VOL SER NOS= HCL001.
 JDJ285I   TISP.MSP.KGTMAC                              KEPT
 JDJ285I   VOL SER NOS= HCL001.
 JDJ285I   TISP.MSP.SYSMSP20.MODGEN                     KEPT
 JDJ285I   VOL SER NOS= HCL001.
 JDJ285I   TISP.MSP.SYSMSP20.ASMLIB                     KEPT
 JDJ285I   VOL SER NOS= HCL001.
 JDJ285I   TISP.MSP.SYSMSP20.MACLIB                     KEPT
 JDJ285I   VOL SER NOS= HCL001.
 JDJ285I   SYS1.C.CLIB                                  KEPT
 JDJ285I   VOL SER NOS= MSP300.
 JDJ285I   SYS1.MACLIB                                  KEPT
 JDJ285I   VOL SER NOS= MSP300.
 JDJ285I   PP1.FCC.MACLIB                               KEPT
 JDJ285I   VOL SER NOS= MSPPP1.
 JDJ285I   JESF.JOB02589.SO0101                         SYSOUT
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.OBJSET        PASSED
 JDJ285I   VOL SER NOS= DA89F1.
 JDJ285I   TISP.C.PRAC                                  KEPT
 JDJ285I   VOL SER NOS= HCL002.
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.R0000001      DELETED
 JDJ285I   VOL SER NOS= DA89E9.
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.R0000002      DELETED
 JDJ285I   VOL SER NOS= DA89E9.
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.R0000003      DELETED
 JDJ285I   VOL SER NOS= DA89E9.
 JDJ373I STEP/ASM     / START  22088.0224
 JDJ374I STEP/ASM     / STOP   22088.0224 CPU      0MIN 00.02SEC  SRB      0MIN 00.00SEC VIRT  4096K ERGN     128K
 JDJ236I ALLOC. FOR CMPLASM LKED
 JDJ237I 89F1 ALLOCATED TO SYSLIN
 JDJ237I DMY  ALLOCATED TO
 JDJ237I 0B36 ALLOCATED TO SYSLIB
 JDJ237I 0B34 ALLOCATED TO
 JDJ237I 0B34 ALLOCATED TO
 JDJ237I 89F1 ALLOCATED TO SYSLMOD
 JDJ237I 89E9 ALLOCATED TO SYSUT1
 JDJ237I JES  ALLOCATED TO SYSPRINT
 JDJ142I CMPLASM LKED - STEP WAS EXECUTED - COND CODE 0000
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.OBJSET        DELETED
 JDJ285I   VOL SER NOS= DA89F1.
 JDJ285I   TISP.MSP.LOAD                                KEPT
 JDJ285I   VOL SER NOS= MSPPP1.
 JDJ285I   SYS1.C.CLIB                                  KEPT
 JDJ285I   VOL SER NOS= MSP300.
 JDJ285I   SYS1.KGTLIB                                  KEPT
 JDJ285I   VOL SER NOS= MSP300.
 JDJ285I   TISP.ASM.LOAD1                               KEPT
 JDJ285I   VOL SER NOS= DA89F1.
 JDJ285I   SYS22088.T022454.SV086.CMPLASM.LDLOBJ        DELETED
 JDJ285I   VOL SER NOS= DA89E9.
 JDJ285I   JESF.JOB02589.SO0102                         SYSOUT
 JDJ373I STEP/LKED    / START  22088.0224
 JDJ374I STEP/LKED    / STOP   22088.0224 CPU      0MIN 00.00SEC  SRB      0MIN 00.00SEC VIRT   392K
 JDJ375I  JOB/CMPLASM / START  22088.0224
 JDJ376I  JOB/CMPLASM / STOP   22088.0224 CPU      0MIN 00.02SEC  SRB      0MIN 00.00SEC
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     1
0                             EXTERNAL SYMBOL DICTIONARY (ESD)
0SYMBOL   TYPE  ID   ADDR  LENGTH LDID  AMODE RMODE
0ARITHMAT  SD  0001 000000 0003DC        24    24
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     2
0
0  LOC  OBJECT CODE    ADDR1 ADDR2  STMT   SOURCE STATEMENT
0                                      1 ***********************************************************************
                                       2 * PGM TITLE : ARTITHAMATIC OPERATION                                  *
                                       3 * PURPOSE   : PERFORM ARITHAMATIC OPERATION IN PACKED DECIMAL NUMBERS *
                                       4 * AUTHOR    : SUNDAR                                             *
                                       5 * DATE      : 23-08-2022                                              *
                                       6 ***********************************************************************
 000000                                7 ARITHMAT CSECT
 000000 05C0                           8          BALR 12,0
                             00002     9          USING *,12
 000002 90EC D00C      0000C          10          STM 14,12,12(13)
 000006 50D0 C1A6      001A8          11          ST 13,SAVEAREA+4
 00000A 41E0 C1A2      001A4          12          LA 14,SAVEAREA
 00000E 50E0 D008      00008          13          ST 14,8(,13)
 000012 41D0 C1A2      001A4          14          LA 13,SAVEAREA
                                      15 ********************************* ACTUAL PGM *************
                                      16          OPEN (FOUT,OUTPUT)
 000016 0700                          17+         CNOP  0,4                      TO ALIGN WORD BOUNDARY          00013800
 000018 4510 C01E      00020          18+         BAL   1,*+8                    REG(1) ADDRESS OF PARM LIST     00014000
 00001C 8F                            19+         DC    AL1(143)                 DEFINE OPTION BYTE              00014600
 00001D 000314                        20+         DC    AL3(FOUT)                DEFINE ADDRESS OF DCB           00014700
 000020 0A13                          21+         SVC   19                       ISSUE SVC AS OPEN               00026000
                                      22          WTO 'FILE OPEN'
 000022 0700                          23+         CNOP  0,4                                                      00019600
 000024 4510 C034      00036          24+         BAL   1,JFM0002A                        BRANCH AROUND MESSAGE  00019700
 000028 000D                          25+         DC    AL2(13)             TEXT LENGTH                          00026500
 00002A 0000                          26+         DC    B'0000000000000000' MCS FLAGS                            00026600
 00002C C6C9D3C540D6D7C5              27+         DC    C'FILE OPEN'                                             00026800
 000036                               28+JFM0002A DS    0H                                                       00031900
 000036 0A23                          29+         SVC   35                                                       00032100
                                      30          PUT FOUT,TITLE
 000038 4110 C312      00314          31+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 00003C 4100 C25B      0025D          32+         LA    0,TITLE                           LOAD PARAMETER REG 0   00005000
 000040 58F0 1030      00030          33+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
 000044 05EF                          34+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
                                      35          PUT FOUT,BLANKA1
 000046 4110 C312      00314          36+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 00004A 4100 C20B      0020D          37+         LA    0,BLANKA1                         LOAD PARAMETER REG 0   00005000
 00004E 58F0 1030      00030          38+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
 000052 05EF                          39+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
 000054 FA31 C305 C309 00307 0030B    40 ADD      AP APK,BPK
                                      41          WTO 'ADD SUCCESS'
 00005A 0700                          42+         CNOP  0,4                                                      00019600
 00005C 4510 C06E      00070          43+         BAL   1,JFM0007A                        BRANCH AROUND MESSAGE  00019700
 000060 000F                          44+         DC    AL2(15)             TEXT LENGTH                          00026500
 000062 0000                          45+         DC    B'0000000000000000' MCS FLAGS                            00026600
 000064 C1C4C440E2E4C3C3              46+         DC    C'ADD SUCCESS'                                           00026800
 000070                               47+JFM0007A DS    0H                                                       00031900
 000070 0A23                          48+         SVC   35                                                       00032100
 000072 D210 C283 C3B4 00285 003B6    49          MVC SUBTITLE(17),=C'ADDTION RESULT IS'
 000078 4D80 C120      00122          50          BAS 8,PRINT
 00007C FC31 C305 C309 00307 0030B    51 MUL      MP APK,BPK
                                      52          WTO 'MUL SUCCESS'
 000082 0700                          53+         CNOP  0,4                                                      00019600
 000084 4510 C096      00098          54+         BAL   1,JFM0008A                        BRANCH AROUND MESSAGE  00019700
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     3
0
0  LOC  OBJECT CODE    ADDR1 ADDR2  STMT   SOURCE STATEMENT
0000088 000F                          55+         DC    AL2(15)             TEXT LENGTH                          00026500
 00008A 0000                          56+         DC    B'0000000000000000' MCS FLAGS                            00026600
 00008C D4E4D340E2E4C3C3              57+         DC    C'MUL SUCCESS'                                           00026800
 000098                               58+JFM0008A DS    0H                                                       00031900
 000098 0A23                          59+         SVC   35                                                       00032100
 00009A D214 C283 C3C5 00285 003C7    60          MVC SUBTITLE(21),=C'SUBTRACTION RESULT IS'
 0000A0 4D80 C120      00122          61          BAS 8,PRINT
 0000A4 FB31 C305 C309 00307 0030B    62 SUB      SP APK,BPK
                                      63          WTO 'SUB SUCCESS'
 0000AA 0700                          64+         CNOP  0,4                                                      00019600
 0000AC 4510 C0BE      000C0          65+         BAL   1,JFM0009A                        BRANCH AROUND MESSAGE  00019700
 0000B0 000F                          66+         DC    AL2(15)             TEXT LENGTH                          00026500
 0000B2 0000                          67+         DC    B'0000000000000000' MCS FLAGS                            00026600
 0000B4 E2E4C240E2E4C3C3              68+         DC    C'SUB SUCCESS'                                           00026800
 0000C0                               69+JFM0009A DS    0H                                                       00031900
 0000C0 0A23                          70+         SVC   35                                                       00032100
 0000C2 D217 C283 C376 00285 00378    71          MVC SUBTITLE(24),=C'MULTIPLICATION RESULT IS'
 0000C8 4D80 C120      00122          72          BAS 8,PRINT
 0000CC F853 C30C C305 0030E 00307    73 DEV      ZAP DEVED,APK
 0000D2 FA10 C309 C30B 0030B 0030D    74          AP BPK,CPK
 0000D8 FD51 C30C C309 0030E 0030B    75          DP DEVED,BPK
                                      76          WTO 'DEV SUCCESS'
 0000DE 0700                          77+         CNOP  0,4                                                      00019600
 0000E0 4510 C0F2      000F4          78+         BAL   1,JFM0010A                        BRANCH AROUND MESSAGE  00019700
 0000E4 000F                          79+         DC    AL2(15)             TEXT LENGTH                          00026500
 0000E6 0000                          80+         DC    B'0000000000000000' MCS FLAGS                            00026600
 0000E8 C4C5E540E2E4C3C3              81+         DC    C'DEV SUCCESS'                                           00026800
 0000F4                               82+JFM0010A DS    0H                                                       00031900
 0000F4 0A23                          83+         SVC   35                                                       00032100
 0000F6 DE0C C1FE C30C 00200 0030E    84          ED OUTRES,DEVED
 0000FC D225 C283 C38E 00285 00390    85          MVC SUBTITLE(38),=C'DEVISION RESULT FOR QUOTIENT,REMAINDER'
                                      86          PUT FOUT,SUBTITLE
 000102 4110 C312      00314          87+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 000106 4100 C283      00285          88+         LA    0,SUBTITLE                        LOAD PARAMETER REG 0   00005000
 00010A 58F0 1030      00030          89+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
 00010E 05EF                          90+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
                                      91          PUT FOUT,OUTRES
 000110 4110 C312      00314          92+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 000114 4100 C1FE      00200          93+         LA    0,OUTRES                          LOAD PARAMETER REG 0   00005000
 000118 58F0 1030      00030          94+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
 00011C 05EF                          95+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
 00011E 47F0 C152      00154          96          B FILECLS
 000122 F863 C1EA C305 001EC 00307    97 PRINT    ZAP VAR1,APK
 000128 D20C C1FE C1F1 00200 001F3    98          MVC OUTRES,MASK
 00012E DE0C C1FE C1EA 00200 001EC    99          ED OUTRES,VAR1
                                     100          PUT FOUT,SUBTITLE
 000134 4110 C312      00314         101+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 000138 4100 C283      00285         102+         LA    0,SUBTITLE                        LOAD PARAMETER REG 0   00005000
 00013C 58F0 1030      00030         103+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
 000140 05EF                         104+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
                                     105          PUT FOUT,OUTRES
 000142 4110 C312      00314         106+         LA    1,FOUT                            LOAD PARAMETER REG 1   00003800
 000146 4100 C1FE      00200         107+         LA    0,OUTRES                          LOAD PARAMETER REG 0   00005000
 00014A 58F0 1030      00030         108+         L     15,48(0,1)               LOAD PUT ROUTINE ADDR           00001000
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     4
0
0  LOC  OBJECT CODE    ADDR1 ADDR2  STMT   SOURCE STATEMENT
000014E 05EF                         109+         BALR  14,15                    LINK TO PUT ROUTINE             00001100
 000150 07F8                         110          BR 8
                                     111 FILECLS  CLOSE (FOUT)
 000152 0700                         112+         CNOP  0,4                               ALIGN LIST TO FULLWORD 00011800
 000154 4510 C15A      0015C         113+FILECLS  BAL   1,*+8                             LOAD REG1 W/LIST ADDR  00012000
 000158 80                           114+         DC    AL1(128)                          OPTION BYTE            00012600
 000159 000314                       115+         DC    AL3(FOUT)                         DCB ADDRESS            00012700
 00015C 0A14                         116+         SVC   20                                ISSUE CLOSE SVC        00008200
                                     117          WTO 'FILE CLOSE'
 00015E 0700                         118+         CNOP  0,4                                                      00019600
 000160 4510 C170      00172         119+         BAL   1,JFM0020A                        BRANCH AROUND MESSAGE  00019700
 000164 000E                         120+         DC    AL2(14)             TEXT LENGTH                          00026500
 000166 0000                         121+         DC    B'0000000000000000' MCS FLAGS                            00026600
 000168 C6C9D3C540C3D3D6             122+         DC    C'FILE CLOSE'                                            00026800
 000172                              123+JFM0020A DS    0H                                                       00031900
 000172 0A23                         124+         SVC   35                                                       00032100
                                     125 ********************************* ACTUAL PGM END *************
 000174 58D0 C1A6      001A8         126          L 13,SAVEAREA+4
 000178 98EC D00C      0000C         127          LM 14,12,12(13)
 00017C 58F0 0000      00000         128          L 15,0
 000180 07FE                         129          BR 14
                                     130          WTO 'PROGRAM EXECUTION END'
 000182 0700                         131+         CNOP  0,4                                                      00019600
 000184 4510 C1A0      001A2         132+         BAL   1,JFM0021A                        BRANCH AROUND MESSAGE  00019700
 000188 0019                         133+         DC    AL2(25)             TEXT LENGTH                          00026500
 00018A 0000                         134+         DC    B'0000000000000000' MCS FLAGS                            00026600
 00018C D7D9D6C7D9C1D440             135+         DC    C'PROGRAM EXECUTION END'                                 00026800
 0001A2                              136+JFM0021A DS    0H                                                       00031900
 0001A2 0A23                         137+         SVC   35                                                       00032100
                                     138 ***************************************************************
 0001A4                              139 SAVEAREA DS  18F
 0001EC                              140 VAR1     DS  PL7
 0001F3 2020202020202020             141 MASK     DC  X'20202020202020202020202020'
 000200                              142 OUTRES   DS  CL13
 00020D                              143 BLANKA1  DS  CL80
 00025D C1D9C9E3C8C1D4C1             144 TITLE    DC  CL40'ARITHAMATIC OPERATION IN ASSEMBLER'
 000285                              145 SUBTITLE DS  CL50
 0002B7                              146 BLANKA2  DS  CL80
 000307 0000010C                     147 APK      DC  PL4'10'
 00030B 005C                         148 BPK      DC  PL2'5'
 00030D 1C                           149 CPK      DC  PL1'1'
 00030E                              150 DEVED    DS  0PL6
 00030E                              151 QUO1     DS  PL4
 000312                              152 REM1     DS  PL2
                                     153 FOUT     DCB DDNAME=OUTFILE,DSORG=PS,MACRF=PM
 
 
                                     155+*                       DATA CONTROL BLOCK                              00030400
                                     156+*                                                                       00030500
 000314                              157+FOUT     DC    0F'0'                   ORIGIN ON WORD BOUNDARY          00031100
 
                                     159+*                       DIRECT ACCESS DEVICE INTERFACE                  00036500
 
 000314 0000000000000000             161+         DC    BL16'0'                  FDAD,DVTBL                      00036700
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     5
0
0  LOC  OBJECT CODE    ADDR1 ADDR2  STMT   SOURCE STATEMENT
0000324 00000000                     162+         DC    A(0)                     KEYLE,DEVT,TRBAL                00036900
 
                                     164+*                       COMMON ACCESS METHOD INTERFACE                  00064600
 
 000328 00                           166+         DC    AL1(0)                  BUFNO                            00064900
 000329 000001                       167+         DC    AL3(1)                  BUFCB                            00072400
 00032C 0000                         168+         DC    AL2(0)             BUFL                                  00072500
 00032E 4000                         169+         DC    BL2'0100000000000000'             DSORG                  00072900
 000330 00000001                     170+         DC    A(1)                     IOBAD                           00073500
 
                                     172+*                       FOUNDATION EXTENSION                            00073800
 
 000334 00                           174+         DC    BL1'00000000'                  BFTEK,BFLN,HIARCHY        00077200
 000335 000001                       175+         DC    AL3(1)                  EODAD                            00084500
 000338 00                           176+         DC    BL1'00000000'           RECFM                            00084700
 000339 000000                       177+         DC    AL3(0)                  EXLST                            00084900
 
                                     179+*                       FOUNDATION BLOCK                                00085300
 
 00033C D6E4E3C6C9D3C540             181+         DC    CL8'OUTFILE'            DDNAME                           00085500
 000344 02                           182+         DC    BL1'00000010'           OFLGS                            00087000
 000345 00                           183+         DC    BL1'00000000'                          IFLG              00087100
 000346 0050                         184+         DC    BL2'0000000001010000'   MACR                             00087800
 
                                     186+*                       BSAM-BPAM-QSAM INTERFACE                        00098300
 
 000348 00                           188+         DC    BL1'00000000'                                            00098500
 000349 000001                       189+         DC    AL3(1)                  CHECK, GERR, PERR                00098700
 00034C 00000001                     190+         DC    A(1)                    SYNAD                            00098800
 000350 0000                         191+         DC    H'0'                    CIND1, CIND2                     00099900
 000352 0000                         192+         DC    AL2(0)                  BLKSIZE                          00100300
 000354 00000000                     193+         DC    F'0'                    WCPO, WCPL, OFFSR, OFFSW         00101000
 000358 00000001                     194+         DC    A(1)                    IOBA                             00101100
 00035C 00                           195+         DC    AL1(0)                  NCP                              00101200
 00035D 000001                       196+         DC    AL3(1)                  EOBR, EOBAD                      00101300
 
                                     198+*                            QSAM INTERFACE                             00106800
 
 000360 00000001                     200+         DC    A(1)                     RECAD                           00107000
 000364 0000                         201+         DC    H'0'                    QSWS                             00107200
 000366 0000                         202+         DC    AL2(0)         LRECL                                     00106300
 000368 00                           203+         DC    BL1'00000000'           EROPT                            00108000
 000369 000001                       204+         DC    AL3(1)                  CNTRL                            00108100
 00036C 00000000                     205+         DC    F'0'                    PRECL                            00108200
 000370 00000001                     206+         DC    A(1)                    EOB                              00108300
 000000                              207          END ARITHMAT
 000378 D4E4D3E3C9D7D3C9             208                =C'MULTIPLICATION RESULT IS'
 000390 C4C5E5C9E2C9D6D5             209                =C'DEVISION RESULT FOR QUOTIENT,REMAINDER'
 0003B6 C1C4C4E3C9D6D540             210                =C'ADDTION RESULT IS'
 0003C7 E2E4C2E3D9C1C3E3             211                =C'SUBTRACTION RESULT IS'
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     6
0                               RELOCATION DICTIONARY (RLD)
0POS.ID   REL.ID   FLAGS   ADDRESS
0 0001     0001      08    00001D
  0001     0001      08    000159
1              ASSEMBLER V02L40   DATE 22.03.29  TIME 02.24.55                                                 PAGE     7
0                             ASSEMBLER STATISTICS
0NO STATEMENT FLAGGED IN THIS ASSEMBLY
 
 SPECIFIED OPTIONS - OBJECT,ALIGN,NODECK
   OPTIONS FOR THIS ASSEMBLY
     ALIGN,NOBATCH,NODECK,ESD,FLAG(0),LANGLVL(0),LINECOUNT(54),LIST,NOMCALL,
     NOMLOGIC,NONAME,OBJECT,NORENT,RLD,NOTERM,NOTEST,NOXREF,SYSPARM()
 
   SOURCE STATEMENTS =   211, PROGRAM SIZE = 000003DC BYTES
   TOTAL RECORDS READ FROM SYSTEM INPUT            71
   TOTAL RECORDS READ FROM SYSTEM LIBRARY        2734
   TOTAL RECORDS OF OBJECT                         21
   TOTAL RECORDS PUNCHED                            0
   TOTAL RECORDS PRINTED                          260
   HIGHEST SEVERITY CODE =    0
-END OF COMPILATION
 PROGRAM UNITS =    1, HIGHEST SEVERITY CODE =    0
1
+              LINKAGE EDITOR                    DATE 22.03.29    TIME 02.24.55                               PAGE    1
0
 OPTIONS SPECIFIED - XREF,LET,LIST,MAP,TEST
         GENERATED - NOMAP
                           SIZE1 <DEFAULT  VALUE>=  382976
                           SIZE2 <DEFAULT  VALUE>=   36864
                           MAX. LENGTH OF OUTPUT TEXT BLOCK =  6144
                                                  LINECOUNT =    60
0** MEMBER NAME **  ASMTEM   NOW REPLACED IN LIBRARY.
 ** OUTPUT LIBRARY NAME ** TISP.ASM.LOAD1
                           AUTHORIZATION CODE IS   0 .
 ** TTR ** (   46 / 64 -   47 /  3)
 LOAD MODULE IS AMODE 24 AND RMODE 24.
 **NOW    152 TRACK(S) LEFT UNUSED IN DATA SET COVERING    1 EXTENT(S).
-               *** CROSS REFERENCE TABLE ***
-*** CONTROL SECTION ***                              ENTRY
       NAME   ORIGIN  LENGTH  A/R MODE                 NAME  LOCATION
   ARITHMAT        0     3DC    24/24
-      LOCATION  REFERS TO SYMBOL  IN SECTION
                ***NO EXTERNAL REFERENCE***
-ENTRY ADDRESS         0
0TOTAL LENGTH        3E0  (       992 IN DECIMAL  )
