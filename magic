import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.lang.reflect.Method;
import java.lang.reflect.Parameter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;


@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.PARAMETER)
@interface Param {
    String value();
}

public class Main2 {
    public static void main(String[] args) throws Exception {
        magic("f1");
        magic("f2");
    }

    private static boolean f1(@Param("x6") boolean x6, @Param("x7") boolean x7, @Param("y6") boolean y6) {
        return (x6 || x7) && !(x6 && y6);
    }

    private static boolean f2(@Param("x7") boolean x7, @Param("y7") boolean y7) {
        return x7 && y7;
    }

    private static void magic(String funName) throws Exception {
        System.out.println("Run function " + funName);
        //noinspection OptionalGetWithoutIsPresent
        Method method = Stream.of(Main2.class.getDeclaredMethods())
                .filter(m -> m.getName().contains(funName))
                .findFirst()
                .get();
        Parameter[] parameters = method.getParameters();
        List<String> paramNames = Stream.of(parameters)
                .map(p -> p.getAnnotation(Param.class).value())
                .collect(Collectors.toList());
        System.out.print("Params:");
        for (String p : paramNames) {
            System.out.println(p);
        }
        System.out.println("Variants:");
        ArrayList<ArrayList<Boolean>> paramValues = generateSequence(paramNames.size());
        for (ArrayList<Boolean> line : paramValues) {
            boolean ret = (boolean) method.invoke(null, line.toArray());
            if(ret) {
                for (int i = 0; i < line.size(); i++) {
                    System.out.print(paramNames.get(i) + " = " + line.get(i) + " ");
                }
                System.out.println();
            }
        }

    }

    private static ArrayList<ArrayList<Boolean>> generateSequence(int level) {
        ArrayList<ArrayList<Boolean>> prev = level == 1 ? new ArrayList<>(Collections.singletonList(new ArrayList<>())) : generateSequence(level - 1);
        ArrayList<ArrayList<Boolean>> ret = new ArrayList<>();
        ret.addAll(prev.stream().map(ArrayList::new).peek(line -> line.add(false)).collect(Collectors.toList()));
        ret.addAll(prev.stream().map(ArrayList::new).peek(line -> line.add(true)).collect(Collectors.toList()));
        return ret;
    }
}
