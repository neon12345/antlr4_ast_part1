import org.antlr.runtime.Token;
import org.antlr.runtime.CommonToken;
import org.antlr.runtime.TokenStream;
import org.antlr.v4.tool.Grammar;
import org.antlr.v4.runtime.RecognitionException;
import org.antlr.v4.runtime.misc.Interval;
import org.antlr.v4.runtime.atn.ATNState;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

/*
    file: grammar_list.java

    Print grammar state list as:
        state, interval.a, interval.b\n
        ...

    usage:
        java -cp "/usr/share/java/antlr4-4.13.0-complete.jar:." Main grammar_file_path

    compile:
        javac -cp /usr/share/java/antlr4-4.13.0-complete.jar grammar_list.java
*/
class Main {
    private static void test(String name) {
        try {
            String contents = new String(Files.readAllBytes(Paths.get(name)));
            Grammar g = new Grammar(contents);
            TokenStream tokens = g.getTokenStream();

            for (ATNState state : g.getATN().states) {
                int stateNr = state.stateNumber;
                Interval interval = g.getStateToGrammarRegion(stateNr);
                System.out.print(stateNr);
                System.out.print(",");
                if(interval != null && interval.a != -1) {
                    CommonToken token_a = (CommonToken)tokens.get(interval.a);
                    CommonToken token_b = (CommonToken)tokens.get(interval.b);
                    int index_a = token_a.getStartIndex();
                    int index_b = token_b.getStopIndex();
                    System.out.print(index_a);
                    System.out.print(",");
                    System.out.print(index_b);
                } else {
                    System.out.print(-1);
                    System.out.print(",");
                    System.out.print(-1);
                }
                System.out.println("");
            }
        } catch(Exception e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        test(args[0]);
    }
}
