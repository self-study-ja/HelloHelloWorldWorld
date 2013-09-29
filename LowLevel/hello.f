! gfortran 
! Hello, World.
        CHARACTER HELLOWORLD*14
        CALL H(HELLOWORLD)
        CALL E(HELLOWORLD)
        CALL L(HELLOWORLD)
        CALL L(HELLOWORLD)
        CALL O(HELLOWORLD)
        CALL comma(HELLOWORLD)
        CALL W(HELLOWORLD)
        CALL O(HELLOWORLD)
        CALL R(HELLOWORLD)
        CALL L(HELLOWORLD)
        CALL D(HELLOWORLD)
        CALL dot(HELLOWORLD)
        END
        
        SUBROUTINE H(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD=CHAR(72)
            WRITE (*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE E(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(2:3)=CHAR(101)
            WRITE (*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE L(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            IF (HELLOWORLD(3:4) .eq. "") THEN
                GOTO 1
            ENDIF
            
            IF (HELLOWORLD(4:5) .eq. "") THEN
                GOTO 3
            ENDIF
            
            HELLOWORLD(11:12)=CHAR(108)
            GOTO 2

3           HELLOWORLD(4:5)=CHAR(108)
            GOTO 2

1           HELLOWORLD(3:4)=CHAR(108)
2           WRITE (*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE O(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            IF (HELLOWORLD(5:6) .ne. "") THEN
                GOTO 1
            ENDIF

            HELLOWORLD(5:6)=CHAR(111)
            GOTO 2

1           HELLOWORLD(9:10)=CHAR(111)
2           WRITE(*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE comma(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(6:7)=CHAR(44)
            WRITE(*,*) HELLOWORLD
            RETURN
            END

        SUBROUTINE W(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(8:9)=CHAR(87)
            WRITE(*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE R(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(10:11)=CHAR(114)
            WRITE(*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE D(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(12:13)=CHAR(100)
            WRITE(*,*) HELLOWORLD
            RETURN
        END

        SUBROUTINE dot(HELLOWORLD)
            CHARACTER HELLOWORLD*14
            HELLOWORLD(13:14)=CHAR(46)
            WRITE(*,*) HELLOWORLD
            RETURN
        END
