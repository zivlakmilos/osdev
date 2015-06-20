.section .init
    /* gcc will nicely put the content of crtend.o's init section here */
    popl %ebp
    ret

.section .fini
    /* gcc will nicely put the content of crtbegin.o's .fini sectoin here */
    popl %ebp
    ret
