import java.lang.*;

class Demo extends Thread {

    public void run() {
        for (int i = 1; i < 1000; i++) {
            System.out.println(Thread.currentThread().getName() + " : " + i);
            Thread.sleep(500);
        }
    }
}

class ThreadDemo3 {
    public static void main(String str[]) {
        System.out.println("Inside main method");
        Demo s1 = new Demo();
        Demo s2 = new Demo();

        Thread t1 = new Thread(s1);
        Thread t2 = new Thread(s2);

        t1.setName("first");
        t2.setName("Second");

        t1.start();
        t2.start();
    }

}
