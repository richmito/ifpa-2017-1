package lerURL;

import java.net.*;
import java.io.*;

public class lerURL {
public static void main(String[] args) throws IOException, Exception{
		
	URL oracle = new URL("https://raw.githubusercontent.com/richmito/ifpa-2017-1/master/helloworld.txt");
    BufferedReader in = new BufferedReader(
    new InputStreamReader(oracle.openStream()));

    String inputLine;
    while ((inputLine = in.readLine()) != null)
        System.out.println(inputLine);
    in.close();
}

}

