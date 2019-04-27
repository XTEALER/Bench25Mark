import java.util.concurrent.ThreadLocalRandom;
import java.time.Instant;

/* (long) generator from: https://stackoverflow.com/questions/46737108/11-digit-random-number-in-java/
Program to measure elapsed Runtime of some code.
Use as wish :) @xtealer
*/

class TimeMeasure
{
	public static void main(String[] args) throws InterruptedException {
    int x = 0, number_count = 25000000;
    ThreadLocalRandom random = ThreadLocalRandom.current();
    
    // timer starts
    long startTime = Instant.now().getEpochSecond();
    // -----------------------your-code-here------------------------------

    for(x = 0; x < number_count; x++) {
      long OutN = random.nextLong(1_000_000_000L, 10_000_000_000L);
      System.out.println("Number[" + (x + 1) + "] = " + OutN);
    }

		// -------------------------------------------------------------------
    long endTime = Instant.now().getEpochSecond();
    // timer stops
    
    long timeElapsed = endTime - startTime;
		System.out.println("\n>>> " + timeElapsed + " SECONDS TAKEN (JAVA)!");
  }
}



/*
// lateer sometime in the future to test
public long randomLong() {
  x ^= (x << 21);
  x ^= (x >>> 35);
  x ^= (x << 4);
  return x;
}
*/