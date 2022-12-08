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

class ThreadDemo4 {

    public static void main(String a[]) throws InterruptedException {
        System.out.println("Inside main method");
        Demo s1 = new Demo();
        Demo s2 = new Demo();

        Thread t1 = new Thread(s1);
        Thread t2 = new Thread(s2);

        t1.setName("first");
        t2.setName("Second");

        t1.start();
        t2.start();

        t1.join();
        t2.join();
        System.out.println("End of main method");
    }

}
