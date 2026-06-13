//==================== music/Playable.java ====================

package music;

public interface Playable {
    void play();
}


//==================== music/string/Veena.java ====================

package music.string;

import music.Playable;

public class Veena implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Veena");
    }
}


//==================== music/wind/Saxophone.java ====================

package music.wind;

import music.Playable;

public class Saxophone implements Playable {

    @Override
    public void play() {
        System.out.println("Playing Saxophone");
    }
}


==================== live/Test.java ====================

package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        Veena veena = new Veena();
        veena.play();

        Saxophone saxophone = new Saxophone();
        saxophone.play();

        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}