#include <stdio.h>
#include <stdlib.h>
//checkPrime
//Nhập vào một số nguyên
// kiểm tra xem số đó có phải số nguyên tố hay không
//số nguyên tố là gì:
// là số chia hết cho một và chính nó
// --------
// sô nguyên tố là số từ 2 trở lên
// => nếu mà bé hơn 2 thì không phải số nguyên tố
//----------
// nếu từ 2 trở lên thì có thể thôi
// nếu n là số nguyên tố thì n sẽ không chia hết cho số nào từ 2 đến n-1
// break không ngừng chương trình nhưng ngừng dòng lặp



int main()
{
    int number;
    printf("\nplz, input a number: ");
    scanf("%d",&number);

    if ( number >= 2){
        // kiểm tra tiếp
        for ( int i = 2 ; i <= number-1; i++){
            if ( number  % i == 0){
                printf("\n%đ is not prime",number);
                return;// ngừng chương trình liền
            }
        }
        printf("\n%d is prime",number);
    }else{
        printf("\n%d is not prime",number);
    }
    return 0;
}
