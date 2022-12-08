import java.lang.*;

class Demo extends Thread {

    public void run() {
        try {
            for (int i = 1; i < 10; i++) {
                System.out.println(Thread.currentThread().getName() + " : " + i);
                Thread.sleep(500);
            }
        } catch (InterruptedException obj1) {
        }
    }
}

class ThreadDemo6 {

    public static void main(String a[]) {
        System.out.println("Inside main method");
        Demo s1 = new Demo();
        Demo s2 = new Demo();

        Thread t1 = new Thread(s1);
        Thread t2 = new Thread(s2);
        try {
            t1.setName("first");
            t2.setName("Second");

            t1.start();
            t1.join();
            System.out.println("End of main method");

            t2.start();
            t2.join();
        } catch (InterruptedException obj2) {

        }
        System.out.println("End of main method2");

    }

}
