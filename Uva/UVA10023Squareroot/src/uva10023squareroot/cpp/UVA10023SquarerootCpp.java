package uva10023squareroot.cpp;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Abdul Ohab
 */
public class UVA10023SquarerootCpp {
        Scanner scan = new Scanner(System.in);
        static final BigInteger two = new BigInteger("2");
        static final BigInteger one = new BigInteger("1");

        public static void main(String[] args) {
                Scanner scanner = new Scanner(System.in);
                int N = scanner.nextInt();
                while (N-- > 0) {
                        BigInteger y = scanner.nextBigInteger();
                        BigInteger upper = y.divide(two), lower = one, k;
                        while (upper.compareTo(lower) > 0) {
                                k = (upper.add(lower)).divide(two);
                                if (y.divide(k).compareTo(k) > 0) {
                                        lower = k.add(one);
                                } else {
                                        upper = k;
                                }
                        }
                        System.out.println(lower);
                        if (N > 0) {
                                System.out.println();
                        }
                }

        }
}
